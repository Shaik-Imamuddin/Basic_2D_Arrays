row = int(input())
col = int(input())

arr = []

for i in range(row):
    row_data = list(map(int, input().split()))
    arr.append(row_data)

for i in range(row):
    min_value = arr[i][0]

    for j in range(col):
        if arr[i][j] < min_value:
            min_value = arr[i][j]

    print(min_value, end=" ")