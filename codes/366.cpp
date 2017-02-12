#include <bits/stdc++.h>
#define INF 100000000
using namespace std;

int C2(long long n)
{
	if(n&1)
	{
		return ((n%INF)*(((n-1)/2)%INF))%INF;
	}
	else
		return (((n/2)%INF)*((n-1)%INF))%INF;
}

int main()
{
	vector<long long> fibo={1,1};
	int n=2;
	while(1)
	{
		fibo.push_back(fibo[n-1]+fibo[n-2]);
		n++;
		if(fibo[n-1]>1e18)
			break;
	}

	//for(auto it:fibo)
	//	cout<<it<<endl;

	vector<long long> fibo2(fibo);
	for(int i=0;i<n;i++)
	{
		fibo2[i]=(fibo2[i]-1)/2;
	}

	//for(auto it:fibo2)
	//	cout<<it<<endl;

	vector<long long> fibo3(n);
	fibo3[0]=fibo2[0];
	for(int i=1;i<n;i++)
	{
		fibo3[i]=fibo2[i]-fibo2[i-1];
	}

	vector<long long> fibo4(n);
	fibo4[0]=C2(fibo2[0]+1);
	for(int i=1;i<n;i++)
	{
		fibo4[i]=C2(fibo2[i]+1)-C2(fibo2[i-1]+1);
		if(fibo4[i]<0)
			fibo4[i]+=INF;
	}

	vector<long long> sum(n);
	sum[0]=sum[1]=sum[2]=sum[3]=0;
	sum[4]=1;
	int m=2;

	for(int i=5;i<n;i++,m++)
	{
		long long cnt=0;
		if(m&1)
		{
			int j=1;
			while(j<=m)
			{
				sum[i]+=fibo4[j];
				sum[i]%=INF;
				cnt+=fibo3[j];
				j+=2;
			}
		}
		else
		{
			int j=0;
			while(j<=m)
			{
				sum[i]+=fibo4[j];
				sum[i]%=INF;
				cnt+=fibo3[j];
				j+=2;
			}
		}

		sum[i]+=C2((fibo[i]-fibo[i-1])-cnt);
		sum[i]%=INF;

	}

	for(auto it:sum)
		cout<<it<<endl;
	long long cnt=0;
	m=n-4;
	int j=m;
	while(j>=0)
	{
		cnt+=fibo3[j];
		j-=2;
	}
	cout<<fibo[n-1]<<" "<<cnt<<" "<<fibo[n-1]-cnt<<endl;

	long long ans=0;
	for(int i=0;i<n-1;i++)
	{
		ans+=sum[i];
		ans%=INF;
	}
	ans+=C2(1000000000000000000 - fibo[n-2]+1);
	ans%=INF;

	cout<<ans<<endl;
}