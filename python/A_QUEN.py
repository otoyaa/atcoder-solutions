S=str(input())
C=str(input())
add=""

for i in range(len(S)):
    if S[i]==C:
        add+=C
        add+=C
    else:
        add+=S[i]
    
print(add)
