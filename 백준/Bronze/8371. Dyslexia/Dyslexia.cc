#include <iostream>
using namespace std;
int main(){
    int N, answer = 0;
    string s1, s2;
    cin>>N;
    cin>>s1>>s2;
    for(int n=0; n<N; n++){
        if(s1[n] != s2[n]){
            answer++;
        }
    }
    cout<<answer<<"\n";
    return 0;
}