#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N],B[N];
    for(int i=0;i<N;i++)
       {
         cin>>A[i];
         B[i]=A[i];
       }
    for(int i=1;i<N;i++)
    {
      for(int j=0;j<i;j++)
      {
          if(A[i]>A[j]&&B[i]<A[i]+B[j])
          {
              B[i]=A[i]+B[j];

          }

      }

    }
    int maxx=B[0];
    for(int i=0;i<N;i++)
    {
        if(maxx<B[i])
            maxx=B[i];

    }
    cout<<maxx<<endl;

    return 0;
}
