#include<bits/stdc++.h>
#define large 100000000000
using namespace std;
bool p[2000001];
int main()
{
  for(int i=2;i<=1500;i++)
    {
      if(!p[i])
	for(int j=i*i;j<=2000000;j+=i)
	  p[j]=1;
    }
  long long ans=0;
  for(int i=1;i<=2000000;i++)
    if(!p[i])
      ans+=i;
  cout<<ans<<endl;
}
