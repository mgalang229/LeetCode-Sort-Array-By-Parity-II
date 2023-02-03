class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> evens, odds;
        for (int& x : nums) {
            if (x % 2 == 0) {
                evens.push_back(x);
            } else {
                odds.push_back(x);
            }
        }
        nums.clear();
        int even_index = 0, odd_index = 0;
        for (int i = 0; i < (int) evens.size() + odds.size(); i++) {
            if (i % 2 == 0) {
                nums.push_back(evens[even_index++]);
            } else {
                nums.push_back(odds[odd_index++]);
            }
        }
        return nums;
    }
};
