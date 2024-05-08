#include <iostream>
#include <vector>
#include <cmath>
#define ENDL '\n'
#define lli long long
#define pb push_back
#define ff first
#define ss second
#define fore(i,a,b) for(int i=a;i<b;i++)
#define all(s) begin(s), end(s)
#define sz(s) int(s.size())
#define IO std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0)
int solve(){
    int x, y, z, a;
    std::cin >> x;
    y = (x%10)-1;
    y *= 10;
    z = log10(x)+1;
    a = (z*(z+1))/2;
    y += a;
    std::cout << y << std::endl;
    return 0;
}

int main(){
    // freopen("file.in","r",stdin);
    // freopen("file.out","w",stdout);
    IO;
    //int t; cin>>t; while(t--)
    int c;
    std::cin >> c;
    for(int i = 0; i < c; i++) {
    solve();
    }
    return 0;
}