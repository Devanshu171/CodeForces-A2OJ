#include<iostream>
using namespace std;

int main(){
  int n,m,a,b;
  cin>>n>>m>>a>>b;
  if(m*a<=b) cout<<a*n;
  else if(m*a>b){
    int cost=0;
    int k=n;
    while(k>=m){
      cost+=b;
      k=k-m;
    }

    if(k>0){
      int c1=k*a;
      int c2=0;
     
      while(k>0){
          c2+=b;
          k=k-m;
      }
     if(c1<c2)
     cost+=c1;
     else
     cost+=c2;
    }

    cout<<cost;

  }

  
  return 0;
}