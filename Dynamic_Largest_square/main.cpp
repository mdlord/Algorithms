//
//  main.cpp
//  Dynamic_Largest_square
//
//  Created by Mayank Daswani on 8/5/17.
//  Copyright © 2017 Mayank Daswani. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {

    int mat[6][6]={ { 1,1,1,0,0,0},
                    { 1,1,1,1,0,0},
                    { 1,1,1,0,1,1},
                    { 1,0,1,1,1,1},
                    { 1,0,1,1,1,1},
                    { 1,1,1,1,1,1}};
    
    int T[6][6];
    
    for(int i = 0; i<6;i++){
        for(int j = 0 ; j<6; j++){
            
            if(i==0 || j==0)
                mat[i][j] = mat[i][j];
            
            else if(mat[i][j]==1)
            {
                //cout<<"--->"<<i<<j<<"--->>>>>"<<mat[i][j-1]<<endl;
                mat[i][j] = min(mat[i][j-1], min(mat[i-1][j], mat[i-1][j-1]))+1;
            }
            else
                mat[i][j] = 0;
            
        }
    }
    int maxsquaresize = 0;
    
    for(int i = 0; i<6;i++){
        for(int j = 0 ; j<6; j++){
            
            if(maxsquaresize<mat[i][j])
                maxsquaresize = mat[i][j];
            cout<<mat[i][j];
            
        }
        cout<<endl;
    }
    
    
    cout<<"\nMax Square Size: "<<maxsquaresize<<endl;
    return 0;
}
