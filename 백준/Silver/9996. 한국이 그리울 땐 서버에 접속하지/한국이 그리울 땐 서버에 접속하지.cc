#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, pivot;
    string s1, s2;
    cin>>N;
    cin>>s1;
    for(int i=0; i<s1.length(); i++){
        if(s1[i] == '*'){
            pivot = i;
        }
    }
    string prefix = s1.substr(0, pivot);
    string suffix = s1.substr(pivot+1, s1.length());
    for(int i=0; i<N; i++){
        cin>>s2;
        if(prefix.length() + suffix.length() > s2.length()){
            cout<<"NE"<<"\n";
        }else if(prefix == s2.substr(0, pivot) && suffix == s2.substr(s2.length() - suffix.length(), s2.length())){
            cout<<"DA"<<"\n";
        }else{
            cout<<"NE"<<"\n";
        }
    }
}