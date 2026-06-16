row = int(input())
col = int(input())

arr=[]

for i in range(row):
    arr.append(list(map(int,input().split()))[:row])
    
for i in range(row):
    for j in range(col):
        print(arr[i][j],end=" ")
    print()