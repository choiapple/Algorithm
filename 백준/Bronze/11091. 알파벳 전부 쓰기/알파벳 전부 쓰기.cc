#include <iostream>
#include <string>
using namespace std;
bool check(int visit[]){
    bool flag = true;
    for(int i=0; i<26; i++){
        if(visit[i] == 0){
            flag = false;
            break;
        }
    }
    return flag;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, len, k;
    string s;
    cin>>N;
    cin.ignore();
    for(int n=0; n<N; n++){
        getline(cin, s);
        len = s.length();
        int visit[26] = {0, };
        for(int i=0; i<len; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                k = s[i] - 'a';
                visit[k] = 1;
            }else if(s[i] >= 'A' && s[i] <= 'Z'){
                k = s[i] - 'A';
                visit[k] = 1;
            }
        }
        if(check(visit)){
            cout<<"pangram"<<"\n";
            continue;
        }
        cout<<"missing ";
        for(int i=0; i<26; i++){
            if(visit[i] == 0){
                char c = i + 'a';
                cout<<c;
            }
        }
        cout<<"\n";
    }
}