row = int(input())
col = int(input())

arr = []

for i in range(row):
    row_data = list(map(int, input().split()))
    arr.append(row_data)

for i in range(col):
    max_value = arr[0][i]

    for j in range(row):
        if arr[j][i] > max_value:
            max_value = arr[j][i]

    print(max_value, end=" ")