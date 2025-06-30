#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, P, num1, num2, num3;
    while(true){
        cin>>N;
        if(N == 0) break;
        cin>>P;
        if(P <= N/2){
            if(P%2 == 0){
                num1 = P - 1;
                num2 = N - (P - 1);
                num3 = N - (num1 - 1);
            }else{
                num1 = P + 1;
                num2 = N - (num1 - 1);
                num3 = N - (P - 1);
            }
        }else{
            if(P%2 == 0){
                num1 = N - (P - 1);
                num2 = num1 + 1;
                num3 = P - 1;
            }else{
                num1 = N - P;
                num2 = num1 + 1;
                num3 = P + 1;
            }
        }
        cout<<num1<<" "<<num2<<" "<<num3<<"\n";
    }
}