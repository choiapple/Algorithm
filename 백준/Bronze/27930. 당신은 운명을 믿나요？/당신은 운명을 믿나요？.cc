#include <iostream>
using namespace std;
int main(){
    int kk = 0, yy = 0;
    string s, k = "KOREA", y = "YONSEI", answer;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i] == k[kk]){
            kk++;
        }
        if(s[i] == y[yy]){
            yy++;
        }
        if(kk == k.length()){
            answer = k;
            break;
        }
        if(yy == y.length()){
            answer = y;
            break;
        }
    }
    cout<<answer<<"\n";
    return 0;
}