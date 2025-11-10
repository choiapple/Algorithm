#include <iostream>
using namespace std;
int main(){
    int arr[2] = {0, }, map[501] = {0, };
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '0') arr[0]++;
        else arr[1]++;
    }
    arr[0] /= 2;
    arr[1] /= 2;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '0' && arr[0] > 0){
            arr[0]--;
            map[i] = 1;
        }
    }
    for(int i=s.length()-1; i>=0; i--){
        if(s[i] == '1' && arr[1] > 0){
            arr[1]--;
            map[i] = 1;
        }
    }
    for(int i=0; i<s.length(); i++){
        if(map[i] == 1){
            cout<<s[i];
        }
    }
    return 0;
}