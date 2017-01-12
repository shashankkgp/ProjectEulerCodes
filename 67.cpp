#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n=100;
  int mat[101][101],dp[101][101];
  for(int i=0;i<n;i++)
    for(int j=0;j<=i;j++)
      cin>>mat[i][j];
  for(int j=0;j<n;j++)
    dp[n-1][j]=mat[n-1][j];
  for(int i=n-2;i>=0;i--)
    for(int j=0;j<=i;j++)
      dp[i][j]=mat[i][j]+max(dp[i+1][j],dp[i+1][j+1]);
  cout<<dp[0][0]<<endl;
}
