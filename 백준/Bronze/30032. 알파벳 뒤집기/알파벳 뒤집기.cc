#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, D, len;
    string s, answer;
    cin>>N>>D;
    for(int n=0; n<N; n++){
        cin>>s;
        len = s.length();
        answer = "";
        for(int i=0; i<len; i++){
            if(D == 1){
               if(s[i] == 'd'){
                   answer += "q";
               }else if(s[i] == 'b'){
                   answer += "p";
               }else if(s[i] == 'q'){
                   answer += 'd';
               }else{
                   answer += "b";
               }
            }else{
                if(s[i] == 'd'){
                   answer += "b";
               }else if(s[i] == 'b'){
                   answer += "d";
               }else if(s[i] == 'q'){
                   answer += 'p';
               }else{
                   answer += "q";
               }
            }
        }
        cout<<answer<<"\n";
    }
}