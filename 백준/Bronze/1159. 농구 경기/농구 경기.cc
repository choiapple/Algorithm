#include <iostream>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    int arr[27] = {0, };
    for(int i=0; i<n; i++){
        cin>>s;
        int tmp = s[0] - 'a';
        arr[tmp]++;
    }
    int flag = 0;
    for(int i=0; i<26; i++){
        if(arr[i] >= 5){
            flag = 1;
            char c = i + 'a';
            cout<<c;
        }
    }
    if(flag == 0){
        cout<<"PREDAJA"<<"\n";
    }
}