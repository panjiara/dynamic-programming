#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin>>N;
  int M;
  cin>>M;
  int A[N+1];
  A[0]=1,A[1]=1;
for(int i=2;i<=N;i++)
{
    A[i]=0;
    for (int j=1; j<=M && j<=i; j++)
          A[i]=A[i]+A[i-j];


}

    cout<<A[N]<<endl;




    return 0;
}


