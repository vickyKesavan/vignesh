def repeat(a):
    size=len(a)
    repeated=[]
    for i in range(size):
        j=i+1
        for k in range(i):
            if a[i]==a[k] and a[i] not in repeated:
               repeated.append(a[i])
    return repeated
a=list(map(int,input().split()))
a.sort()
print(repeat(a))
#vignesh
