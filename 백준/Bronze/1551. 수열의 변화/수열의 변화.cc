#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s;
    int N, K, tmp = 0, check = 0;
    vector<int> vc;
    cin>>N>>K;
    cin.ignore();
    getline(cin, s);
    for(int i=0; i<s.length(); i++){
        if(s[i] != ',' && s[i] != '-'){
            tmp = tmp*10 + (s[i] - '0');
        }else if(s[i] == '-'){
            check = 1;
        }else{
            if(check == 1){
                tmp *= -1;
                check = 0;
            }
            vc.push_back(tmp);
            tmp = 0;
        }
    }
    if(check == 1){
        tmp *= -1;
    }
    vc.push_back(tmp);
    for(int i=0; i<K; i++){
        vector<int> vvc;
        for(int j=1; j<vc.size(); j++){
            tmp = vc[j] - vc[j-1];
            vvc.push_back(tmp);
        }
        vc = vvc;
    }
    for(int i=0; i<vc.size(); i++){
        if(i != vc.size()-1){
            cout<<vc[i]<<",";
        }else{
            cout<<vc[i]<<"\n";
        }
    }
    return 0;
}