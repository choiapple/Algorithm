#include <iostream>
#include <string>
using namespace std;
int main(){
    int N, s=0, b=0;
    string ss;
    cin>>N;
    cin>>ss;
    int k = 0;
    while(k < ss.length()){
        if(ss[k] == 's'){
            s++;
            k += 8;
        }else{
            b++;
            k += 7;
        }
    }
    if(s == b){
        cout<<"bigdata? security!"<<"\n";
    }else if(s > b){
        cout<<"security!"<<"\n";
    }else{
        cout<<"bigdata?"<<"\n";
    }
}