#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int J, N, answer = 0, tmp = 0;
    string s;
    cin>>J>>N;
    cin.ignore();
    for(int n=0; n<N; n++){
        getline(cin, s);
        tmp = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == ' ') tmp+=1;
            else if(s[i] >= 'A' && s[i] <= 'Z') tmp += 4;
            else tmp += 2;
        }
        if(tmp <= J) answer++;
    }
    cout<<answer<<"\n";
    return 0;
}