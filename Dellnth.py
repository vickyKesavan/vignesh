def deleting(inp,del1):
    inp1=inp[0:del1-1]
    inp2=inp[del1:len(inp)]
    return inp1+inp2
a,del1=list(map(int,input().split()))
inp=list(str(a))
b=deleting(inp,del1)
b.sort()
print(b)
#vignesh


