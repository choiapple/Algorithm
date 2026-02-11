#include <iostream>
using namespace std;
int main(){
    int a, b, n, k, flag = 0, answer1, answer2;
    cin>>a>>b>>n>>k;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            if(k - n > 0){
                k -= n;
                continue;
            }
            flag = 1;
            answer1 = i;
            answer2 = j;
            break;
        }
        if(flag == 1) break;
    }
    cout<<answer1<<" "<<answer2;
    return 0;
}