#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long a[n+1];
for(long long i=1;i<=n;i++){
    cin>>a[i];}
    long long sum=100000000;

    for(long long i=1;i<=n-1;i++){
        for(long long j=i+1;j<=n;j++){
        long long ans=a[i]+a[j]+(j-i);
        if(ans<sum)
            sum=ans;
}}
cout<<sum<<endl;
}}





