#include <iostream>
using namespace std;
int main(){
    int tmp;
    int answer = 0;
    char yun;
    cin>>answer;
    while(true){
        cin>>yun;
        if(yun == '='){
            cout<<answer<<"\n";
            break;
        }else if(yun == '+'){
            cin>>tmp;
            answer = answer + tmp;
        }else if(yun == '-'){
            cin>>tmp;
            answer = answer - tmp;
        }else if(yun == '*'){
            cin>>tmp;
            answer = answer * tmp;
        }else if(yun == '/'){
            cin>>tmp;
            answer = answer / tmp;
        }
    }
}