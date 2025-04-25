#include <iostream>
#include <set>
#include <string>
#include <sstream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    string s, animal, say, tmp, b, c, buffer;
    cin>>T;
    for(int t=0; t<T; t++){
        getline(cin, buffer);
        getline(cin, s);
        stringstream ss(s);
        set<string> se;
        while(true){
            cin>>animal>>tmp>>say;
            if(animal == "what"){
                cin>>b>>c;
                break;
            }
            se.insert(say);
        }
        while(ss >> tmp){
            if(!se.count(tmp)){
                cout<<tmp<<" ";
            }
        }
        cout<<"\n";
    }
}