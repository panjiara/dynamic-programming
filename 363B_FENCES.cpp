#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int res=INT_MAX;
    int index=0;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=0;i<n-k;i++)
    {
        int sum=0;
       for(int j=i;j<i+k;j++)
       {
           sum+=A[j];
       }
        if(sum<res)
        {
            res=sum;
            index=i;
        }



    }
    cout<<index+1<<endl;




    return 0;
}
