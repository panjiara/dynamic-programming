#include <bits/stdc++.h>
using namespace std;
//happy coding:)

int main() {
	int N;
	cin>>N;
	int A[N],B[N];
	for(int i=0;i<N;i++)
	{
	  cin>>A[i]; 
	  B[i]=1;
	}
	for(int i=1;i<N;i++)
	{
	    for(int j=0;j<i;j++)
	    {
	        if(A[i]>A[j]&&B[j]+1>B[i])
	        {
	            B[i]=B[j]+1;
	        }
	    }
	}
	int maxx=0;
	for(int i=0;i<N;i++)
	{
	    if(B[i]>maxx)
	    maxx=B[i];
	}
	
	cout<<maxx<<endl;
	
	return 0;
}
