#include <iostream>
using namespace std;
int main(){
    int a, b, n, w, answer_y, answer_x, check = 0;
    cin>>a>>b>>n>>w;
    for(int i=1; i<=1000; i++){
        for(int j=1; j<=1000; j++){
            if(i + j == n && a * i + b * j == w){
                if(check == 0){
                    answer_x = i;
                    answer_y = j;
                    check = 1;
                }else{
                    check = 2;
                    break;
                }
                
            }
        }
        if(check == 2) break;
    }
    if(check == 0 || check == 2){
        cout<<-1<<"\n";
    }else{
        cout<<answer_x<<" "<<answer_y<<"\n";
    }
    
}