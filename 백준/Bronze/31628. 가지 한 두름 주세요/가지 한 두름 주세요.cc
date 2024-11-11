#include <iostream>
using namespace std;
int main(){
    int answer = 0, flag = 0;
    string s[10][10];
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cin>>s[i][j];
        }
    }
    for(int i=0; i<10; i++){
        string ss = s[i][0];
        flag = 0;
        for(int j=0; j<10; j++){
            if(ss != s[i][j]){
                flag = 1;
            }
        }
        if(flag == 0){
            answer = 1;
        }
    }
    for(int i=0; i<10; i++){
        string ss = s[0][i];
        flag = 0;
        for(int j=0; j<10; j++){
            if(ss != s[j][i]){
                flag = 1;
            }
        }
        if(flag == 0){
            answer = 1;
        }
    }
    cout<<answer<<"\n";
    return 0;
}