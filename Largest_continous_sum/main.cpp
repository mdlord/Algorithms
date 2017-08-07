//
//  main.cpp
//  Largest_continous_sum
//  Kadane's Algorithm
//
//  Created by Mayank Daswani on 8/6/17.
//  Copyright © 2017 Mayank Daswani. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
   
    
    int arr[10] = {-2, -3, 4, -1, -2, 1, 5, -3};
    
    int max = INT_MIN;
    int max_sofar = 0;
    
    int start = 0;
    int end = 0;
    int s =0;
    
    for(int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
        
        max_sofar = max_sofar + arr[i];
        
        if(max_sofar < 0 ){
            max_sofar = 0;
            s = i+1;
        }
        else if(max < max_sofar){
        
            max = max_sofar;
            start = s;
            end = i;
            
        }
    
    }
    cout<<"start = "<<start<<endl;
    cout<<"end = "<<end<<endl;
    cout<<max<<endl;
    return 0;
}
