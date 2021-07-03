#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cas = 1;
    char ch;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        cout<<"Case "<<cas++<<": ";
        for(int i=0;i<str.size();i++){
                if(i==4 && str[i]!='s')
                cout<<'s';

           cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}

