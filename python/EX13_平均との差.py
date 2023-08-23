from math import floor
n = int(input())
a = list(map(int, input().split()))
mean=floor(sum(a)/len(a))
for i in range(len(a)):
    if a[i]>mean:
        print(a[i]-mean)
    else:
        print(mean-a[i])
