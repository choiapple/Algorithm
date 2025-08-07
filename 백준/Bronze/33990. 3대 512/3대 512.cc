#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N, a, b, c, answer = -1;
    cin>>N;
    for(int n=0; n<N; n++){
        cin>>a>>b>>c;
        if(a + b + c < 512) continue;
        if(abs(a+b+c-512) < abs(answer - 512)){
            answer = a + b + c;
        }
    }
    cout<<answer<<"\n";
    return 0;
}