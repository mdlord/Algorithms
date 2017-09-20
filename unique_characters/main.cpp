//
//  main.cpp
//  unique_characters
//
//  Created by Mayank Daswani on 9/20/17.
//  Copyright © 2017 Mayank Daswani. All rights reserved.
//

#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

//using hash table
// time  = O(n)
// space = O(n)
bool unq_hash(string s){
    
    map<char,int> mp;
    for(int i = 0; i<s.size(); i++){
        mp[s[i]]++;
    }

    map<char,int>::iterator it;
    for(it = mp.begin(); it!= mp.end(); it++){
        if(it->second>1)
            return false;
    }
    return true;
}

//using sorted string
//Time  = O(logn)
//space = O(1)
bool unq_sort(string s){
    
    sort(s.begin(), s.end());
    char curr = s[0];
    
    for(int i  = 1 ; i <s.size(); i++){
        if(curr == s[i])
            return false;
        else{
            curr = s[i];
            //next = s[i];
        }
    }
    return true;
}

// Brute Force
//Time = O(n^2)
//Space = O(1)
bool unq_brute(string s){
    for(int i = 0 ; i < s.size(); i++)
    {
        for(int j = i+1 ; j < s.size(); j++){
            if(s[i] == s[j])
                return false;
        }
    }
    return true;
}

int main(int argc, const char * argv[]) {
    
    string s = "abccba";
    
    //change functions here
    if(unq_brute(s))
        cout<<"all unique characters"<<endl;
    else
        cout<<"repeated characters found"<<endl;
    return 0;
}

