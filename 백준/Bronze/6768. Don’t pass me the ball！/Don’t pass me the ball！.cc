#include <iostream>
using namespace std;
int main(){
    int N, answer;
    cin>>N;
    if(N < 4){
        cout<<0<<"\n";
        return 0;
    }
    answer = ((N-1) * (N-2) * (N-3)) / (3 * 2 * 1);
    cout<<answer<<"\n";
}