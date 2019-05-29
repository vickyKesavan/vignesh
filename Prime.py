n=int(input())
if n<=1000:
    for i in range(2,n):
        if (n%i)!=0:
            print("yes")
            break
        else:
            print("no")
            break
else:
    print("invalid")
#vignesh
