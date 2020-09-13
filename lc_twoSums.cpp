#include <iostream>
#include <vector>
using namespace std;

// Time: O(n^2), Space: O(1)
vector<int> twoNumberSum(vector<int>& array, int targetSum) {
  vector<int> ans;
    
    for (unsigned int i = 0; i < array.size(); i++) 
        for (int& j : array) 
            if ((array[i] + j) == targetSum && array[i] != j) 
                ans.push_back(array[i]);
  
    return ans;
}
int main(){
    vector<int> twoNumberSum(vector<int>& array, int targetSum);
    return 0;
}