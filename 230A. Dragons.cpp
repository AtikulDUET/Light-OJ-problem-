#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int s, n;
    cin>>s>>n;
    int ar1[n], ar2[n], temp[n];
    for(int i = 0; i<n; i++)
    {
        cin>>ar1[i]>>ar2[i];
        temp[i] = ar1[i];
    }
    int f = 1;
    sort(temp, temp+n);
    for(int i = 0; i<n; i++)
    {
        if(s<=temp[i]){f = 0; break;}
        else
        {
            for(int j = 0; j<n; j++)
            {
                if(temp[i] == ar1[j]){s+=ar2[j];}
            }
        }
        //cout<<s<<endl;
    }

    if(f == 1 && s>0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
