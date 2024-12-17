#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, cnt = 0, flag = 0;
    string s;
    char c[5] = {'a', 'e', 'i', 'o', 'u'};
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>s;
        cnt = 0;
        for(int j=0; j<s.length(); j++){
            flag = 0;
            for(int k=0; k<5; k++){
                if(s[j] == c[k]) flag = 1;
            }
            if(flag == 1){
                cnt++;
            }else{
                cnt--;
            }
        }
        cout<<s<<"\n";
        if(cnt > 0){
            cout<<1<<"\n";
        }else{
            cout<<0<<"\n";
        }
    }
}