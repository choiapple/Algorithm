#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, tmp, Mary, John;
    while(true){
        cin>>N;
        if(N == 0) break;
        Mary = 0;
        John = 0;
        for(int n=0; n<N; n++){
            cin>>tmp;
            if(tmp == 0) Mary++;
            else John++;
        }
        cout<<"Mary won "<<Mary<<" times and John won "<<John<<" times\n";
    }
}