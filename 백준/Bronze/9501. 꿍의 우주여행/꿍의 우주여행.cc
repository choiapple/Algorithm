#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, N, D, answer;
    double v, f, c;
    cin>>T;
    for(int i=0; i<T; i++){
        cin>>N>>D;
        answer = 0;
        for(int j=0; j<N; j++){
            cin>>v>>f>>c;
            double tmp = v * (f/c);
            if(tmp >= D){
                answer++;
            }
        }
        cout<<answer<<"\n";
    }
    return 0;
}