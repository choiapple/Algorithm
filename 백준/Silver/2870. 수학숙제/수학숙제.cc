#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N;
string str;
vector<string> vc;
bool cmp(string x, string y){
    if(x.size() == y.size()){
        return x <= y;
    }else{
        return x.size() <= y.size();
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>str;
        string num;
        for(int j=0; j<str.length(); j++){
            if(str[j] >= '0' && str[j] <= '9'){
                if(num.size() == 1 && num.front() == '0'){
                    num = str[j];
                }else{
                    num += str[j];
                }
            }else if(!num.empty()){
                vc.push_back(num);
                num.clear();
            }
        }
        if(!num.empty()){
                vc.push_back(num);
        }
    }
    sort(vc.begin(), vc.end(), cmp);
    for(int i=0; i<vc.size(); i++){
        cout<<vc[i]<<"\n";
    }
    return 0;
}