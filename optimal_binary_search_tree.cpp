#include<bits/stdc++.h>
using namespace std;
int sum(int F[],int i,int j)
{
int S=0;
for(int k=i;k<=j;k++)
{
    S+=F[k];
}
return S;
}
int main()
{
  int N;
  cin>>N;
  int A[N],F[N];
  for(int i=0;i<N;i++)
    cin>>A[i];
  for(int i=0;i<N;i++)
    cin>>F[i];
  int cost[N][N];
  for(int i=0;i<N;i++)
     cost[i][i]=F[i];

for(int L=2;L<=N;L++)
{
    for(int i=0;i<=N-L+1;i++)
    {
        int j=i+L-1;
        cost[i][j]=INT_MAX;
        int x=sum(F,i,j);
        for(int r=i;r<=j;r++)
        {
            int c=((r>i)?cost[i][r-1]:0)+((r<j)?cost[r+1][j]:0)+x;

            cost[i][j]=min(cost[i][j],c);


        }




    }




}

cout<<cost[0][N-1]<<endl;





    return 0;
}
