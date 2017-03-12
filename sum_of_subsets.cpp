#include<bits/stdc++.h>
using namespace std;
int main()
{
   int N;
   cin>>N;
   int A[N];
   int sum;
   cin>>sum;
   for(int i=0;i<N;i++)
        cin>>A[i];
bool R[N][sum+1];
for(int i=0;i<N;i++)
    R[i][0]=true;
for(int i=0;i<N;i++)
{
    for(int j=1;j<=sum;j++)
    {

        if(i==0&&j==A[i])
        {
           R[i][j]=true;
        }
        else if(i==0&&j!=A[i])
            R[i][j]=false;
        else if(A[i]>j&&i>0)
        {
            R[i][j]=R[i-1][j];
        }
        else if(A[i]<=j&&i>0)
        {
            R[i][j]=R[i-1][j]||R[i-1][j-A[i]];
        }


        cout<<R[i][j]<<" ";



    }
    cout<<endl;



}






    return 0;
}
