#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  int a[n];
  for (size_t i = 0; i <n; i++) {
    cin>>a[i];
  }
  int msh=0,msf=0;
  for(int i=0;i<n;i++)
  {
     msh=msh+a[i];
     if(msh<0)
     msh=0;
     else if(msf<msh)
     msf=msh;

  }
  cout<<msf<<endl;
  return 0;
}
