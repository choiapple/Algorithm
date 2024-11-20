#include <iostream>
#include <string>
using namespace std;
int main(){
    int A, B, tmp;
    string s;
    cin>>A>>B;
    tmp = A+B;
    s = to_string(tmp);
    cout<<s.length()<<"\n";
}