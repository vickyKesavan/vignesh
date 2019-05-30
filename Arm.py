a=int(input())
order=len(str(a))
temp=a
num=0
while temp>0:
    rem=temp%10
    num += rem**order
    temp=temp//10
if a==num:
    print("yes")
else:
    print("no")
#vignesh
