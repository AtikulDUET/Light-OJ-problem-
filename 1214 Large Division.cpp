#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[205];
    long long int b,rem;
    int t,cas=1;
    cin>>t;
    while(t--){
        cin>>str>>b;
        if(b<0) b *= -1;
        rem = 0;
        for(int i=0;str[i]!='\0';i++){
                if(str[i]=='-') continue;
            rem = ((rem*10)+(str[i]-'0')) % b;
        }
        if(rem==0)
            cout<<"Case "<<cas++<<": divisible";
        else
            cout<<"Case "<<cas++<<": not divisible";
        cout<<endl;

    }
    return 0;
}

