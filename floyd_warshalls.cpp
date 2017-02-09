#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n][n];
    int c;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

            cin>>c;
            if(c==9999)
                A[i][j]=INT_MAX;
            else
                A[i][j]=c;
        }
    }
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
              if(A[i][k]!=INT_MAX&&A[k][j]!=INT_MAX&&A[i][k]+A[k][j]<A[i][j])
                A[i][j]=A[i][k]+A[k][j];
            }


        }
    }
for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

            if(A[i][j]==INT_MAX)
                cout<<"INF ";
            else
                cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}

