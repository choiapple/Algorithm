#include <iostream>
#include <string>
using namespace std;
int main(){
    int N;
    string s = "SciComLove";
    cin>>N;
    N = N%10;
    cout<<s.substr(N)<<s.substr(0, N)<<"\n";
    return 0;
}