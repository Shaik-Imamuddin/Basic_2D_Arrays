row,col = map(int,input().split())

arr1 = []
arr2 = []

for i in range(row):
    arr1.append(list(map(int,input().split())))

for i in range(row):
    arr2.append(list(map(int,input().split())))

res = []
for i in range(row):
    temp = []
    for j in range(col):
        temp.append(arr1[i][j] + arr2[i][j])
    res.append(temp)

for i in range(row):
    for j in range(col):
        print(res[i][j], end=" ")
    print()