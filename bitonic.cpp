#include<bits/stdc++.h>
using namespace std;
int main()
{
 int N;
 cin>>N;
 int A[N];
 int L[N];
 int D[N];
 for(int i=0;i<N;i++)
 {

     L[i]=1;
     D[i]=1;
 }
 for(int i=0;i<N;i++)
      cin>>A[i];
 for(int i=1;i<N;i++)
    {
        for(int j=0;j<i;j++)
        {
           if(A[i]>A[j]&&L[i]<L[j]+1)
            L[i]=L[j]+1;
        }

    }
   for(int i=N-2;i>=0;i--)
   {
       for(int j=N-1;j>i;j--)
       {
           if(A[i]>A[j]&&D[i]<D[j]+1)
            D[i]=D[j]+1;
       }
    }
    int maxx=L[0]+D[0]-1;
    for(int i=1;i<N;i++)
    {
        if(L[i]+D[i]-1>maxx)
            maxx=L[i]+D[i]-1;
    }
    cout<<maxx<<endl;

    return 0;
}
