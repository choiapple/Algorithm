#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, arr[201] = {0, }, len = 1, answer = 0;
    cin>>N;
    arr[0] = 1;
    for(int i=2; i<=N; i++){
        int carry = 0;
        for(int j=0; j<len; j++){
            int prod = arr[j] * i + carry;
            arr[j] = prod % 10;
            carry = prod / 10;
        }
        while(carry > 0){
            arr[len++] = carry % 10;
            carry /= 10;
        }
    }
    for(int j=0; j<len; j++){
        if(arr[j] == 0) answer++;
    }
    cout<<answer<<"\n";
    return 0;
}