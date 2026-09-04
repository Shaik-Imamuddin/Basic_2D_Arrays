row, col = map(int, input().split())
arr = []

for i in range(row):
    arr.append(list(map(int, input().split())))

maxsum = float('-inf')
maxrow = 0

for i in range(row):
    total = 0
    for j in range(col):
        total += arr[i][j]

    if total > maxsum:
        maxsum = total
        maxrow = i

for j in range(col):
    print(arr[maxrow][j], end=" ")