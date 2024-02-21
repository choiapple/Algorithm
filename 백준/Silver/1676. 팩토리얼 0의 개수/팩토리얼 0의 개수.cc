#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fivecnt = 0;
    for(int i=0; i<=n; i++){
        if(i != 0){
            if(i%125 == 0){
                fivecnt += 3;
            }else if(i%25 == 0){
                fivecnt += 2;
            }else if(i%5 == 0){
                fivecnt += 1;
            }
        }
    }
    cout<<fivecnt<<"\n";
    return 0;
}