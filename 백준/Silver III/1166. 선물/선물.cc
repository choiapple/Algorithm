#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long N, L, W, H, A;
    cin>>N>>L>>W>>H;
    double start = 0;
    double end = 1000000000;
    for(int i=0; i<10000; i++){
        double mid = (start + end) / 2;
        if(((long long)(L/mid)) * ((long long)(W/mid)) * ((long long)(H/mid)) < N){
            end = mid;
        }else{
            start = mid;
        }
    }
    cout<<fixed;
    cout.precision(15);
    cout<<start<<"\n";
}