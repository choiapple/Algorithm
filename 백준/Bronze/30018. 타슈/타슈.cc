#include <iostream>
using namespace std;
int main(){
    int N, a[101], b[101], flag = 0, answer = 0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>a[i];
    }
    for(int i=0; i<N; i++){
        cin>>b[i];
    }
    while(true){
        for(int i=0; i<N; i++){
            if(a[i] < b[i]){
                flag = 1;
                answer++;
                for(int j=0; j<N; j++){
                    if(a[j] > b[j]){
                        b[j]++;
                        b[i]--;
                        break;
                    }
                }
            }
        }
        if(flag == 1){
            flag = 0;
        }else{
            break;
        }
    }
    cout<<answer<<"\n";
}