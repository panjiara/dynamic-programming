#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin>>S;
    int L=S.length();
    int A[L];
    for(int i=0;i<L;i++)
        A[i]=1;
    for(int i=0;i<L-1;i++)
    {
        if(S[i]==S[i+1])
           A[i+1]=A[i]+1;
           cout<<A[i]<<endl;
    }
    int N;
    cin>>N;
   while(N)
    {
        int count=0;
     int l,r;
     cin>>l>>r;
        for(int i=l;i<r;i++)
        {
            if(A[i]>1)
             count++;
        }

        cout<<count<<endl;




        N--;
    }









    return 0;
}
