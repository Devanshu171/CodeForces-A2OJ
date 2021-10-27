#include<iostream>
using namespace std;
int Min(int a[],int n){
    int x=100000;
    int res=0;
    for(int i=0;i<n;i++){
        if(a[i]<=x){
            x=a[i];
            res=i;
        }
    }
    return res;
}
int Max(int a[],int n){
    int x=-100000;
    int res=0;
    for(int i=n-1;i>=0;i--){
        if(a[i]>=x){
            x=a[i];
            res=i;
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

int mini=Min(a,n);
int maxi=Max(a,n);

int y=a[mini];
int x=a[maxi];

if(mini<maxi)
cout<< maxi+n-1-mini-1;
else
    cout << maxi + n - 1 - mini;

    return 0;
}