#include<bits/stdc++.h>
using namespace std;
int main()
{
  string C;
  cin>>C;
  int j;
  int L=C.length();
  cout<<L<<endl;
  int A[L][L];
  for(int i=0;i<L;i++)
  A[i][i]=1;
  for(int l=2;l<=L;l++)
  {
     for(int i=0;i<L-l+1;i++)
     {
        j=i+l-1;
        if(l==2&&C[i]==C[j])
        A[i][j]=2;
        else if(C[i]==C[j])
        A[i][j]=A[i+1][j-1]+2;
        else
        A[i][j]=max(A[i][j-1],A[i+1][j]);


     }




  }

cout<<A[0][L-1]<<endl;





  return 0;

}
