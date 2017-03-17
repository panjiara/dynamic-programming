#include<bits/stdc++.h>
using namespace std;
int main()
{
   int A[201];
   int m,n;
   cin>>m;
   for(int i=0;i<m;i++)
        cin>>A[i];
   cin>>n;
   for(int i=m;i<m+n;i++)
        cin>>A[i];
   sort(A,A+m+n);
  /* for(int i=0;i<m+n;i++)
            cout<<A[i]<<endl;*/
     for(int i=0;i<m+n;i++)
      {
        int x=0,y=m+n-1;
        if(A[i]!=INT_MAX)
        {
            cout<<A[i]<<endl;
            int sum=2*A[i];
           while(x<y)
            {
                //if((A[0]+A[m+n-1]<sum)&&(A[0]!=INT_MAX||A[m+n-1]!=INT_MAX))
                    //y--;
               if((A[x]+A[y]>sum||A[x]+A[y]>sum+1)&&(A[x]!=INT_MAX||A[y]!=INT_MAX))
                  y--;
               if((A[x]+A[y]<sum+1||A[x]+A[y]<sum)&&(A[x]!=INT_MAX||A[y]!=INT_MAX))
                  x++;
               if((A[x]+A[y]==sum||A[x]+A[y]==sum+1)&&(A[x]!=INT_MAX||A[y]!=INT_MAX))
                  {
                    cout<<A[x]<<"+"<<A[y]<<endl;
                    A[x]=INT_MAX;
                    A[y]=INT_MAX;
                    break;
                  }
            }
        }
        else
            continue;



      }


}
