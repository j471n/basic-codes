import os
import time
import sys

choice = input("Shut Down your Computer ? ( y or n ) : ")

if choice == 'y' or choice == 'Y':
    os.system("shutdown /s /t 10")
    print ('Tasks done, now shutting down in 10 seconds..')
    abort_choice = input('Press "a" to Abort shutdown : ')
    if abort_choice == 'a' or abort_choice == 'A':
        os.system('shutdown /a')
        input("MISSION ABORTED. :)")
    else: exit()
else:
    input("Press ENTER to exit.......")
