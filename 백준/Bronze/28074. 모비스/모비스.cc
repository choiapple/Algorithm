#include <iostream>
using namespace std;
int main(){
    string mobis = "MOBIS";
    string s;
    int visit[6] = {0, };
    cin>>s;
    for(int i=0; i<s.length(); i++){
        for(int j=0; j<5; j++){
            if(mobis[j] == s[i]){
                visit[j] = 1;
            }
        }
    }
    int flag = 0;
    for(int i=0; i<5; i++){
        if(visit[i] == 0){
            flag = 1;
        }
    }
    if(flag == 0){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    
}