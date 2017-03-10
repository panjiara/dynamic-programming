#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
    cin>>A[i];
    sort(A,A+N);
    int max=A[N-1];
    int B[max+1]={0};
    for(int i=0;i<N;i++)
    {
        B[A[i]]=B[A[i]]+A[i];

    }
    int C[max+1];
    for(int i=0;i<max+1;i++)





    return 0;
}
