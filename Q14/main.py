row = int(input())
col = int(input())

arr = []

for i in range(row):
    current_row = list(map(int, input().split()))
    arr.append(current_row)

min_sum = float('inf')
min_row = 0

for i in range(row):
    current_sum = sum(arr[i])

    if current_sum < min_sum:
        min_sum = current_sum
        min_row = i

for j in range(col):
    print(arr[min_row][j], end=" ")