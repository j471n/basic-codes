import subprocess

video_url = input('Enter url : ')
download_url = 'savefrom.net/'+video_url

#webbrowser.open(download_url)

#chooseing a browser to open link
choose = input("Which browser you want to use : ")

#its for firefox browser    
if choose == "firefox" or choose == "Firefox"or choose == "1":
    subprocess.call([r'C:\Program Files\Mozilla Firefox\firefox.exe',
    '-new-tab', download_url])

#its for chrome browser
if choose == "chrome" or choose == "chrome" or choose == "2":
    subprocess.call([r'C:\Program Files (x86)\Google\Chrome\Application\chrome.exe',
    '-new-tab', download_url])



