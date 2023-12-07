#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n != 0){
        int max = -10005;
        int sum = 0;
        int input;
        for(int i=0; i<n; i++){
            cin>>input;
            
            if(sum + input > input){
                sum = sum + input;
            }else{
                sum = input;
            }
            if(sum > max){
                max = sum;
            }
        }
        cout<<max<<"\n";
        cin>>n;
    }
}