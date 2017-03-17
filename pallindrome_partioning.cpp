#include<bits/stdc++.h>
using namespace std;
//happy coding:)
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    bool P[n][n];
    int C[n][n];
    for(int i=0;i<n;i++)
    {
        P[i][i]=true;
        C[i][i]=0;
    }
    for(int L=2;L<=n;L++)
    {

        for(int i=0;i<n-L+1;i++)
        {
            int j=i+L-1;
            for(int k=i;k<j;k++)
            {
                if(L==2)
                    P[i][j]=(s[i]==s[j]);
                else
                    P[i][j]=(s[i]==s[j])&&P[i+1][j-1];
                if(P[i][j]==true)
                C[i][j]=0;
                else
                {
                     C[i][j]=INT_MAX;
                    for(int k=i;k<j;k++)
                    {
                        C[i][j]=min(C[i][j],C[i][k]+C[k+1][j]+1);
                    }
                }



            }
        }



    }
    cout<<C[0][n-1]<<endl;








    return 0;
}
