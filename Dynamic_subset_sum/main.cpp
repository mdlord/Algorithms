//
//  main.cpp
//  Dynamic_subset_sum
//
//  Created by Mayank Daswani on 8/4/17.
//  Copyright © 2017 Mayank Daswani. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

        int arr[] = {1,2,3,4,5,6};
        int sum = 15;
        
        int n = sizeof(arr)/sizeof(arr[0]);
        
        int mat[n+1][sum+1];
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<sum; j++)
            {
                mat[i][j] = 0;
            }
        }
        mat[0][arr[0]] = 1;
        
        for(int i = 0; i<= n; i++){
            mat[i][0] = 1;
        }
        
        for(int i = 1; i<n; i++){
            for(int j =1; j<sum; j++){
                
                if(arr[i]>j)
                    mat[i][j] = mat[i-1][j];
                else if(j-arr[i-1] >= 0 )
                    mat[i][j] = mat[i-1][j] + mat[i-1][j-arr[i]];
            }
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<sum; j++)
            {
                if(mat[i][j]>0)
                    cout<<"1";
                else
                    cout<<"0";
            }
            cout<<"\n";
        }
        
        
        return 0;
    }
