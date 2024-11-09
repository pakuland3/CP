n,m=map(int,input().split())
res=0
x=list(map(int,input().split()))
a=list(map(int,input().split()))
x.append(n+1)
a.append(0)
done=0
if x[0]>1:
    print(-1)
else: 
    for i in range(m):
        if a[i]<x[i+1]-x[i]:
            done=1
            print(-1)
            break
        if i==m-1 and a[i]>x[i+1]-x[i]:
            done=1
            print(-1)
            break
        a[i+1]+=a[i]-(x[i+1]-x[i])
        res+=(x[i+1]-x[i]-1)*(x[i+1]-x[i])/2+(x[i+1]-x[i])*(a[i]-(x[i+1]-x[i]))
    if not done:
        print(res)