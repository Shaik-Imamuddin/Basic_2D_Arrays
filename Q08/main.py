row = int(input())
col = int(input())

arr=[]

for i in range(row):
    arr.append(list(map(int,input().split()))[:col])

min = arr[0][0]

for i in range(row):
    for j in range(col):
        if arr[i][j]<min:
            min=arr[i][j]

print(min)