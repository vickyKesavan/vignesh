am=(input())
if ((int(ord(am))>=65 and int(ord(am))<=122)):
    
    if am in ('a','e','i','o','u','A','E','I','O','U'):
        print("Vowels")
    else:
        print("Consonants")
else:
    print("Invalid")
