// Set Matrix Zero
// Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

#include<bits/stdc++.h>
using namespace std;


//BRUTE FORCE SOLUTION
void setMinusone(vector<vector<int>>& matrix){

    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j  < matrix[0].size(); j++){
            if(matrix[i][j] == 0){
                int p = 0;
                for(p = 0; p < matrix.size(); p++){
                    if(matrix[p][j] != 0){
                        matrix[p][j] = -1;
                    }
                }
                

                int q = 0;
                for(q = 0; q < matrix[0].size(); q++){
                    if(matrix[i][q] != 0){
                        matrix[i][q] = -1;
                    }
                }
                
            }
        }
    }

}
void setZero(vector<vector<int>>& matrix){
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            if(matrix[i][j] == -1){
                matrix[i][j] = 0;
            }
        }
    }
}

//BETTER SOLUTION
vector<vector<int>> setZeroMatrix(vector<vector<int>>&matrix){
    int m = matrix.size();
    int n = matrix[0].size();

    int row[m] = {0};
    int col[n] = {0};

    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            if(matrix[i][j] == 0){
                row[i] = 1;
                col[j] = 1; 
            }
        }
    }

    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            if(row[i] == 1 || col[j] == 1){
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

//OPTIMAL SOLUTION
vector<vector<int>> OptimalSolution(vector<vector<int>>& matrix){
    int col = 1;

    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                if(j != 0){
                    matrix[0][j] = 0;
                }else{
                    col = 1;
                }
            }
        }
    }

    for(int i = 1; i <matrix.size(); i++){
        for(int j = 1; j < matrix[0].size(); j++){
            if(matrix[i][j] != 0){
                if(matrix[0][j] == 0 || matrix[i][0] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }

    if(matrix[0][0] == 0){
        for(int j = 0; j < matrix[0].size(); j++){
            matrix[0][j] = 0;
        }
    }

    if(col == 0){
        for(int i = 0; i < matrix.size(); i++){
            matrix[i][0] = 0;
        }
    }

    return matrix;
}

int main(){


    vector<vector<int>>matrix{
        {1 , 2 , 3},
        {4 , 0 , 6},
        {7 , 0 , 9}
    };

    // setMinusone(matrix);
    // setZero(matrix);

    // setZeroMatrix(matrix);

    OptimalSolution(matrix);
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }

    
    // for(int i = 0; i < matrix.size(); i++){
    //     for(int j = 0; j < matrix.size(); j++){
    //         cout<<matrix[i][j]<<" ";
    //     }cout<<endl;
    // }



    // for(int i = 0; i < matrix.size(); i++){
    //     for(int j = 0; j < matrix.size(); j++){
    //         if(matrix[i][j] == 0){
    //             matrix[i][j] = -1;
    //         }
    //     }
    // }

    // for(int i = 0; i < matrix.size(); i++){
    //     for(int j = 0; j < matrix.size(); j++){
    //         if(matrix[i][j] == -1){
    //             matrix[i][j] = 0;

    //             for(int p = 0; p < matrix.size(); p++){
    //                 if(matrix[p][j] != -1){
    //                     matrix[p][j] = 0;
    //                 }
    //             }

    //             for(int q = 0; q < matrix.size(); q++){
    //                 if(matrix[i][q] != -1){
    //                     matrix[i][q] = 0;
    //                 }
    //             }

    //         }
    //     }
    // }

    


    return 0;
}