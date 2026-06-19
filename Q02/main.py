row = int(input())
col = int(input())

arr=[]
sum=0

for i in range(row):
    arr.append(list(map(int,input().split()))[:row])

for i in range(row):
    for j in range(col):
        sum+=arr[i]
    print()