#include <iostream>
using namespace std;
int main(){
    int A, B, answer = 0;
    cin>>A>>B;
    for(int i=1; i<=A; i++){
        if(i-1 <= B){
            answer = i + i - 1;
        }
    }
    cout<<answer<<"\n";
}