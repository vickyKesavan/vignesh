def once(a,b):
    c=a[0]
    for i in range(1,b):
        c=c^a[i]
    return c
d=int(input())
a=list(map(int,input().split()))
b=len(a)
print(once(a,b))
#vignesh
