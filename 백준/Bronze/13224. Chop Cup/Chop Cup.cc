#include <iostream>
using namespace std;
int arr[3] = {1, 0, 0};
void Af(){
    int tmp = arr[0];
    arr[0] = arr[1];
    arr[1] = tmp;
}
void Bf(){
    int tmp = arr[1];
    arr[1] = arr[2];
    arr[2] = tmp;
}
void Cf(){
    int tmp = arr[0];
    arr[0] = arr[2];
    arr[2] = tmp;
}
int main(){
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'A'){
            Af();
        }else if(s[i] == 'B'){
            Bf();
        }else{
            Cf();
        }
    }
    for(int i=0; i<3; i++){
        if(arr[i] == 1){
            cout<<i+1<<"\n";
            return 0;
        }
    }
}