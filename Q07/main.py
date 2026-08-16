row = int(input())
col = int(input())
arr=[]

for i in range(row):
    arr.append(list(map(int,input().split()))[:col])

max = 0

for i in range(row):
    for j in range(col):
        if arr[i][j]>max:
            max=arr[i][j]

print(max)