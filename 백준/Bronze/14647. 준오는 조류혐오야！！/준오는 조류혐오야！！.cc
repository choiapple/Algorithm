#include <iostream>
using namespace std;
int main(){
    int n, m;
    int arr[501][501] = {0, };
    cin>>n>>m;
    int total = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
            int t = arr[i][j];
            while(t > 0){
                if(t%10 == 9){
                    total++;
                }
                t/=10;
            }
        }
    }
    int answer = 0;
    for(int i=0; i<n; i++){
        int tmp = 0;
        for(int j=0; j<m; j++){
            int t = arr[i][j];
            while(t>0){
                if(t%10 == 9){
                    tmp++;
                }
                t/=10;
            }
        }
        if(answer < tmp){
            answer = tmp;
        }
    }
    for(int i=0; i<m; i++){
        int tmp = 0;
        for(int j=0; j<n; j++){
            int t = arr[j][i];
            while(t>0){
                if(t%10 == 9){
                    tmp++;
                }
                t/=10;
            }
        }
        if(answer < tmp){
            answer = tmp;
        }
    }
    cout<<total - answer<<"\n";
    
}