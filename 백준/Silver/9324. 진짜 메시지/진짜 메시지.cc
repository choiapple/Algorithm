#include <iostream>
using namespace std;
int main(){
    
    int T;
    cin>>T;
    string s;
    for(int t=0; t<T; t++){
        cin>>s;
        int arr[27] = {0, };
        int flag = 0;
        for(int i=0; i<s.length(); i++){
            int tmp = s[i] - 65;
            if(arr[tmp] < 3){
                arr[tmp]++;
            }
            if(arr[tmp] == 3){
                if(i+1 <s.length() && s[i] == s[i+1]){
                    i++;
                    arr[tmp] = 0;
                }else{
                    flag = 1;
                }
            }
        }
        if(flag == 0){
            cout<<"OK"<<"\n";
        }else{
            cout<<"FAKE"<<"\n";
        }
    }
}