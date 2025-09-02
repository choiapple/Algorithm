#include <iostream>
#include <string>
using namespace std;
int main(){
    string s = "", ss ="", tmp;
    int N;
    long long s_l, ss_l;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        s += tmp;
    }
    for(int i=0; i<N; i++){
        cin>>tmp;
        ss += tmp;
    }
    s_l = stol(s);
    ss_l = stol(ss);
    cout<<(s_l < ss_l ? s_l : ss_l)<<"\n";
    return 0;
}