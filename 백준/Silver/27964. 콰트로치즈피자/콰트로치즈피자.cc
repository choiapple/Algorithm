#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, len;
    string s, tmp;
    cin>>N;
    map<string, int> m;
    for(int i=0; i<N; i++){
        cin>>s;
        len = s.length();
        if(len >= 6){
            tmp = s.substr(len-6, 6);
            if(tmp == "Cheese"){
                m[s] = 1;
            }
        }
    }
    if(m.size() >= 4){
        cout<<"yummy";
    }else{
        cout<<"sad";
    }
    return 0;
}