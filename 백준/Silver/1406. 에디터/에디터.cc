#include <iostream>
#include <string>
#include <list>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int M;
    string s;
    char cmd, c;
    cin>>s;
    list<char> li(s.begin(), s.end());
    auto cursor = li.end();
    cin>>M;
    for(int i=0; i<M; i++){
        cin>>cmd;
        if(cmd == 'L'){
            if(cursor != li.begin()){
                cursor--;
            }
        }else if(cmd == 'D'){
            if(cursor != li.end()){
                cursor++;
            }
        }else if(cmd == 'B'){
            if(cursor != li.begin()){
                cursor--;
                cursor = li.erase(cursor);
            }
        }else if(cmd == 'P'){
            cin>>c;
            li.insert(cursor, c);
        }
    }
    for(cursor=li.begin(); cursor != li.end(); cursor++){
        cout<<*cursor;
    }
    return 0;
}