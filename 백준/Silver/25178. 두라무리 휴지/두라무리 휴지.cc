#include <iostream>
using namespace std;
int main(){
    int N, sa[26] = {0, }, ssa[26] = {0, }, tmp1, tmp2, flag1 = 0, flag2 =0;
    string s, ss, ts = "", tss = "";
    char c[5] = {'a', 'e', 'i', 'o', 'u'};
    cin>>N;
    cin>>s;
    cin>>ss;
    if(s[0] != ss[0] || s[N-1] != ss[N-1]){
        cout<<"NO"<<"\n";
        return 0;
    }
    for(int n=0; n<N; n++){
        tmp1 = s[n] - 'a';
        tmp2 = ss[n] - 'a';
        sa[tmp1]++;
        ssa[tmp2]++;
        flag1 = 0;
        flag2 = 0;
        for(int i=0; i<5; i++){
            if(s[n] == c[i]) flag1 = 1;
            if(ss[n] == c[i]) flag2 = 1;
        }
        if(flag1 == 0) ts += s[n];
        if(flag2 == 0) tss += ss[n];
    }
    if(ts != tss){
        cout<<"NO"<<"\n";
        return 0;
    }
    for(int i=0; i<26; i++){
        if(sa[i] != ssa[i]){
            cout<<"NO"<<"\n";
            return 0;
        }
    }
    cout<<"YES"<<"\n";
    return 0;
}