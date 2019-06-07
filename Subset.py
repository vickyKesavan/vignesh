a=list(map(int,input().split()))
b=list(map(int,input().split()))
c=list(map(int,input().split()))
flag=0
if (all(x in b for x in c)):
    flag=1
if (flag):
    print('YES')
else:
    print('NO')
    
    
#vignesh
