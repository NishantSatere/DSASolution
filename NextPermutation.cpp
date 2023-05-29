#include<bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int>&nums){
    int index = -1;
    int n = nums.size();
    for(int i = n-2; i >= 0; i--){
        if(nums[i] < nums[i+1]){
            index = i;
            break;
        }
    }
    if(index == -1){
        reverse(nums.begin(),nums.end());
        return nums;
    }

    for(int i = n-1; i > index; i--){
        if(nums[i] > nums[index]){
            swap(nums[i], nums[index]);
            break;
        }
    }

    reverse(nums.begin() + index+1, nums.end());
    return nums;
}
int main(){
    vector<int> nums = {2 , 3 , 5 , 4 , 1 , 0 , 0};
    nextPermutation(nums);
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i];
    }
    return 0;
}