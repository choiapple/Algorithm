#include <iostream>
using namespace std;
int main(){
    int h1, m1, s1, h2, m2, s2;
    for(int i=0; i<3; i++){
        int anh, anm, ans;
        cin>>h1>>m1>>s1>>h2>>m2>>s2;
        if(s2 >= s1){
            ans = s2 - s1;
        }else{
            ans = s2 + 60 - s1;
            m2 -= 1;
        }
        if(m2 >= m1){
            anm = m2 - m1;
        }else{
            anm = m2 + 60 - m1;
            h2 -= 1;
        }
        anh = h2 - h1;
        cout<<anh<<" "<<anm<<" "<<ans<<"\n";
    }
}