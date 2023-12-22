#include<bits/stdc++.h>
using namespace std;

double fun(double d,double x,double y){
    double ans,n1,n2;
    n1 = sqrt((x*x)-(d*d)), n2 = sqrt( (y*y)-(d*d));
    ans = (n1*n2)/(n1+n2);
    return ans;
}


int main()
{
    int t,cas=1,cnt;

    double x,y,c,mid,L,R;
    cin>>t;
    while(t--){
        cin>>x>>y>>c;
        L = 0, R = min(x,y), cnt = 0;

        while(cnt<=200 && abs(R-L)>0.00000006){
            mid = (L+R)/2.0;
            if(fun(mid,x,y)<c)
                R = mid;
            else
                L = mid;
            cnt++;
        }
        printf("Case %d: %.6lf\n",cas++,L);

    }
    return 0;
}

