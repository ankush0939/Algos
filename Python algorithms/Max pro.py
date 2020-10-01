n=int(input())
lis=[]
for i in range(n):
    lis.append(int(input()))
pro=max(lis)
for i in range(n):
    if lis[i]==pro:
        lis.pop(i)
pro*=max(lis)
print(pro)