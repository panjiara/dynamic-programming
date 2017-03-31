#include<bits/stdc++.h>
using namespace std;
//chutiyapa code -_-
int A[9],B[9],R[10];
int main()
{
   int a,b;
   cin>>a>>b;
   int ac=9,bc=9;
  int a1=a,b1=b;
  while(a1>0)
  {
    A[ac]=a1%10;
    a1=a1/10;
    ac--;
 }
 while(b1>0)
  {
    B[bc]=b1%10;
    b1=b1/10;
    bc--;
 }
 ac++;bc++;

 if(a==0&&b==0)
    cout<<0<<endl;
 else if(a>b)
 {
     int i=ac,j=9;
    while(i<=9&&j>=ac)
    {
        R[i]=A[i]+B[j]+R[i];
        if(R[i]>9)
        {
           R[i]=R[i] %10;
           R[i+1]=R[i]/10;
        }
        i++;
        j--;

    }
}
else
{
    int i=bc,j=9;

    while
        (i<=9&&j>=bc)
        {
            R[i]=A[i]+B[j]+R[i];
            if(R[i]>9)
        {
           R[i]=R[i] %10;
           R[i+1]=R[i]/10;
        }
        i++;
        j--;

        }
}
int flag=0;
for(int i=0;i<10;i++)
{
    if(R[i]==0&&flag==0)
    {
        flag=0;
    }
    else
    {
      flag=1;
    cout<<R[i];
    }
}
cout<<endl;


    return 0;

}
