n1,n2=map(int,input().split())
for i in range(n1,n2+1):
    v=len(str(i))
    sum=0
    temp=i
    while temp>1:
        rem=temp%10
        sum += rem**v
        temp=temp//10
    if i==sum:
        print(i)
        
#vignesh
