#include <iostream>
using namespace std;
int main(){
    long long N;
    cin>>N;
    string s = "";
    while(N > 0){
        if(N%2 == 1){
            s = '1' + s;
        }else{
            s = '0' + s;
        }
        N /= 2;
    }
    cout<<s<<"\n";
    return 0;
}