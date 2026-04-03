#include <iostream>
using namespace std;
int main(){
    int A, B, C, tmp = 0, answer = 0;
    cin>>A>>B>>C;
    tmp = (A + B + C) / 3;
    answer += 2 * (tmp - A) + (tmp - B);
    cout<<answer;
    return 0;
}