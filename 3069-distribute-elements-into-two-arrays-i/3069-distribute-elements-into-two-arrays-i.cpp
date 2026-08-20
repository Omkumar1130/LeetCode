class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> darr = {nums[0]};
        vector<int> barr = {nums[1]};

        for (int i = 2; i < nums.size(); i++) {
            if (darr.back() > barr.back())
                darr.push_back(nums[i]);
            else
                barr.push_back(nums[i]);
        }

        darr.insert(darr.end(), barr.begin(), barr.end());
        return darr;
    }
};