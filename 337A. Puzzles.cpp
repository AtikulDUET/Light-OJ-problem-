#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, m, d1, d2, mn;
    cin>>n>>m;
    int ar[m];
    for(int i = 0; i<m; i++)
    {
        cin>>ar[i];
    }
    sort(ar, ar+m);
    mn = ar[n-1]-ar[0];
    //cout<<ar[m-1]<<endl;
    for(int i = 0; i<m/2+1; i++)
    {
        if(i+n-1<m && m-i-1>=0){
        d1 = ar[i+n-1]-ar[i];
        d2 = ar[m-i-1]-ar[m-i-n];
        if(mn>d1 && d1<=d2)mn = d1;
        else if(mn>d2&&d2<=d1)mn = d2;
        //cout<<d1<<" "<<d2<<endl;
        }
    }
    cout<<mn<<endl;
}

