row=int(input())
col=int(input())

arr=[]

for i in range(row):
    arr.append(list(map(int,input().split())))

res=[[0]*row for i in range(col)]

for i in range(row):
    for j in range(col):
        res[j][row-i-1]=arr[i][j]

for i in range(col):
    for j in range(row):
        print(res[i][j],end=" ")
    print()