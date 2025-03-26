#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, flag = 0;
    vector<string> vc;
    string s, tmp;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>s;
        if(vc.size() == 0){
            vc.push_back(s);
            continue;
        }
        flag = 0;
        for(int j=0; j<vc.size(); j++){
            tmp = vc[j] + vc[j];
            int vc_len = vc[j].length();
            if(vc_len != s.length()) continue;
            for(int k=0; k<vc_len; k++){
                if(tmp.substr(k, vc_len) == s){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1){
                break;
            }
        }
        if(flag == 0){
            vc.push_back(s);
        }
    }
    cout<<vc.size()<<"\n";
    return 0;
}