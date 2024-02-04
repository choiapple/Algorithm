#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N;
    cin>>N;
    long long arr[100001] = {0, };
    long long answer = 2000000001;
    long long answer1, answer2;
    int i = 0;
    int j = N-1;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    while(j > i){
        long long tmp = arr[i] + arr[j];
        if(abs(tmp) <= answer){
            answer = abs(tmp);
            answer1 = arr[i];
            answer2 = arr[j];
        }
        if(tmp <= 0){
            i++;
        }else{
            j--;
        }
    }
    cout<<answer1<<" "<<answer2<<"\n";
    return 0;
}