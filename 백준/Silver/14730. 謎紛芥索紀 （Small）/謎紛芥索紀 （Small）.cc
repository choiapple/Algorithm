#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int a, b;
    int answer = 0;
    for(int i=0; i<N; i++){
        cin>>a>>b;
        answer += a*b;
    }
    cout<<answer<<"\n";
}