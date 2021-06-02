n, k = map(int, input().split())
a=[1]
for i in range(1,n):
 for j in range(i-1,i-k-1,-1):
   if j<0 :
     break
   a.append(0)
   a[i]+=a[j]

print(a[n-1])
