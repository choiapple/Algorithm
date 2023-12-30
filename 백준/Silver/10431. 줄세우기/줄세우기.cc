#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, S;
    cin>>T;
    for(int t=1; t<=T; t++){
        cin>>S;
        int arr[21] = {0, };
        int answer = 0;
        for(int i=0; i<20; i++){
            cin>>arr[i];
        }
        for(int j=0; j<=19; j++){
            int tmp = arr[j];
            int max_num = -1;
            for(int k=j-1; k >= 0; k--){
                if(arr[k] > tmp){
                    max_num = k;
                }
            }
            if(max_num != -1){
                answer += j - max_num;
                for(int x=j; x>max_num; x--){
                    arr[x] = arr[x-1];
                }
                arr[max_num] = tmp;
            }
        }
        cout<<S<<" "<<answer<<"\n";
    }
}