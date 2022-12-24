
#include<iostream>
using namespace std;
int main()
{
    char s[1000];
    gets(s);
    //cout<<s[5]<<endl;
    int n = 1000, ar[26] = {0};
    for(int i = 0; i<n; i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
            ar[s[i]-97]=1;
        }
        if(s[i]=='\0')break;
        //cout<<i<< " = "<<s[i]<<endl;
    }
    //cout<<n<<endl;
    int cnt = 0;
    for(int i = 0; i<26; i++)
    {
        if(ar[i]==1)cnt++;
    }
    cout<<cnt<<endl;
}
