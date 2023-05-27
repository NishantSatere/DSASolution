#include<bits/stdc++.h>
using namespace std;


//BRUTE FORCE
void setMinusone(vector<vector<int>>& matrix){

    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j  < matrix.size(); j++){
            if(matrix[i][j] == 0){
                int p = 0;
                for(p = 0; p < matrix.size(); p++){
                    if(matrix[p][j] != 0){
                        matrix[p][j] = -1;
                    }
                }
                

                int q = 0;
                for(q = 0; q < matrix.size(); q++){
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
        for(int j = 0; j < matrix.size(); j++){
            if(matrix[i][j] == -1){
                matrix[i][j] = 0;
            }
        }
    }
}

//BETTER SOLUTION

int main(){


    vector<vector<int>>matrix{
        {1 , 2 , 3},
        {4 , 0 , 6},
        {7 , 0 , 9}
    };

    // setMinusone(matrix);
    // setZero(matrix);
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix.size(); j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }

    
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix.size(); j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }



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