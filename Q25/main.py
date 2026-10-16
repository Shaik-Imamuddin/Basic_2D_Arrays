row = int(input())
col = int(input())
arr = []

for i in range(row):
    arr.append(list(map(int, input().split())))

res = [[0] * row for i in range(col)]

for i in range(row):
    for j in range(col):
        res[col - j - 1][i] = arr[i][j]

for i in range(col):
    for j in range(row):
        print(res[i][j], end=" ")
    print()