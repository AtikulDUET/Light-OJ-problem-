#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>vec(2005);
    vector<int>::iterator it;
    int n,t,n1,n2,ans,sum,L,dis,cas=1;
    cin>>t;
    while(t--){
            sum = 0;
            ans = 0;
        cin>>n;
        vec[0] = 0;

        for(int i=1;i<=n;i++)
            cin>>vec[i];

        vec[n+1] = 100000009;
        n++;


        sort(vec.begin(),vec.begin()+n);

        for(int i=1;i<=n-2;i++){
            for(int j=i+1;j<n;j++){
                n1 = vec[i], n2 = vec[j];
                sum = n1 + n2;
                it = lower_bound(vec.begin(),vec.begin()+n,sum);
                dis = distance(vec.begin(),it);

                dis = dis - 1;
                if(vec[dis]==sum || dis<=j) continue;
                else{
                    int temp = dis - j;
                    ans+=temp;
                }
            }
        }

        cout<<"Case "<<cas++<<": "<<ans<<endl;
        vec.clear();

    }
    return 0;
}

