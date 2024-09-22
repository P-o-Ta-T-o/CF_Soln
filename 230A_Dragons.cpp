#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, n;
    // pair<int, int> a[1000];
    cin >> s >> n;
    vector< pair<int, int> > v;
    int c=1;
    
    for(int i=0;i<n;i++){
        int first, second;
        cin >> first >> second;
        v.push_back({first, second});
        // cin>>a[i].first>>a[i].second;
    }
    sort(v.begin(), v.end());
    // sort(a,a+n);
    for(int i=0;i<n;i++){
        if(s<=v[i].first){
            c=0;
            break;
        }
        else{
            s=s+v[i].second;
        }
    }
    if(c==0) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}