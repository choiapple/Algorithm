#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(long long input){
    long long num = input;
    if(num <= 1) return false;
    if(num == 2 || num == 3) return true;
    if(num%2==0 || num%3==0) return false;
    for(long long i=5; i<=sqrt(num); i++){
        if(num%i == 0) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, flag = 0;
    long long tmp, k;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>tmp;
        while(!isPrime(tmp)){
            tmp++;
        }
        cout<<tmp<<"\n";
    }
    return 0;
}