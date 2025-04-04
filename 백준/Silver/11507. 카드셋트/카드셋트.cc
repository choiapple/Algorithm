#include <iostream>
using namespace std;
int main(){
    string s;
    int len, check[4][14] = {0, }, j, tmp, answer;
    cin>>s;
    len = s.length();
    for(int i=0; i<len; i+=3){
        if(s[i] == 'P'){
            j = 0;
        }else if(s[i] == 'K'){
            j = 1;
        }else if(s[i] == 'H'){
            j = 2;
        }else if(s[i] == 'T'){
            j = 3;
        }
        tmp = (s[i+1] - '0') * 10 + (s[i+2] - '0');
        if(check[j][tmp] == 0){
            check[j][tmp] = 1;
        }else{
            cout<<"GRESKA"<<"\n";
            return 0;
        }
    }
    for(int i=0; i<4; i++){
        answer = 13;
        for(int k=1; k<=13; k++){
            if(check[i][k] == 1){
                answer--;
            }
        }
        cout<<answer<<" ";
    }
    return 0;
}