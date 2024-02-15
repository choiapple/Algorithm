#include <iostream>
#include <numeric>
using namespace std;
long long gcd(long long a, long long b){
    if(a > b){
        while(true){
            long long c = a % b;
            if(c == 0) return b;
            a = b;
            b = c;
        }
    }else{
        while(true){
            long long c = b % a;
            if(c == 0) return a;
            b = a;
            a = c;
        }
    }
}
int main(){
    long long A, B;
    cin>>A>>B;
    long long answer = gcd(A, B);
    for(int i=0; i<answer; i++){
        cout<<1;
    }
}