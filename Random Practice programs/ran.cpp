#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> nums(n*5);
  for(int i=0; i<nums.size(); i++){
    cin>>nums[i];
  }
  sort(nums.begin(),nums.end());
  nums.erase(nums.begin());
  nums.erase(nums.end()-1);
  int total=0;
  int step = 0;
  for(int i=0; i<nums.size(); i++){
    total += nums[i];
    step++;
  }
  float final;
  final = float(total)/step;
  cout<<final;
  
  return 0;
}