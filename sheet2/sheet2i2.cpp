#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int a=s.size();
string ss="";
for(int i=a-1;i>=0;i--)
    ss+=s[i];
bool flag =false;
string ans="";
for(int j=0;j<ss.size();j++){
    if(ss[j]!='0')
      flag=true;
    if(flag==true)
        ans+=ss[j];
}cout<<ans<<endl;
if(s!=ss)
    cout<<s <<endl;
else{
    if(ss[0]=='0')
        cout<< s<<endl;
    else{
        cout<<"Yes"<<endl;
    }
}


return 0;

}
