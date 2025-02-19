#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int cnt = 0;
    while(true){
        getline(cin,s);
        if(s == "고무오리 디버깅 끝") break;
        if(s == "문제"){
            cnt++;
        }else if(s == "고무오리"){
            if(cnt <= 0){
                cnt+=2;
            }else{
                cnt--;
            }
        }
    }
    if(cnt > 0){
       cout<<"힝구"<<"\n"; 
    }else{
        cout<<"고무오리야 사랑해"<<"\n";
    }
    return 0;
}