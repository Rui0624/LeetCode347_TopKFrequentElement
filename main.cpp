//
//  main.cpp
//  LeetCode347_TopKFrequentElements
//
//  Created by Rui on 1/13/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int, int> m; //create a hash map to store the reflection between the number in nums and the times it showed
        priority_queue<pair<int, int>> q; // priority_queue store the reflection, which has the number and the number of the number, sort from large to small
        
        for(auto a:nums)
            m[a]++; // store the reflection
        
        for(auto it: m)
            q.push({it.second, it.first}); //push the reflection into the queue
        
        for(int i = 0; i < k; i++)
        {
            res.push_back(q.top().second); // push the top numbers into the res
            q.pop();//pop out the tops
        }
        
        return res;
    }
};
