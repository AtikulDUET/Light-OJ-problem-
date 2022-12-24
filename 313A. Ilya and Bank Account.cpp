#include<iostream>
using namespace std;
int main()
{
    int n, num;
    cin>>n;
    if(n>=0)cout<<n<<endl;
    else{
        int x1 = n%10;
        int y1 = n/10;
        int x2 = y1%10;
        int y2 = y1/10;
        //cout<<x1<<x2<<endl;
        if(x1<x2)num = y2*10+x2;
        else num = y2*10+x1;
        cout<<num<<endl;
    }
}
