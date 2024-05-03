#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    stringstream st;
    st.str(s);
    int n;
    vector<int> vc;
    while(st>>n){
        vc.push_back(n);
    }
    int answer = 0;
    for(int i=1; i<vc.size(); i++){
        if(vc[i-1] > vc[i]){
            answer = 1;
        }
    }
    if(answer == 1){
        cout<<"Bad"<<"\n";
    }else{
        cout<<"Good"<<"\n";
    }
}