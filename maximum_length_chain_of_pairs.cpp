#include<bits/stdc++.h>
using namespace std;
struct pairs{
int a;
int b;
};
int main()
{
  int N;
  cin>>N;
  struct pairs A[N];
  int L[N];
  for(int i=0;i<N;i++)
  {
      cout<<"Enter the "<<i+1<<"element"<<endl;
    cin>>A[i].a;
    cin>>A[i].b;
    L[i]=1;

  }
  for(int i=0;i<N;i++)
  {
      for(int j=0;j<i;j++)
      {
         if(A[i].a>A[j].b&&L[i]<L[j]+1)
            L[i]=L[i]+1;
    }

  }
  int maxx=L[0];
  for(int i=0;i<N;i++)
  {
      if(maxx<L[i])
        maxx=L[i];

  }

   cout<<maxx<<endl;


    return 0;
}
