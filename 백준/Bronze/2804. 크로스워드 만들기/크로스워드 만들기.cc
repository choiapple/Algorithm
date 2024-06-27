#include <iostream>
using namespace std;
int main(){
    string s1, s2;
    char ch[31][31];
    cin>>s1>>s2;
    int r, c, len1, len2, flag = 0;
    len1 = s1.length();
    len2 = s2.length();
    for(int i=0; i<len1; i++){
        for(int j=0; j<len2; j++){
            if(s1[i] == s2[j]){
                c = i;
                r = j;
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            break;
        }
    }
    for(int i=0; i<=30; i++){
        for(int j=0; j<=30; j++){
            ch[i][j] = '.';
        }
    }
    for(int i=0; i<len2; i++){
        ch[i][c] = s2[i];
    }
    for(int i=0; i<len1; i++){
        ch[r][i] = s1[i];
    }
    for(int i=0; i<len2; i++){
        for(int j=0; j<len1; j++){
            cout<<ch[i][j];
        }
        cout<<"\n";
    }
}