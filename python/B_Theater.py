n = int(input())
counter = 0
for _ in range(n):
    l,r = map(int, input().split())
    for i in range(l,r+1):
        counter+=1

print(counter)    
