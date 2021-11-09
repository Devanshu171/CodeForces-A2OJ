#include <iostream>
using namespace std;

int main(){
    
    long long n;
    cin>>n;
    
    if(n>0)
    cout<<n;
    
    else{
     int a=n/10;
     int b=n/100;
     b=b*10+n%10;

     int ans=a>b?a:b;
     cout<<ans;

    }
    
    
    
    return 0;
}