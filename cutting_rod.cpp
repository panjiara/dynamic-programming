#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int A[n];
  for(int i=0;i<n;i++)
  cin>>A[i];
  int value[n+1];
  A[0]=0;
  for(int i=1;i<=n;i++)
  {
      int maxx=INT_MIN;
      for(int j=0;j<i;j++)
      {

          maxx=max(maxx,value[j]+A[i-j-1]);
          value[i]=maxx;
      }

  }



    cout<<value[n]<<endl;

    return 0;
}
