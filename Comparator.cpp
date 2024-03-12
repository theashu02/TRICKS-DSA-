#include<bits/stdc++.h>
using namespace std;

// # how to write using bool function
bool myComp(pair<int,int> &p1, pair<int,int> &p2){
  return p1.first > p2.first; // sort in decending order according to first element of pair
  // return p1.second > p2.second // sort  according to second ele of pair in decending order
}

// # how to write using functor
class myComp {
    public:
    bool operator()(pair<int,int> p1, pair<int,int> p2){
      return p1.second > p2.second;
    }
};

int main(){
  vector<pair<int,int>> p = {{1,0}, {3,9}, {5,0}, {9,7}};
  # for bool function
  sort(p.begin(), p.end(), myComp);
  
  # using class operator overloading
  sort(p.begin(), p.end(), myComp());

  ### how to write using lamda
  [] ===> capture clause // in this pass, map set and other data structure
  
  auto [](pair<int,int> &a, pair<int,int> &b){
     return a.second > b.second;
  };
  sort(p.begin(), p.end(), myLamda);
  
  return 0;
}
