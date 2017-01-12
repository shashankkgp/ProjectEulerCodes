import csv

def score(q):
	return sum((ord(i)-ord('A')+1) for i in q)
p=[line for line in csv.reader(open("../Other files/p022_names.txt"))]
q=p[0]
q.sort()
print(q)
ans=0
for i in range(len(q)):
	ans=ans+(i+1)*score(q[i])
print(ans)