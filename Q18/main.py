row,col=map(int,input().split())

arr=[]
for i in range(row):
    arr.append(list(map(int,input().split())))

res=[[0]*row for i in range(col)]

for i in range(col):
    for j in range(row):
        res[i][j]=arr[j][i]

for i in range(col):
    for j in range(row):
        print(res[i][j],end=" ")
    print()