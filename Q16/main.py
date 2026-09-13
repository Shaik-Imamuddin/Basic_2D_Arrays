row,col=map(int,input().split())

arr1=[]
arr2=[]

for i in range(row):
    arr1.append(list(map(int,input().split())))

for i in range(row):
    arr2.append(list(map(int,input().split())))

res=[[0]*col for i in range(row)]

for i in range(row):
    for j in range(col):
        res[i][j]=arr1[i][j]-arr2[i][j]

for i in range(row):
    for j in range(col):
        print(res[i][j],end=" ")
    print()