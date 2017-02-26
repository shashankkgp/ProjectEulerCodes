#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[80][80];
  for(int i=0;i<80;i++)
    for(int j=0;j<80;j++)
    {
      if(j==79)
	scanf("%d",&arr[i][j]);
      else
	scanf("%d,",&arr[i][j]);
      //cin>>arr[i][j];
      if(i>0 && j>0)
	arr[i][j]+=min(arr[i-1][j],arr[i][j-1]);
      else
	if(i>0)
	  arr[i][j]+=arr[i-1][j];
	else
	  if(j>0)
	    arr[i][j]+=arr[i][j-1];
      //printf("%d\n",arr[i]);
    }
  cout<<arr[79][79]<<endl;
}
