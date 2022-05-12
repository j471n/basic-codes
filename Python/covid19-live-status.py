#impoting time and covid()
import datetime
from covid import Covid

now = datetime.datetime.now()
print("Current date and time : ",now.strftime("%d/%m/%Y, 	%H:%M hrs\n"))

# initializing variable covid
covid = Covid()

# printing the current date about world as active, recovered and deaths 
print("Total active cases in world:", covid.get_total_active_cases())
print("Total recovered cases in world:", covid.get_total_recovered())
print("Total deaths in world:", covid.get_total_deaths())

#input the country name to get the status specificly
country_name = input("\nEnter Contry name to get status : ")

#getting status by country
cases = covid.get_status_by_country_name(country_name)

# printing status by for loop
for x in cases:
    print(x, ":", cases[x])


input("\nPress enter to exit....")




