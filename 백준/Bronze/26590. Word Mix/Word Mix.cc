#include <iostream>
using namespace std;
int main(){
    string s1, s2;
    int len = 0;
    cin>>s1>>s2;
    if(s1.length() > s2.length()){
        len = s2.length();
    }else{
        len = s1.length();
    }
    int idx = 1;
    int flag = 1;
    string s3 = "";
    s3 += s1[0];
    while(s3.length() < len){
        if(flag == 1){
            s3 += s2[idx];
            idx++;
            flag = 0;
        }else{
            s3 += s1[idx];
            flag = 1;
            idx++;
        }
    }
    cout<<s3<<"\n";
    return 0;
}