#include<bits/stdc++.h>
#define large 100000000000
using namespace std;
bool p[6430001];
vector<int> pr;
long long ans=0,ans2=0;
int f(long long n,int i,int val)
{
  if(n>large or val < 0)
    return 0;
  if(val==0)
    ans+=n,ans2++;
  long long m=n;
  while(i<pr.size()&&pr[i]*n<=large)
    {
      bool fl=0;
      do
	{
	  m*=pr[i];
	  if(m>large)
	    break;
	  if(pr[i]%3==1)
	    f(m,i+1,val-1);
	  else
	    if(pr[i]==3)
	      if(fl)
		f(m,i+1,val-1);
	      else
		f(m,i+1,val);
	    else
	      f(m,i+1,val);
	  fl=1;
	}while(1);
      i++;
      m=n;
    }
}
int main()
{
  for(int i=2;i<=2600;i++)
    {
      if(!p[i])
	for(int j=i*i;j<=6430000;j+=i)
	  p[j]=1;
    }
  for(int i=2;i<=6430000;i++)
    if(!p[i])
      {
	if(i%3==1)
	  pr.push_back(i);
	else
	  if(i<207302)
	  pr.push_back(i);
      }
  f(1,0,5);
  cout<<ans<<" "<<ans2<<endl;
}
