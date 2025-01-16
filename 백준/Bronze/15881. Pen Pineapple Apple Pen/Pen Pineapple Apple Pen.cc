#include <iostream>
#include <string>
using namespace std;
int main(){
    int n, answer = 0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0; i<n; i++){
        if(s.substr(i, 4) == "pPAp"){
            answer++;
            i+=3;
        }
    }
    cout<<answer<<"\n";
}