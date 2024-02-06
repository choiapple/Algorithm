#include <iostream>
using namespace std;
int main(){
    int N;
    string s;
    cin>>N;
    cin>>s;
    int answer = 1;
    for(int i=0; i<N; i++){
       if(s[i] == 'L'){
            i++;
            answer++;
        }else if(s[i] == 'S'){
            answer++;
        }
    }
    if(answer >= N){
        cout<<N<<"\n";
    }else{
        cout<<answer<<"\n";
    }
}