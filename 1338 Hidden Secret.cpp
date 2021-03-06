#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cas = 1,ck;
    char str1[103],str2[104];
    int cnt1[200],cnt2[200];
    char ch;
    scanf("%d%*c",&t,&ch);
    while(t--){
            ck = 0;
            memset(cnt1,0,sizeof(cnt1));
            memset(cnt2,0,sizeof(cnt2));
           scanf("%[^\n]%*c",str1,&ch);
           scanf("%[^\n]%*c",str2,&ch);

        for(int i=0;str1[i]!='\0';i++){
            ch = str1[i];
            if(ch==' ') continue;
            else{
            if(ch>='A' && ch<='Z')
                ch = ch-'A' + 'a';
            cnt1[ch]++;
            }
        }
        for(int i=0;str2[i]!='\0';i++){
            ch = str2[i];
            if(ch==' ') continue;
            else{
            if(ch>='A' && ch<='Z')
                ch = ch-'A' + 'a';
            cnt2[ch]++;
            }
        }
        for(char ch='a';ch<='z';ch++){
            if(cnt1[ch]!=cnt2[ch]){
                ck = 1;
                break;
            }
        }
        if(ck==0)
            cout<<"Case "<<cas++<<": Yes"<<endl;
        else
            cout<<"Case "<<cas++<<": No"<<endl;
    }

    return 0;
}

