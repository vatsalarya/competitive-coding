#include <bits/stdc++.h>
using namespace std;

int main(){
    long long T{};
    cin>>T;
    while(T--){
        long long N{},ans{};
        ans = 0;
        cin>>N;
        vector <long long> strings(N);
        for(long long i=0; i<N; i++)
            cin>>strings[i];
        for(long long i=0; i<N-1; i++){
            ans += abs(strings[i+1] - strings[i]) - 1;
        }
        cout<<ans<<endl;
    }
}
