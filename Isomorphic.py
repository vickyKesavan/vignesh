def isIso(a, b):
    m = {}
    r={}
    for i, c in enumerate(a):
        if c in m:
            if b[i] != m[c]:
                return('no')
        else:
            m[c] = b[i]
        if b[i] in r:
            if c != r[b[i]]:
                return('no')
        else:
            r[b[i]] = c
    return("yes")
c,d=(input().split())
print(isIso(c,d))

#vignesh
