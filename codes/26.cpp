#include <bits/stdc++.h>
using namespace std;

int f(int k)
{
	vector<int> v(k);
	v[1]=1;
	int n=1,c=1;
	while(1)
	{
		n*=10;
		n%=k;
		if(v[n])
		{
			return c-v[n]+1;
		}
		if(c==k)
			return 0;
		c++;
	}
}

int main()
{
	for(int i=1;i<1000;i++)
		cout<<f(i)<<endl;
}