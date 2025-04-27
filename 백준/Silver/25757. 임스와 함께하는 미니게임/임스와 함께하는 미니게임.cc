#include <iostream>
#include <set>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, answer = 0, si;
    char game;
    set<string> nameList;
    string s;
    cin>>N>>game;
    for(int n=0; n<N; n++){
        cin>>s;
        nameList.insert(s);
    }
    si = nameList.size();
    if(game == 'Y'){
        answer = si;
    }else if(game == 'F'){
        answer = si / 2;
    }else if(game == 'O'){
        answer = si / 3;
    }
    cout<<answer<<"\n";
    return 0;
}