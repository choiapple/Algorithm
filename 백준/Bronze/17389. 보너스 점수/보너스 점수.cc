#include <iostream>
using namespace std;
int main(){
    int N, answer = 0, bonus = 0;
    string s;
    cin>>N;
    cin>>s;
    for(int i=0; i<N; i++){
        if(s[i] == 'O'){
            answer += i+1;
            answer += bonus++;
        }else{
            bonus = 0;
        }
    }
    cout<<answer<<"\n";
    return 0;
}