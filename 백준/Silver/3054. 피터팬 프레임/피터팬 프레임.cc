#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int len;
    string s;
    char c[5][100];
    cin>>s;
    len = s.length();
    for(int j=0; j<len; j++){
        for(int k=j*4; k<j*4+5; k++){
            if(j*4+2 == k){
                if((j+1)%3 == 0){
                    c[0][k] = '*';
                    c[4][k] = '*';
                }else{
                    c[0][k] = '#';
                    c[4][k] = '#';
                }
            }else{
                c[0][k] = '.';
                c[4][k] = '.';
            }
        }
    }
    for(int j=0; j<len; j++){
        for(int k=j*4; k<j*4+5; k++){
            if(abs(j*4+2-k) == 1){
                if((j+1)%3 == 0){
                    c[1][k] = '*';
                    c[3][k] = '*';
                }else{
                    c[1][k] = '#';
                    c[3][k] = '#';
                }
            }else{
                c[1][k] = '.';
                c[3][k] = '.';
            }
        }
    }
     for(int j=0; j<len; j++){
        for(int k=j*4; k<j*4+5; k++){
            if(c[2][k] == '*') continue;
            if(k == j*4 || k == j*4+4){
                if((j+1)%3 == 0){
                    c[2][k] = '*';
                }else{
                    c[2][k] = '#';
                }
            }else if(k == j*4+2){
                c[2][k] = s[j];
            }else{
                c[2][k] = '.';
            }
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<=len*4; j++){
            cout<<c[i][j];
        }
        cout<<"\n";
    }
    
}