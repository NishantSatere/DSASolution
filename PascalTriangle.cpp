// Program to generate Pascal’s Triangle
// Problem Statement: This problem has 3 variations. They are stated below:

// Variation 1: Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.
// Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.
// Variation 3: Given the number of rows n. Print the first n rows of Pascal’s triangle.

#include<bits/stdc++.h>
using namespace std;

// Variation 1 solution
// Pass values n-1 and r-1
int findNcR(int n, int r){
    long long result = 1;
    for(int i = 0; i < r; i++){
        result = result * (n-i);
        result = result / (i+1);
    }
    return result;
}

// Variation 2 solution
vector<int> nthRow(int n){

    vector<int> answer = {1};
    long long ans = 1;
    for(int i = 1; i < n; i++){
        ans = ans * (n - i)/(i);
        answer.push_back(ans);
    }
    return answer;
} 

// Variation 3 solution
vector<vector<int>> pascalTriangle(int n){
    vector<vector<int>> ans;

    for(int i = 1; i <= n; i++){
        ans.push_back(nthRow(i));
    }
    return ans;
}

int main(){
    // cout<<findNcR(4,2);
    // nthRow(5);
    

}
