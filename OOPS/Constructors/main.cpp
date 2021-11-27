#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    cout << "Hello you";
    vector<int> vec {3,8,96,7,88,-55};
    sort(vec.begin(),vec.end(),[](int a, int b){return a>b;});
    auto lambda = [](vector<int>& v){for(auto i:v){cout<<i<<" ";}cout<<endl;};
    lambda(vec);
}