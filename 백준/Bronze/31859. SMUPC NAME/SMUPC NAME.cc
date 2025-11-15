#include <iostream>
#include <string>
using namespace std;
int main(){
    int N, arr[26] = {0, }, tmp = 0;
    string s, answer = "";
    cin>>N>>s;
    for(int i=0; i<s.length(); i++){
        int idx = s[i] - 'a';
        if(arr[idx] == 0){
            answer += s[i];
            arr[idx]++;
        }else{
            tmp++;
        }
    }
    answer += to_string(tmp + 4);
    answer = to_string(1906 + N) + answer;
    for(int i=0; i<answer.length()/2; i++){
        char t = answer[i];
        answer[i] = answer[answer.length()-1-i];
        answer[answer.length()-1-i] = t;
    }
    answer = "smupc_" + answer;
    cout<<answer<<"\n";
    return 0;
}