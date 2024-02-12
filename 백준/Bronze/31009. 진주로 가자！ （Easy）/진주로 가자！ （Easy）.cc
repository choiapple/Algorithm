#include <iostream>
using namespace std;
int main(){
    int N, price;
    string s;
    int jinju_price = 0;
    int big_jinju = 0;
    int arr[1001] = {0, };
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>s>>price;
        if(s == "jinju"){
            jinju_price = price;
        }
        arr[i] = price;
    }
    for(int i=0; i<N; i++){
        if(jinju_price < arr[i]){
            big_jinju++;
        }
    }
    cout<<jinju_price<<"\n"<<big_jinju<<"\n";
    return 0;
}