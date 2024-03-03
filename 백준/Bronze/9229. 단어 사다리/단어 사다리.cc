#include <iostream>
using namespace std;
int main(){
    string cur, next;
    while(true){
        cin>>cur;
        if(cur == "#") break;
        int flag2 = 0;
        while(true){
            cin>>next;
            if(next == "#"){
                if(flag2 == 0){
                    cout<<"Correct"<<"\n";
                }else{
                    cout<<"Incorrect"<<"\n";
                }
                break;
            }
            int len2 = cur.length();
            int len = next.length();
            int flag = 0;
            for(int i=0; i<len; i++){
                if(cur[i] != next[i]){
                    flag++;
                }
            }
            if(flag != 1){
                flag2 = 1;
            }
            if(len2 != len){
                flag2 = 1;
            }
            cur = next;
        }
    }
}