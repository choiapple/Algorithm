#include <iostream>
using namespace std;
int main(){
    int N, A, B, C, D;
    int answer = 0;
    cin>>N;
    for(int i=0; i<N; i++){
        int arr[7] = {0, };
        cin>>A>>B>>C>>D;
        arr[A]++;
        arr[B]++;
        arr[C]++;
        arr[D]++;
        int check = 0;
        int num = 0;
        int num2 = 0;
        int flag = 0;
        for(int j=1; j<=6; j++){
            if(arr[j] >= check){
                check = arr[j];
                num = j;
            }
        }
        if(check == 2){
            for(int j=1; j<=6; j++){
                if(arr[j] == 2 && num != j){
                    flag = 1;
                    num2 = j;
                }
            }
        }
        if(check == 4){
            int tmp = 50000 + num*5000;
            if(tmp > answer){
                answer = tmp;
            }
        }else if(check == 3){
            int tmp = 10000 + num*1000;
            if(tmp > answer){
                answer = tmp;
            }
        }else if(check == 2 && flag == 1){
            int tmp = 2000 + num*500 + num2*500;
            if(tmp > answer){
                answer = tmp;
            }
        }else if(check == 2 && flag == 0){
            int tmp = 1000 + num*100;
            if(tmp > answer){
                answer = tmp;
            }
        }else{
            int tmp = num*100;
            if(tmp > answer){
                answer = tmp;
            }
        }
    }
    cout<<answer<<"\n";
}