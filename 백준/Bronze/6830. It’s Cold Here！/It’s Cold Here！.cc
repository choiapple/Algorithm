#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s, coldest_name;
    int c, coldest = 2147000000;
    while(cin>>s>>c){
        if(coldest > c){
            coldest_name = s;
            coldest = c;
        }
    }
    cout<<coldest_name<<"\n";
    return 0;
}