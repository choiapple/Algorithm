#include <iostream>
using namespace std;
int arr[3] = {1, 0, 0};
string s;
void AA(){
    int tmp = arr[0];
    arr[0] = arr[1];
    arr[1] = tmp;
}
void BB(){
    int tmp = arr[1];
    arr[1] = arr[2];
    arr[2] = tmp;
}
void CC(){
    int tmp = arr[0];
    arr[0] = arr[2];
    arr[2] = tmp;
}
int main(){
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'A'){
            AA();
        }else if(s[i] == 'B'){
            BB();
        }else if(s[i] == 'C'){
            CC();
        }
    }
    for(int i=0; i<3; i++){
        if(arr[i] == 1){
            cout<<i+1<<"\n";
        }
    }
}