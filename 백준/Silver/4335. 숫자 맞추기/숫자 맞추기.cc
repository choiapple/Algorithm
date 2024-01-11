#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int max_n = 11;
    int min_n = 0;
    int tmp = 12;
    string s;
    while(true){
        cin>>tmp;
        if(tmp == 0) return 0;
        cin>>s>>s;
        if(s[0] == 'h' && max_n > tmp){
            max_n = tmp;
        }else if(s[0] == 'l' && min_n < tmp){
            min_n = tmp;
        }else if(s[0] == 'o'){
            if(tmp > min_n && tmp < max_n){
                cout<<"Stan may be honest"<<"\n";
            }else{
                cout<<"Stan is dishonest"<<"\n";
            }
            max_n = 11;
            min_n = 0;
        }
    }
}
