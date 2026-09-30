n = int(input())
arr = []

for i in range(n):
    arr.append(list(map(int, input().split())))

for i in range(n):
    for j in range(n):
        if (i == j and arr[i][j] != 1) or (i != j and arr[i][j] != 0):
            print("Not an Identity Matrix")
            exit()

print("Identity Matrix")