#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int arr[1000001] ={0, };
    int A, P;
    cin>>A>>P;
    arr[A] = 1;
    int st = A;
    while(true){
        int tmp = st;
        int ans = 0;
        while(tmp > 0){
            int n = tmp%10;
            ans += pow(n, P);
            tmp /= 10;
        }
        arr[ans]++;
        if(arr[ans] > 2){
            break;
        }
        st = ans;
    }
    int answer = 0;
    for(int i=0; i<1000001; i++){
        if(arr[i] == 1){
            answer++;
        }
    }
    cout<<answer<<"\n";
}