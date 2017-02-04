#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int p[n];
  for(int i=0;i<n;i++)
  {
    cin>>p[i];
  }
  int A[n][n];
  for(int i=0;i<n;i++)
  A[i][i]=0;
  int j,q,L,i,k;
for(L=2;L<n;L++)
{
  for( i=1;i<n-L+1;i++)
  {
    j=i+L-1;
    A[i][j]=INT_MAX;
    for( k=i;k<=j-1;k++ )
    {
      q=A[i][k]+A[k+1][j]+p[i-1]*p[k]*p[j];
      if(q<A[i][j])
      A[i][j]=q;
      cout<<q<<endl;
    }
    }
}
cout<<A[1][n-1]<<endl;
return 0;

}
