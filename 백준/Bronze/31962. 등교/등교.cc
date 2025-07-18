#include <iostream>
using namespace std;
int main(){
    int N, X, s, t, answer = -1;
    cin>>N>>X;
    for(int n=0; n<N; n++){
        cin>>s>>t;
        if(s+t <= X && answer < s){
            answer = s;
        }
    }
    cout<<answer<<"\n";
    return 0;
}