#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int A[n];
  char B[n];
  for(int i=0;i<n;i++)
 cin>>A[i];
 int count=0;
 for(int i=0;i<n;i++)
 {
     if(i==0)
     {
         if(A[i]==0)
           B[i]='H';
         if(A[i]==1)
            B[i]='C';
         if(A[i]==2)
            B[i]='G';

         if((A[i]==1&&A[i+1]==1)||(A[i]==2&&A[i+1]==2))
         {
             if(A[i]==1)
             {
                 B[i]='H';
                 B[i+1]='C';
             }
             if(A[i]==2)
             {
                 B[i]='H';
                 B[i+1]='G';
             }
         }

         if(A[i]==3)
         {
          if(A[i+1]==2)
          {
             B[i]='C';
             B[i+1]='G';
          }
          if(A[i+1]==1)
          {
             B[i]='G';
             B[i+1]='C';
          }
         }


     }
     if(i>0)
     {
      if(A[i]==0)
           B[i]='H';
        if(A[i]==1)
            B[i]='C';
        if(A[i]==2)
            B[i]='G';
         if(B[i-1]=='C'&&A[i]==1)
            B[i]='H';
        if(B[i-1]=='G'&&A[i]==2)
            B[i]='H';

            if(A[i]==3)
            {
                if(B[i-1]=='G')
                {
                   B[i]='C';
                }
                if(B[i-1]=='C')
                {
                   B[i]='G';
                }

            }



     }




 }
   for(int i=0;i<n;i++)
   {
       cout<<B[i]<<endl;
       if(B[i]=='H'||(B[i]=='G'&&B[i+1]=='G')||(B[i]=='H'&&B[i+1]=='H'))
        count++;
   }

cout<<count<<endl;

    return 0;
}
