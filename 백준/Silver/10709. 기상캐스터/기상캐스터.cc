#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int H, W;
    char map[101][101];
    cin>>H>>W;
    for(int h=0; h<H; h++){
        for(int w=0; w<W; w++){
            cin>>map[h][w];
        }
    }
    for(int h=0; h<H; h++){
        int flag = -1;
        for(int w=0; w<W; w++){
            if(map[h][w] == '.' && flag == -1){
                cout<<-1<<" ";
            }else if(map[h][w] == '.' && flag != -1){
                flag++;
                cout<<flag<<" ";
            }else if(map[h][w] == 'c'){
                cout<<0<<" ";
                flag = 0;
            }
        }
        cout<<"\n";
    }
    return 0;
}