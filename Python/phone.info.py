import phonenumbers

from phonenumbers import carrier

from phonenumbers import geocoder

p = phonenumbers.parse("number")
print(geocoder.description_for_number(p, "en"))
print(carrier.name_for_number(p,"en"))


