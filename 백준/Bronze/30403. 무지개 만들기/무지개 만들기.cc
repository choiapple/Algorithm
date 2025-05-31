#include <iostream>
#include <string>
using namespace std;
int main(){
    char tmp, uc[7] = {'R', 'O', 'Y', 'G', 'B', 'I', 'V'};
    char lc[7] = {'r', 'o', 'y', 'g', 'b', 'i', 'v'};
    int N, visit_u[7] = {0, }, visit_l[7] = {0, }, sl, flag_u = 0, flag_l = 0;
    string s;
    cin>>N;
    cin>>s;
    sl = s.length();
    for(int i=0; i<sl; i++){
        for(int j=0; j<7; j++){
            if(s[i] == uc[j]){
                visit_u[j] = 1;
            }
        }
        for(int j=0; j<7; j++){
            if(s[i] == lc[j]){
                visit_l[j] = 1;
            }
        }
    }
    for(int i=0; i<7; i++){
        if(visit_u[i] == 0){
            flag_u = 1;
            break;
        }
    }
    for(int i=0; i<7; i++){
        if(visit_l[i] == 0){
            flag_l = 1;
            break;
        }
    }
    if(flag_l == 0 && flag_u == 0){
        cout<<"YeS"<<"\n";
    }else if(flag_l == 0 && flag_u == 1){
        cout<<"yes"<<"\n";
    }else if(flag_u == 0 && flag_l == 1){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO!"<<"\n";
    }
    return 0;
}
