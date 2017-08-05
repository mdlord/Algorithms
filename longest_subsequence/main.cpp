//
//  main.cpp
//  longest_subsequence
//
//  Created by Mayank Daswani on 8/5/17.
//  Copyright © 2017 Mayank Daswani. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string s1 = "abcdefghij";
    string s2 = "adeghi";
    
    map<char,int> mp;
    
    for(int i = 0; i<s1.size(); i++){
        mp[s1[i]]++;
    }
    
    for(int i = 0; i<s2.size(); i++){
        mp[s2[i]]--;
    }
    
    map<char,int>::iterator it;
    
    for(it = mp.begin(); it != mp.end(); it++){
        cout<<it->first<<it->second<<endl;
    }
    
    
    
    
    return 0;
}
