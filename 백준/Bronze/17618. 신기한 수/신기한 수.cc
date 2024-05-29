#include <iostream>
using namespace std;
int main(){
    int N, tmp, sum_n, answer = 0;
    cin>>N;
    for(int i=1; i<=N; i++){
        tmp = i;
        sum_n = 0;
        while(tmp > 0){
            sum_n += tmp%10;
            tmp/=10;
        }
        if(i%sum_n == 0){
            answer++;
        }
    }
    cout<<answer<<"\n";
}