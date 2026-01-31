#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int s1, s2, e1, e2, p1, p2;
    cin>>s1>>s2;
    cin>>e1>>e2;
    cin>>p1>>p2;
    if(s1 != e1 && s2 != e2) cout<<1<<"\n";
    else if(s1 == e1){
        if(p1 != s1) cout<<0<<"\n";
        else if((s2 <= p2 && p2 <= e2) || (s2 >= p2 && p2 >= e2)) cout<<2<<"\n";
        else cout<<0<<"\n";
    }else{
        if(p2 != s2) cout<<0<<"\n";
        else if((s1 <= p1 && p1 <= e1) || (s1 >= p1 && p1 >= e1)) cout<<2<<"\n";
        else cout<<0<<"\n";
    }
    return 0;
}