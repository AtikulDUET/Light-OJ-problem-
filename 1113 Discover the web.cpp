#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,cmd,temp,temp1;
    vector<string>vec;
    int cas=1,t,idx,curr;
    cin>>t;
    while(t--){
        cout<<"Case "<<cas++<<":"<<endl;
        vec.clear();
        vec.push_back("http://www.lightoj.com/");

        idx = 1,curr=1;

        while(1){
            cin>>cmd;
            if(cmd=="VISIT"){
                cin>>str;

                if(curr>1 && idx<curr){
                    //cout<<"curr: "<<curr<<" idx: "<<idx<<endl;
                    int kk = curr - idx;
                    for(int i=0;i<kk;i++)
                        vec.pop_back();
                    curr = idx;
                }
                curr++;
                idx++;
                cout<<str<<endl;
                vec.push_back(str);
            }

            else if(cmd=="FORWARD"){
                if(idx==curr) cout<<"Ignored"<<endl;
                else{
                    idx++;
                    cout<<vec[idx-1]<<endl;
                }
            }

            else if(cmd=="BACK"){
                idx--;
                if(idx==0){  idx = 1, cout<<"Ignored"<<endl; }
                else{
                    cout<<vec[idx-1]<<endl;
                }
            }
            else if(cmd=="QUIT")
                    break;
        }

    }
    return 0;
}

