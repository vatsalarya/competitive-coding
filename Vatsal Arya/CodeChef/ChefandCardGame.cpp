#include <bits/stdc++.h>
using namespace std;

int FindPoint(unsigned long long a){
    int point_a{};
    while(a>0){
        point_a += a%10;
        a = a/10;
    }
    return point_a;
}

int main(){
    int T{};
    cin>>T;
    while(T--){
        unsigned long long N{}, p{},q{}, point_p{}, point_q{};
        point_p = 0;
        point_q = 0;
        cin>>N;
        while(N--){
            cin>>p>>q;
            p = FindPoint(p);
            q = FindPoint(q);
            if(p > q) point_p++;
            else if(p < q) point_q++;
            else{
                point_q++;
                point_p++;
            }
        }
        if(point_p > point_q) cout<<"0 "<<point_p<<endl;
        else if(point_p < point_q) cout<<"1 "<<point_q<<endl;
        else cout<<"2 "<<point_p<<endl;
    }
}