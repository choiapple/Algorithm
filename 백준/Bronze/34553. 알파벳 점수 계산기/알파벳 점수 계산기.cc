#include <iostream>
using namespace std;
int main(){
    string s;
    int answer = 0, k = 1;
    cin>>s;
    answer += k;
    for(int i=1; i<s.length(); i++){
        if(s[i-1] < s[i]){
            k++;
        }else{
            k = 1;
        }
        answer += k;
    }
    cout<<answer;
    return 0;
}