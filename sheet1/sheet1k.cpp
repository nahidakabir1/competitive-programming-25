
#include<bits/stdc++.h>
using namespace std;
    int main()
    {
        long long a,b,c;
        cin>>a>>b>>c;
 if(a<=b && a<=c)
        {
        cout <<a<<" ";
        }
        else if(b<=a && b<=c)
        {
        cout<<b<<" ";
        }
        else{
            cout<<c<<" ";
        }

        if(a>=b && a>=c)
        {
        cout <<a<<endl;
        }
        else if(b>=a && b>=c)
        {
        cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
        return 0;
    }

