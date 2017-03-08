#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
        cin>>A[i];
    int max_till_now=INT_MIN,maxx=0;
    int start=0,end=0,s=0;
    for(int i=0;i<N;i++)
    {
        maxx=maxx+A[i];
        if(maxx<0)
        {
            maxx=0;
            s=i+1;

        }

        else if(maxx>max_till_now){
          max_till_now=maxx;
          start=s;
          end=i;
        }




    }

    cout<<max_till_now;
    cout<<start<<endl;
    cout<<end<<endl;



    return 0;
}
