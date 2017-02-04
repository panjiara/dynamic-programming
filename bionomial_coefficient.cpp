#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
int A[n+1][k+1];
int i,j;
for(i=0;i<=n;i++)
{
for( j=0;j<=min(i,k);j++)
{

if(j==0||j==i)
{
  A[i][j]=1;
  cout<<A[i][j]<<"   "<<i<<"  "<<j<<endl;
}
else
{
  A[i][j]=A[i-1][j-1]+A[i-1][j];
  cout<<A[i][j]<<"   "<<i<<"  "<<j<<endl;
}
}
}
cout<<A[n][k]<<endl;
return 0;
}
