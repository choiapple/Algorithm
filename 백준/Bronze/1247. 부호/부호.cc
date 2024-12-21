#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long N, sum = 0, tmp = 0, flow = 0, pre;
    for(int t=0; t<3; t++){
        cin>>N;
        sum = 0;
        flow = 0;
        for(int n=0; n<N; n++){
            cin>>tmp;
            pre = sum;
            sum = sum + tmp;
            if(tmp > 0 && pre > 0 && sum < 0) flow++;
            if(tmp < 0 && pre < 0 && sum > 0) flow--;
        }
        if(flow == 0){
            if(sum == 0){
                cout<<"0"<<"\n";
            }else{
                if(sum > 0){
                    cout<<"+"<<"\n";
                }else{
                    cout<<"-"<<"\n";
                }
            }
        }else{
            if(flow > 0){
                cout<<"+"<<"\n";
            }else{
                cout<<"-"<<"\n";
            }
        }
    }
}