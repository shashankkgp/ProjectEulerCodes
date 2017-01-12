import math
s=[0]*28124
for i in range(1,28124):
	j=2*i
	while j<=28123:
		s[j]=s[j]+i
		j=j+i

t=[i for i in range(1,28124) if s[i]>i]
a=t
u=[i+j for i in t for j in t]
v=list(set(range(1,28124))-set(u))
#print(u)

ans=sum(i for i in v)

print (ans)