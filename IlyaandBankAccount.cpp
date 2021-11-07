#include <iostream>
using namespace std;

int main(){
    
    long long n;
    cin>>n;
    
    if(n>0)
    cout<<n;
    
    else{
      string s=to_string(n);
      int len=s.size();
      string str1="";
      for(int i=0;i<len-1;i++){
          str1+=s[i];
      }
      string str2="";
      for(int i=0;i<len;i++){
          if(i!=len-2)
          str2+=s[i];
      }
      long long  res1= stoll(str1, nullptr, 10);
      long long  res2= stoll(str2, nullptr, 10);
 
      
      
      long long ans=res1>res2?res1:res2;
      cout<<ans;

    }
    
    
    
    return 0;
}