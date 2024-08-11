#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int N, answer = 0;
    stringstream ss;
    string s;
    getline(cin, s);
    ss.str(s);
    while(ss>>N){
        if(N > 0){
            answer++;
        }
    }
    cout<<answer<<"\n";
    return 0;
}