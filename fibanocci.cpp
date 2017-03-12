#include<bits/stdc++.h>
using namespace std;
long long int array[100]={0};
long long int m=0,f=0,c=0;
long long int value(long long int y)
{
    ++c;
    cout<<c<<endl;

    long long int k;
    if(array[y-1]!=0)
    {
        cout<<"i am here for "<<m<< "mcount "<<y<<endl;
        m++;
     return array[y-1];
    }
    else
        {
            cout<<"i am here for "<<f<< " fcount "<<y<<endl;
            f++;
        array[y-1]=value(y-1)+value(y-2);

        return array[y-1];
       }
}
int main()
{
    array[0]=1;
    array[1]=1;

    cout<<"type the number you want to to know the fibanocci"<<endl;
    long long int x;
    cin>>x;
    long long int k=value(x);
    cout<<k;



}



