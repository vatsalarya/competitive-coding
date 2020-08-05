#include <bits/stdc++.h>
using namespace std;

int main(){
    int T{};
    cin>>T;
    while(T--){
        int N{},k{};
        cin>>N;
        vector <int> nos(N);
        for(int i=0; i<N; i++){
            cin>>nos[i];
            if(nos[i]%2 == 0)
                k = 1;
        }
        if(k==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
