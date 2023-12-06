#include <iostream>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    long long tmp = 0;
    long long answer = 0;
    for(int i=0; i<n; i++){
        if(s[i] - '0' >= 0 && s[i] - '0' <= 9){
            tmp = tmp*10 + (s[i] - '0');
        }else{
            answer += tmp;
            tmp = 0;
        }
    }
    answer += tmp;
    cout<<answer<<"\n";
}