#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cur, i, j, answer = 0;
    i = 1;
    j = 1;
    cur = s[0] - '0';
    while(j < s.length()){
        if(s[j] - '0' == cur+1){
            cur = s[j] - '0';
            i++;
            j++;
        }else{
            if(i == 3){
                answer++;
            }
            cur = s[j] - '0';
            i = 1;
            j++;
        }
    }
    if(i == 3){
        answer++;
    }
    cout<<answer<<"\n";
}