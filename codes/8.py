import sys

s=sys.stdin.read()
ans=0
s=s.replace('\n','')
for i in range(len(s)-12):
    n=1
    for j in range(13):
        if (s[i+j]=='\n'):
            print 'SHashank'
        else:
            n=n*(ord(s[i+j])-48)
    ans=max(ans,n)
print(ans)
