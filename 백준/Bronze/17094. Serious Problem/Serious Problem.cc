#include <iostream>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int two = 0;
    int ee = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '2') two++;
        else ee++;
    }
    if(two == ee){
        cout<<"yee"<<"\n";
    }else if(two > ee){
        cout<<2<<"\n";
    }else{
        cout<<"e"<<"\n";
    }
    return 0;
}