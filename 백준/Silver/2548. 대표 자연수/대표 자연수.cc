#include <iostream>
#include <algorithm>
using namespace std;
int num[20000];
int main(){
    int N;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>num[i];
    }
    sort(num, num + N);
    if(N%2 == 0){
        cout<<num[N/2 - 1];
    }else{
        cout<<num[N/2];
    }
    return 0;
}