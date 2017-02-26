#include <bits/stdc++.h>
using namespace std;
bool p[2000001];
int main()
{
  for(int i=2;i<1500;i++)
    if(!p[i])
      for(int j=i*i;j<=2000000;j+=i)
	p[j]=1;
  int ans=41,maxi=0;
 for (int i=-1000;i<=1000;i++)
    for(int j=-1000;j<=1000;j++)
      {
	int n=0;
	while(n*n+i*n+j>=0 && !p[n*n+i*n+j])
	  n++;
	if(n>maxi)
	  {
	    maxi=n;
	    ans=i*j;
	  }
      }
 cout<<ans<<endl;
}
