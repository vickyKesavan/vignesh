a=int(input())
string=input()
vowels=('a','e','i','o','u')
for i in string.lower():
    if i in vowels:
        string=string.replace(i,'')
string1=string[::-1]     
print(string1)
        
#vignesh
