#include <bits/stdc++.h>
using namespace std;
int main() {
    int n , s = 0;
    cin>>n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
        s += v[i];
    }
    float avg = (float)s/n;
    cout<<avg;
    return 0;
}
