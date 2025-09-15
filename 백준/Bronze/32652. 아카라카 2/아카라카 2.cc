#include <iostream>
using namespace std;
int main(){
    int N;
    string s = "";
    cin>>N;
    for(int n=0; n<N; n++){
        if(n == 0){
            s += "AKARAKA";
        }else{
            s += "RAKA";
        }
    }
    cout<<s<<"\n";
    return 0;
}