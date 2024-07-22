#include <iostream>
using namespace std;
int n, m, t, c, tmp, j, len, answer_h, answer_c;
int main(){
    cin>>n>>m>>t;
    if(n > m){
        tmp = n;
        n = m;
        m = tmp;
    }
    len = t/n;
    answer_h = 0;
    answer_c = t;
    for(int i=len; i>=0; i--){
        j = (t - i * n) / m;
        c = t - (i * n) - (j * m);
        if(c < answer_c){
            answer_c = c;
            answer_h = i + j;
        }else if(c == answer_c && i + j > answer_h){
            answer_h = i + j;
        }
    }
    cout<<answer_h<<" "<<answer_c<<"\n";
    return 0;
}