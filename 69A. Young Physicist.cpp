#include<iostream>
using namespace std;
int main()
{
    int n, x, y, z, sumx = 0, sumy = 0, sumz = 0;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>x>>y>>z;
        sumx = sumx+x;
        sumy = sumy+y;
        sumz = sumz+z;
    }
    //cout<<sum<<endl;
    if(sumx==0&&sumy==0&&sumz==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
