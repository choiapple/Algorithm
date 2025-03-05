#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s, arr[10] = {"i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili"};
    int i = 0, flag = 0;
    char tmp;
    while(cin>>s){
        i++;
        flag = 0;
        for(int i=0; i<10; i++){
            if(arr[i] == s){
                flag = 1;
                break;
            }
        }
        if(flag == 1 && i != 1) continue;
        if(flag == 1 && i == 1){
            tmp = toupper(s[0]);
            cout<<tmp;
        }else if(flag == 0){
            tmp = toupper(s[0]);
            cout<<tmp;
        }
    }
}