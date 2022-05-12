import socket

#this is for getting your ip address
hostname = socket.gethostname()
IPAddr = socket.gethostbyname(hostname)


for a in range(1, 15):
	print('Checking the system...............Failed : Trying again... ', a)

print('\n\n\nChecking the system...............Successfull : Got access...')
print('My ip address is : ', IPAddr)
input('Press any key to exit >>>>>>')