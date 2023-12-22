#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,temp,rem,sum,cas=1;
    cin>>t;
    while(t--){
        cin>>n;
        sum = 0;
        temp = n;
        while(temp!=0){
            rem = temp % 10;
            sum = sum *10 + rem;
            temp /=10;
        }
        if(sum==n)
            cout<<"Case "<<cas++<<": Yes"<<endl;
        else
            cout<<"Case "<<cas++<<": No"<<endl;
    }
    return 0;
}

