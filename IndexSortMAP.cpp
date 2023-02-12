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
    unordered_map<int, int> m;
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    vector<pair<int,int>> p;
    for(auto i:m){
        p.push_back(i);
    }
    unordered_map<int,int> m1;
    sort(p.begin(), p.end(),                                   
    [&](pair<int, int>& a, pair<int, int>& b) { return a.second < b.second; });

    for (auto& i : p)                          
    {                           
        m1[i.first] = i.second;                   
    }                                

    cout << "After sort." << endl;   
    for (auto& i : m1)     
    cout <<  i.first << " => " << i.second << endl;           
     

   

    return 0;
}