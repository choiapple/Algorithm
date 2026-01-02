#include <iostream>
#include <string>
using namespace std;
int main(){
    int K, S;
    string arr;
    cin>>K>>S;
    cin.ignore();
    K = K%26;
    getline(cin, arr);
    for(int s=0; s<S; s++){
        if(arr[s] >= 'a' && arr[s] <= 'z'){
            arr[s] = (arr[s] - 'a' + K)%26 + 'a';
        }else if(arr[s] >= 'A' && arr[s] <= 'Z'){
            arr[s] = (arr[s] - 'A' + K)%26 + 'A';
        }
        cout<<arr[s];
    }
    return 0;
}