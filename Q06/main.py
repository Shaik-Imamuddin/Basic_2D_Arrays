n = int(input())
arr=[]

for i in range(n):
    arr.append(list(map(int,input().split()))[:n])

ld=rd=0

for i in range(n):
    rd+=arr[i][i]
    ld+=arr[i][n-i-1]

print(rd,ld)