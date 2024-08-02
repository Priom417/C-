#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, k = 1;

        while(!(i == -1 and j == -1)){
            int pos = n + m - k;

            if(i == -1) {
                nums1[pos] = nums2[j];
                j--;
                k++;
                continue;
            }

            if(j == -1) {
                nums1[pos] = nums1[i];
                i--;
                k++;
                continue;
            }

            if(nums1[i] >= nums2[j]){
                nums1[pos] = nums1[i];
                i--;
            } else{
                nums1[pos] = nums2[j];
                j--;
            }

            k++;
        }
    }
};

int main()
{

    Solution sol;

    vector<int>n1 = {0};
    vector<int>n2 = {1};

    sol.merge(n1, 0, n2, 1);

    for(auto it = n1.begin(); it != n1.end(); ++it){
        cout << *it << endl;
    }
}