#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long N, start, end, mid;
    cin>>N;
    start = 0;
    end = N;
    while(start < end){
        mid = (start + end) / 2;
        if(pow(mid, 2) >= N) end = mid;
        else start = mid + 1;
    }
    cout<<end<<"\n";
    return 0;
}