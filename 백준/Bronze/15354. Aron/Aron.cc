#include <iostream>
using namespace std;
int main(){
    int N, answer = 1;
    char cur, pre;
    cin>>N;
    cin>>pre;
    for(int i=1; i<N; i++){
        cin>>cur;
        if(pre != cur){
            pre = cur;
            answer++;
        }
    }
    cout<<answer+1<<"\n";
    return 0;
}