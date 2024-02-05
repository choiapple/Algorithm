#include <iostream>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        string answer = "";
        int len = s.length();
        int tmp = 0;
        for(int i=0; i<len; i++){
            if(s[i] == 'B' || s[i] == 'F' || s[i] == 'P' || s[i] == 'V'){
                if(tmp == 1) continue;
                answer += '1';
                tmp = 1;
            }else if(s[i] == 'C' || s[i] == 'G' || s[i] == 'J' || s[i] == 'K' || 
                    s[i] == 'Q' || s[i] == 'S' || s[i] == 'X' || s[i] == 'Z'){
                if(tmp == 2) continue;
                answer += '2';
                tmp = 2;
            }else if(s[i] == 'D' || s[i] == 'T'){
                if(tmp == 3) continue;
                answer += '3';
                tmp = 3;
            }else if(s[i] == 'L'){
                if(tmp == 4) continue;
                answer += '4';
                tmp = 4;
            }else if(s[i] == 'M' || s[i] == 'N'){
                if(tmp == 5) continue;
                answer += '5';
                tmp = 5;
            }else if(s[i] == 'R'){
                if(tmp == 6) continue;
                answer += '6';
                tmp = 6;
            }else{
                tmp = 0;
            }
        }
        cout<<answer<<"\n";
    }
}