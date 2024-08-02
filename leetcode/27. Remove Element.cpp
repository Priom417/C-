#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int pos = 0;
        for(auto it = nums.begin(); it != nums.end(); ++it){
            if(val == *it) continue;
            nums[pos++] = *it;
        }
        return pos;
    }
};

int main()
{

    Solution sol;

    vector<int>n1 = {0,1,2,2,3,0,4,2};

    int k = sol.removeElement(n1, 2);

    cout << "K = " << k << endl;
    for(auto it = n1.begin(); it != n1.end(); ++it){
        cout << *it << endl;
    }
}