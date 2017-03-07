#include<bits/stdc++.h>
using namespace std;
int main()
{
    int R,C;
    cout<<" Enter the rows and columns respectively"<<endl;
    cin>>R>>C;
    int M[R][C],S[R][C];
    for(int i=0;i<R;i++)
     for(int j=0;j<C;j++)
     cin>>S[i][j];
     for(int i=0;i<C;i++)
        M[0][i]=S[0][i];
     for(int j=0;j<R;j++)
        M[j][0]=S[j][0];
        int ma=0;
     for(int i=1;i<R;i++)
     {
         for(int j=1;j<C;j++)
       {
           if(S[i][j]==1)
           {
             M[i][j]=1+min(M[i-1][j],min(M[i-1][j-1],M[i][j-1]));
             cout<<M[i][j]<<" " ;
             if(M[i][j]>ma)
                ma=M[i][j];
           }
            else
            {
               M[i][j]=0;
               cout<<M[i][j]<<" " ;
            }

       }
       cout<<endl;

     }


    cout<<ma<<endl;





    return 0;
}
