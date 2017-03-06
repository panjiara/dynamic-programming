#include<bits/stdc++.h>
using namespace std;
struct pairs {
int a;
int b;
};
bool acompare(pairs lhs, pairs rhs) { return lhs.b < rhs.b; }
int main()
{
    int N;
    cin>>N;
    int L[N];
    struct pairs A[N];
    for(int i=0;i<N;i++)
    {
        cout<<"the value of northern city "<<i+1<<endl;
        cin>>A[i].a;
        cout<<"the value of southern city "<<i+1<<endl;
        cin>>A[i].b;
        L[i]=1;
    }
    sort(A,A+N,acompare);
  for(int i=0;i<N;i++)
  {
      for(int j=0;j<i;j++)
      {

          if(A[i].a>A[j].a&&L[i]<L[j]+1)
          {
              L[i]+=1;
          }
      }
 }
 int m=L[0];
 for(int i=0;i<N;i++)
    if(L[i]>m)
    m=L[i];

cout<<m<<endl;

    return 0;

}
