#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag = 0;
    for(int i = 0; i<s.size();)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            i = i+3;
            if(flag == 1)cout<<" ";
            flag = 0;
        }
        else
        {
            cout<<s[i];
            i++;
            flag = 1;
        }
    }
}
