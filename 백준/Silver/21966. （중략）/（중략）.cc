#include <iostream>
using namespace std;
int main(){
    int N;
    string s;
    cin>>N;
    cin>>s;
    if(N <= 25){
        cout<<s<<"\n";
        return 0;
    }
    int flag = 0;
    for(int i=12; i<N-12; i++){
        if(s[i] == '.'){
            flag = 1;
        }
    }
    if(flag == 0){
        cout<<s.substr(0, 11)<<"..."<<s.substr(N-11, 11);
    }else{
        cout<<s.substr(0, 9)<<"......"<<s.substr(N-10, 10);
    }
    return 0;
}