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
	int countt=1,maxx=1;
	
	   
	   for(int i=0;i<N-1;i++)
	   {
	      if(A[i+1]>=A[i])
	      {
	          ++countt;
	          if(countt>maxx)
	           maxx=countt;
	      }
	      
	      else
	      {
	         countt=1; 
	      }
	       
	       
	   }
	       
	    cout<<maxx<<endl;
        return 0;
}
