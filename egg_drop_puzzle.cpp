#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k,res;
cin>>n>>k;
int A[n+1][k+1];
for(int i=1;i<=k;i++)
{
  A[1][i]=i;

}
A[0][0]=0;
for(int i=1;i<=n;i++)
{
  A[i][0]=0;
  A[i][1]=1;
}
for(int i=2;i<=n;i++)
{
  for(int j=2;j<=k;j++)
   {
      A[i][j]=INT_MAX;
      for(int s=1;s<=j;s++)
      {
          res=1+max(A[i-1][s-1],A[i][j-s]);
           if(res<A[i][j])
           {
             A[i][j]=res;
             cout<<"value of i "<<i<<" value of j  "<<j<<endl;
             cout<<A[i][j]<<endl;

           }
           }
 }
}
cout<<A[n][k]<<endl;
  return 0;

}
