#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int A[n];
    int R[n];
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
       R[i]=n-i;

    }
    R[n-1]=1;

    for(int i=n-2;i>=0;i--)
    {
        int flag=0;
        for(int j=n-1;j>i;j--)
            {

                if(A[i]==A[j]&&R[i]<=n-i)
                {
                    flag=1;
                    //cout<<"   ------"<<A[i]<<endl;
                    R[i]=R[i+1];
                }

            }
            if(flag==0)
                R[i]=R[i+1]+1;

    }
    for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            cout<<R[x-1]<<endl;
        }



    return 0;
}
