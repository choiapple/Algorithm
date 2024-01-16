#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x[n+1];
    int y[n+1];
    int cnt = 0;
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
    }
    for(int i=0; i<n; i++){
        cnt = 0;
        for(int j=0; j<n;j++){
            if(i != j){
                if(x[i] < x[j] && y[i] < y[j]){
                    cnt++;
                }
            }
        }
        cout<<cnt+1<<" ";
    }
}