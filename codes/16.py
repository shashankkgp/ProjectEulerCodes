n=2**1000
ans=0
while(n!=0):
    ans=ans+(n%10)
    n=n/10
print(ans)
