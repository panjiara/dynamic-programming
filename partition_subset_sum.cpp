#include<bits/stdc++.h>
using namespace std;
//happy coding:)
int main()
{
  int N;
  cin>>N;
  int B[N];
  int sum=0;
  for(int i=0;i<N;i++)
  {
      cin>>B[i];
      sum=sum+B[i];
  }
  if(sum%2!=0)
  {
    cout<<"Not possible to divide into two subset";

  }
  else
  {
      bool A[sum/2+1][N+1];
      for(int i=0;i<=N;i++)
        A[0][i]=true;
      for(int i=1;i<=sum/2;i++)
        A[i][0]=false;

      for(int i=1;i<=sum/2;i++)
      {
          for(int j=1;j<=N;j++)
          {
             A[i][j]=A[i][j-1];
             if(i>=B[j-1])
                A[i][j]=A[i][j]||A[i - B[j-1]][j-1];

          }


      }

      cout<<A[sum/2][N]<<endl;



  }

    return 0;
}
