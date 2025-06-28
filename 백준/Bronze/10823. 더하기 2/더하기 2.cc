#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int answer = 0;
    string s, total_s = "";
    while(getline(cin, s)){
        total_s += s;
    }
    istringstream ss(total_s);
    string tmp;
    while(getline(ss, tmp, ',')){
        answer += stoi(tmp);
    }
    cout<<answer<<"\n";
    return 0;
}