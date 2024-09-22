#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> n >> m;

    vector<int> pieces;
    for(int i=0; i<m; i++){
        int x;
        cin >> x;
        pieces.push_back(x);
    }

    sort(pieces.begin(), pieces.end());

    int left=0;
    int right=n-1;
    int ans = pieces[right] - pieces[left];
    while(right < m-1){
        left++;
        right++;
        ans = min(ans, pieces[right]-pieces[left]);
    }

    cout << ans << endl;

    return 0;
}
