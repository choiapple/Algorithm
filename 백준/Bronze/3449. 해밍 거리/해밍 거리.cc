#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, len, answer = 0;
    string s, ss;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>s>>ss;
        len = s.length();
        answer = 0;
        for(int j=0; j<len; j++){
            if(s[j] != ss[j]){
                answer++;
            }
        }
        cout<<"Hamming distance is "<<answer<<".\n";
    }
    return 0;
}