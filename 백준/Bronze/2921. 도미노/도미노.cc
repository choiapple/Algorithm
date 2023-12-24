#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int answer = 0;
    for(int i=1; i<=N; i++){
        answer += (i*(i+1))/2 + i*(i+1); 
    }
    cout<<answer<<"\n";
}