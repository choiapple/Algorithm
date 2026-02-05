#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int N, flag = 0;
    string s;
    cin>>N;
    cin>>s;
    for(int n=0; n<N; n++){
        if(s.substr(n, 4) == "gori"){
            flag = 1;
        }
    }
    if(flag == 1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}