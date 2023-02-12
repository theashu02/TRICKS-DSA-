#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k; cin>>k;
    unordered_map<int, int> m;
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    vector<pair<int,int>> p;
    for(auto it:m){
        p.push_back(it);
    }
    sort(p.rbegin(), p.rend(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) {
    return left.second < right.second;
});
    vector<int> v1;
    for(auto i:p){
        cout<<i.first<<" "<<i.second<<endl;
        v1.push_back(i.first);
    }
    vector<int> v3;
    for(int i=0;i<k;i++){
        v3.push_back(v1[i]);
    }
    for(auto i:v3){
        cout<<i<<" ";
    }
    return 0;
}