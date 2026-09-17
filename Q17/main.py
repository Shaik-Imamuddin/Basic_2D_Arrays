row1,col1=map(int,input().split())
arr1=[]
for i in range(row1):
    arr1.append(list(map(int,input().split())))

row2,col2=map(int,input().split())
arr2=[]
for i in range(row2):
    arr2.append(list(map(int,input().split())))

res=[[0]*col2 for i in range(row1)]

for i in range(row1):
    for j in range(col2):
        res[i][j]=0
        for k in range(col1):
            res[i][j]+=(arr1[i][k]*arr2[k][j])

for i in range(row1):
    for j in range(col2):
        print(res[i][j],end=" ")
    print()