#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> vc;
int n, k;
void re(string s, int tot){
    if(tot == n){
        vc.push_back(s);
    }
    if(vc.size() >= k) return;
    for(int i=1; i<=3; i++){
        if(tot + i <= n){
            string c = to_string(i);
            if(s == ""){
                re(c, tot+i);
            }else{
                re(s + '+' + c, tot+i);
            }
        }
    }
    return;
}
int main(){
    string s = "";
    cin>>n>>k;
    re(s, 0);
    sort(vc.begin(), vc.end());
    if(vc.size() >= k){
        cout<<vc[k-1]<<"\n";
    }else{
        cout<<-1<<"\n";
    }
    return 0;
}