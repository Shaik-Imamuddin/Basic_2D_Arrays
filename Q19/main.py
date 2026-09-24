n=int(input())

arr=[]

for i in range(n):
    arr.append(list(map(int,input().split())))

for i in range(n):
    for j in range(i+1,n):
        temp=arr[i][j]
        arr[i][j]=arr[j][i]
        arr[j][i]=temp

for i in range(n):
    for j in range(n):
        print(arr[i][j],end=" ")
    print()