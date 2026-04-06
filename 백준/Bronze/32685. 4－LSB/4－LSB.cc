#include <iostream>
#include <string>
using namespace std;
int main(){
    int arr[3] = {0, }, answer = 0, k = 1;
    string s = "";
    cin>>arr[0]>>arr[1]>>arr[2];
    for(int i=2; i>=0; i--){
        for(int j=0; j<4; j++){
            if(arr[i]%2 == 0){
                s += "0";
            }else{
                s += "1";
            }
            arr[i] /= 2;
        }
    }
    for(int i=0; i<16; i++){
        if(s[i] == '1'){
            answer += k;
        }
        k *= 2;
    }
    string ss = to_string(answer);
    int n = 4 - ss.length();
    for(int i=0; i<n; i++){
        cout<<"0";
    }
    cout<<answer;
    return 0;
}