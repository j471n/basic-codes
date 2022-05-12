import time
import webbrowser as web
import pyautogui as pg
import wikipedia
import requests
from selenium import webdriver
from bs4 import BeautifulSoup
import platform
import os


def playonyt(topic):
    # Will play video on following topic, takes about 10 to 15 seconds to load
    url = "https://www.youtube.com/results?q=" + topic
    count = 0
    cont = requests.get(url)
    data = cont.content
    data = str(data)
    lst = data.split('"')
    for i in lst:
        count += 1
        if i == "WEB_PAGE_TYPE_WATCH":
            break

    if lst[count - 5] == "/results":
        raise Exception("Video Not Found, Try a diffrent one.")

    print("Videos found, opening most recent video.")
    web.open("https://www.youtube.com" + lst[count - 5])
    return "https://www.youtube.com" + lst[count - 5]


if __name__ == "__main__":
    video_name = "see you again"  # input("Enter the video name: ")
    playonyt(video_name)
