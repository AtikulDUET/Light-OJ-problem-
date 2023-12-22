#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cas=1;
    double r,circle,line;
    cin>>t;
    while(t--){
        cin>>r;
        circle = 2*acos(0.0)*r*r;
        line = (2*r)*(2*r);
        printf("Case %d: %.2lf\n",cas++,(line-circle));
    }
    return 0;
}


