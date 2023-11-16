#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
bool desc(int a, int b){
    return a > b;
}
int main(){
    int ham[1001] = {0, };
    int col[1001] = {0, };
    int side[1001] = {0, };
    int B, C, D;
    int answer1 = 0;
    cin>>B>>C>>D;
    for(int b=0; b<B; b++){
        cin>>ham[b];
        answer1 += ham[b];
    }
    for(int c=0; c<C; c++){
        cin>>col[c];
        answer1 += col[c];
    }
    for(int d=0; d<D; d++){
        cin>>side[d];
        answer1 += side[d];
    }
    
    int answer2 = 0;
    sort(ham, ham+B, desc);
    sort(col, col+C, desc);
    sort(side, side+D, desc);
    int min_num = min(B,min(C, D));
    for(int i=0; i<min_num; i++){
        answer2 += (ham[i] + col[i] + side[i]) * 0.9;
    }
    for(int i=min_num; i<B; i++){
        answer2 += ham[i];
    }
    for(int i=min_num; i<C; i++){
        answer2 += col[i];
    }
    for(int i=min_num; i<D; i++){
        answer2 += side[i];
    }
    cout<<answer1<<"\n"<<answer2<<"\n";
}