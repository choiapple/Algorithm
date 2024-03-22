#include <iostream>
using namespace std;
int main(){
    int ch, cm, cs, nh, nm, ns;
    int ah, am, as;
    char tmp;
    cin>>ch>>tmp>>cm>>tmp>>cs;
    cin>>nh>>tmp>>nm>>tmp>>ns;
    if(ns < cs){
        nm -= 1;
        as = 60 - cs + ns;
    }else{
        as = ns - cs;
    }
    if(nm < cm){
        nh -= 1;
        am = 60 - cm + nm;
    }else{
        am = nm - cm;
    }
    if(nh < ch){
        ah = 24 - ch + nh;
    }else{
        ah = nh - ch;
    }
    if(ah == 0 && am == 0 && as == 0){
        cout<<"24:00:00"<<"\n";
        return 0;
    }
    if(ah/10 > 0) cout<<ah<<":";
    else cout<<0<<ah<<":";
    if(am/10 > 0) cout<<am<<":";
    else cout<<0<<am<<":";
    if(as/10 > 0) cout<<as;
    else cout<<0<<as;
}