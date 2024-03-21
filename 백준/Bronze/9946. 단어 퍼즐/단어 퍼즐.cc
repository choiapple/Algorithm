#include <iostream>
using namespace std;
int main(){
    string s;
    string e;
    int t = 1;
    while(true){
        cin>>s>>e;
        if(s == "END" && e == "END") break;
        int len1 = s.length();
        int len2 = e.length();
        int arr1[27] = {0, };
        int arr2[27] = {0, };
        for(int i=0; i<len1; i++){
            int tmp = s[i] - 97;
            arr1[tmp]++;
        }
        for(int j=0; j<len2; j++){
            int tmp = e[j] - 97;
            arr2[tmp]++;
        }
        int flag = 0;
        for(int i=0; i<26; i++){
            if(arr1[i] != arr2[i]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout<<"Case "<<t<<": same"<<"\n";
        }else{
            cout<<"Case "<<t<<": different"<<"\n";
        }
        t++;
    }
}