#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, answer = 0, flag = 0;
    string s, tmp;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>s;
        flag = 0;
        for(int i=0; i<s.length()-1; i++){
            tmp = s.substr(i, 2);
            if(tmp == "CD"){
                flag = 1;
                break;
            }
        }
        if(flag == 0) answer++;
    }
    cout<<answer<<"\n";
}