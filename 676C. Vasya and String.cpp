#include<bits/stdc++.h>
using namespace std;
 int A[100000],B[100000];
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int count=0;

    int a1=0,b1=0;
    for(int i=0;i<n;)
    {
        if(s[i]=='a')
        {
            count=0;
            int m=i;

            while(s[m]=='a'&&m!=n)
            {

               count++;
               m++;
            }

            A[a1]=count;
            a1++;
            i=i+count;

        }
        if(s[i]=='b')
        {
            int count=0;
            int m=i;
            while(s[m]=='b'&&m!=n)
            {
               count++;
               m++;
            }
            B[b1]=count;
            b1++;
            i=i+count;

        }
    }


   /* for(int i=0;i<a1;i++)
        cout<<A[i]<<endl;
       cout<<"bkjnd"<<endl;
        for(int i=0;i<b1;i++)
        cout<<B[i]<<endl;*/
        int maximum=0;
        if(s[0]=='a')
        {
            if(A[0]<=k||B[0]<=k)
            {
              maximum=A[0]+B[0];
            }
            for(int i=0;i<a1;i++)
            {
                if(B[i]<=k)
                {
                    if(A[i]+A[i+1]+B[i]>maximum)
                        maximum=A[i]+B[i]+A[i+1];
                }
                if(A[i+1]<=k)
                {
                    if(B[i]+A[i+1]+B[i+1]>maximum)
                        maximum=B[i]+A[i+1]+B[i+1];
                }

            }
        }
        if(s[0]=='b')
        {
            if(B[0]<=k||A[0]<=k)
            maximum=A[0]+B[0];
            for(int i=0;i<a1;i++)
            {
               if(B[i+1]<=k)
               {
                   if(A[i]+B[i+1]+A[i+1]>maximum)
                    maximum=A[i]+B[i+1]+A[i+1];
               }
               if(A[i]<=k)
               {
                   if(B[i]+B[i+1]+A[i+1]>maximum)
                    maximum=B[i]+B[i+1]+A[i+1];
               }
            }




        }
if(n==k)
    cout<<n<<endl;
else
cout<<maximum<<endl;


    return 0;
}
