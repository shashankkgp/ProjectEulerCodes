import math
s=[0]*10001
for i in range(1,10001):
	j=2*i
	while j<=10000:
		s[j]=s[j]+i
		j=j+i
ans=0
for i in range(1,10001):
	x=s[i]
	print(x)
	if x<=10000:
		if s[x]==i:
			if x!=i:
				ans=ans+i
print (ans)