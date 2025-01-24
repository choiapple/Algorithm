#include <iostream>
using namespace std;
int main(){
    int N, pu = 0, fri = 0, flag = 0, answer;
    cin>>N;
    for(int i=1; i<=100000; i++){
        if(N - i >= 0){
            N -= i;
            continue;
        }
        if(i % 2 == 0){
            answer = 0;
        }else{
            answer = i - N;
        }
        break;
    }
    cout<<answer<<"\n";
    return 0;
}