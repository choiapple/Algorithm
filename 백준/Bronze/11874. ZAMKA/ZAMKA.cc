#include <iostream>
using namespace std;
int main(){
    int L, D, X, min = 0, max = 0;
    cin>>L>>D>>X;
    for(int i=L; i<=D; i++){
        int t, tmp = 0;
        t = i;
        while(t > 0){
            tmp += t%10;
            t /= 10;
        }
        if(min == 0 && tmp == X){
            min = i;
        }
        
        if(min != 0 && tmp == X){
            max = i;
        }
    }
    cout<<min<<"\n"<<max<<"\n";
    return 0;
}