row=int(input())
col=int(input())

arr=[]

for i in range(row):
    arr.append(list(map(int,input().split())))

for j in range(col):
    minValue=arr[0][j]

    for i in range(1,row):
        if arr[i][j]<minValue:
            minValue=arr[i][j]

    print(minValue)