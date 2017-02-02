#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum;
    cin>>sum;
    int number;
    cin>>number;
    int denom[number]={};
    for(int i=0;i<number;i++)
        cin>>denom[i];
        int result[sum+1];
        result[0]=0;
         for(int i=1;i<sum+1;i++)
            result[i]=INT_MAX;
            cout<<sizeof(result)<<endl;

    for(int i=1;i<=sum;i++)
    {
       for(int j=0;j<number;j++)
       {
           if(denom[j]<=i)
           {
               if(result[i-denom[j]]!=INT_MAX&&result[i-denom[j]]+1<result[i])
               {
                   result[i]=result[i-denom[j]]+1;

               }
           }
           }

    }
    for(int i=0;i<sum+1;i++)
        cout<<result[i]<<endl;



    return 0;

}
