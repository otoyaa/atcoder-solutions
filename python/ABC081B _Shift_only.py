n=int(input())
a=list(map(int, input().split()))
c=0
f=True

while f:
    c+=1
    for i in range(n):
        if a[i] % 2 == 0:
            a[i]//=2
        else:
            f = False
            c-=1
            break
print(c)
        
