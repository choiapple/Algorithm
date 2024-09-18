#include <iostream>
using namespace std;
int main(){
    int N, w, h, answer = 0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>w>>h;
        if(w == 136){
            answer += 1000;
        }else if(w == 142){
            answer += 5000;
        }else if(w == 148){
            answer += 10000;
        }else if(w == 154){
            answer += 50000;
        }
    }
    cout<<answer<<"\n";
}