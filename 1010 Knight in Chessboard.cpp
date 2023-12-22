#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("aaaa.txt","w",stdout);
    int n,m,st,ed,t,cnt,cas=1,temp,sq,kk;
    cin>>t;
    while(t--)
    {

        cin>>n>>m;
        if(m==1) swap(n,m);
        if(m==2) swap(n,m);

        if(n==1)
            cout<<"Case "<<cas++<<": "<<m<<endl;

        else if(n==2 && m%2==1)
            cout<<"Case "<<cas++<<": "<<m+1<<endl;

        else if(n==2 && m%2==0)
        {
            m = m*2;
            temp = m/8;
            cnt = temp*4;
            temp = m - (temp*8);
            if(temp<=4)
                cnt+=temp;
            else
                cnt+=4;
            cout<<"Case "<<cas++<<": "<<cnt<<endl;
        }

        else
        {
            temp = n*m;
            cnt = temp/2;
            if(temp&1)
                cnt+=1;
            cout<<"Case "<<cas++<<": "<<cnt<<endl;
        }

    }
    return 0;
}



