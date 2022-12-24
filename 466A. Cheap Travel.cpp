#include <iostream>
using namespace std;
int main()
{
    int n, m, a, b;
    cin>>n>>m>>a>>b;
    if(a<b)
        cout<<((n/m)*b+(n%m)*a)<<endl;
    else cout<<((n/m)*b+1)<<endl;
}




