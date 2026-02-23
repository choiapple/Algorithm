#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string ori, tmp;
    int N, flag = 0;
    vector<string> vc;
    cin>>ori;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>tmp;
        flag = 0;
        for(int i=0; i<ori.length(); i++){
            if(ori[i] == '*') continue;
            if(ori[i] != tmp[i]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            vc.push_back(tmp);
        }
    }
    cout<<vc.size()<<"\n";
    for(int i=0; i<vc.size(); i++){
        cout<<vc[i]<<"\n";
    }
    return 0;
}