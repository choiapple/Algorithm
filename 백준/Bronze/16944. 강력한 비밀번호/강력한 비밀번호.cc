#include <iostream>
using namespace std;
int main(){
    int N, answer = 0, num = 0, big_a = 0, small_a = 0, spacial = 0;
    string s;
    cin>>N;
    cin>>s;
    for(int i=0; i<N; i++){
        if(s[i] >= '0' && s[i] <= '9'){
            num++;
        }else if(s[i] >= 'a' && s[i] <= 'z'){
            small_a++;
        }else if(s[i] >= 'A' && s[i] <= 'Z'){
            big_a++;
        }else{
            spacial++;
        }
    }
    if(num == 0) answer++;
    if(small_a == 0) answer++;
    if(big_a == 0) answer++;
    if(spacial == 0) answer++;
    if(answer + N < 6) answer += 6 - answer - N;
    cout<<answer<<"\n";
    return 0;
}