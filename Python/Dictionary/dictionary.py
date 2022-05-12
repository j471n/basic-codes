import json                             # importing json
from difflib import get_close_matches   #importing get_close_matches

data = json.load(open("data.json"))     #loading data.json file

def translate(word):
    word = word.lower()
    
    #cheking for word in file
    if word in data:
        return data[word]
    #checking capitalize word in file
    elif word.title() in data:
        return data[word.title()]
     #checking uppercase word in file
    elif word.upper() in data:
        return data[word.upper()]
     #getting close matches if the word is not correct properly
    elif len(get_close_matches(word , data.keys())) > 0 :
        print("Did you mean %s instead..." %get_close_matches(word, data.keys())[0])
        decide = input("Yes or No (y/n) : ")
        
        if decide == "y":
            return data[get_close_matches(word , data.keys())[0]]
            
        elif decide == "n":
            return("Pugger your paw steps on wrong keys. ")
            
        else:
            return("You have entered wrong input please enter just y or n")
            
    else:
        print("Pugger your paw steps on wrong keys.")


def main():

    i = "y"
    
    while i=="y":
    
        word = input("\nEnter the word you want to Search : ")
        output = translate(word)
        
        if type(output) == list:
            for item in output:
                print("\n-", item)
        else:
            print("\n-", output, "\n")
        i = input("\nDo you want to Search again (y/n): ")
        
        
if __name__ == "__main__":
    main()
    input("Press Enter to exit...")
