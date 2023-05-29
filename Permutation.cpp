#include<bits/stdc++.h>
using namespace std;

void reperumte(int index, vector<int>& nums, vector<vector<int>>&ans){
    if(index == nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int i = index; i < nums.size(); i++){
        swap(nums[index],nums[i]);
        reperumte(index+1,nums,ans);
        swap(nums[index],nums[i]);
    }
}

vector<vector<int>> perumte(vector<int>&nums){
    vector<vector<int>> ans;
    reperumte(0, nums, ans);
    return ans;
}
int main(){

    vector<int> nums = {1, 2, 3};
    vector<vector<int>> answer = perumte(nums);

    for(int i = 0; i < answer.size(); i++){
        for(int j = 0; j < answer[0].size(); j++){
            cout<<answer[i][j];
        }cout<<endl;
    }
    return 0;
}