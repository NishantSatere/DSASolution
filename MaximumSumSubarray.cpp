#include<bits/stdc++.h>
using namespace std;

int MaximumSubarraySum(vector<int>&array){
    int sum = 0;
    int maxi = INT_MIN;

    for(int i = 0; i < array.size(); i++){
        sum = sum + array[i];
        maxi = max(sum, maxi);
        if(sum < 0){
            sum = 0;
        }
    }

    return maxi;

}

int main(){
    vector<int> array = {1,-2,-3};
    cout<<MaximumSubarraySum(array);
    return 0;
}