#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, tmp, a_total, b_total;
    int a[6] = {1, 2, 3, 3, 4, 10};
    int b[7] = {1, 2, 2, 2, 3, 5, 10};
    cin>>T;
    for(int t=1; t<=T; t++){
        a_total = 0;
        for(int i=0; i<6; i++){
            cin>>tmp;
            a_total += tmp * a[i];
        }
        b_total = 0;
        for(int i=0; i<7; i++){
            cin>>tmp;
            b_total += tmp * b[i];
        }
        cout<<"Battle "<<t<<": ";
        if(a_total == b_total){
            cout<<"No victor on this battle field"<<"\n";
        }else if(a_total > b_total){
            cout<<"Good triumphs over Evil"<<"\n";
        }else{
            cout<<"Evil eradicates all trace of Good"<<"\n";
        }
    }
}