#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int  A[n+1];
    A[0]=1;
    int i2=0,i3=0,i5=0;
    for(int i=1;i<=n;i++)
    {
       A[i]=min(A[i2]*2,min(A[i3]*3,A[i5]*5));
       if(A[i2]*2==A[i])
            i2++;
            if(A[i3]*3==A[i])
            i3++;
            if(A[i5]*5==A[i])
            i5++;





    }
    cout<<A[n-1]<<endl;




    return 0;
}
