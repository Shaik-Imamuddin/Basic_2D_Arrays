row = int(input())
col = int(input())

arr=[]
sum=0

for i in range(row):
    arr.append(list(map(int,input().split()))[:col])

for i in range(row):
    for j in range(col):
        sum+=arr[i][j]
print(sum)