#include <iostream>
using namespace std;
int main(){
    double X, Y, N, a, b;
    cin>>X>>Y;
    cin>>N;
    double answer = X/Y*1000;
    for(int i=0; i<N; i++){
        cin>>a>>b;
        double xx = a/b*1000;
        if(answer > xx){
            answer = xx;
        }
    }
    cout<<fixed;
    cout.precision(10);
    cout<<answer<<"\n";
    return 0;
}
