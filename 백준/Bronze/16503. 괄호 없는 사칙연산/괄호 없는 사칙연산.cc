#include <iostream>
using namespace std;
int cal(int a, int b, char o) {
    int c;
    if(o == '+'){
        c = a + b;
    }else if(o == '-'){
        c = a - b;
    }else if(o == '*'){
        c = a * b;
    }else{
        c = a / b;
    }
    return c;
}
int main(){
    int k1, k2, k3, tmp, answer1, answer2;
    char o1, o2;
    cin>>k1>>o1>>k2>>o2>>k3;
    tmp = cal(k1, k2, o1);
    answer1 = cal(tmp, k3, o2);
    tmp = cal(k2, k3, o2);
    answer2 = cal(k1, tmp, o1);
    if(answer1 > answer2){
        cout<<answer2<<"\n"<<answer1<<"\n";
    }else{
        cout<<answer1<<"\n"<<answer2<<"\n";
    }
}