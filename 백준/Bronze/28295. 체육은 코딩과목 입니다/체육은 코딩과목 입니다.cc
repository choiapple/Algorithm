#include <iostream>
using namespace std;
int main(){
    char NEWS[4] = {'N', 'E', 'S', 'W'};
    int start = 0, tmp;
    for(int i=0; i<10; i++){
        cin>>tmp;
        start = (start + tmp) % 4;
    }
    cout<<NEWS[start]<<"\n";
    return 0;
}