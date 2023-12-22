#include<bits/stdc++.h>

using namespace std;


int Cnt(int n){
    int cnt = 0,temp=5;
    while(temp<=n){
        cnt += (n/temp);
        temp*=5;
    }
    return cnt;
}


int Found(int n){
    int L=5,R=1000000000,temp,rem;

    while(L<=R){
        int mid = (L+R)/2;
         rem = mid%5;
         mid = mid - rem;

        temp = Cnt(mid);
       // cout<<"Mid: "<<mid<<"  temp: "<<temp<<endl;

        if(temp==n)
            return mid;

        if(temp<n)
            L = mid + 5;

        else
            R = mid - 5;
    }
    return -1;
}


int main()
{
    int n,t,cas=1,temp;

    cin>>t;
    while(t--){
        cin>>n;
        temp = Found(n);
        if(temp==-1)
            cout<<"Case "<<cas++<<": impossible"<<endl;
        else
        cout<<"Case "<<cas++<<": "<<temp<<endl;
    }
    return 0;
}

