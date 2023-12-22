#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int N;
    string s, tmp;
    
    cin>>N;
    cin.ignore();
    for(int i=0; i<N; i++){
        stringstream ss;
        getline(cin, s);
        vector<string> vc;
        ss.str(s);
        while(ss>>tmp){
            vc.push_back(tmp);
        };
        for(int j=2; j<vc.size(); j++){
            cout<<vc[j]<<" ";
        }
        cout<<vc[0]<<" "<<vc[1]<<"\n";
    }
}