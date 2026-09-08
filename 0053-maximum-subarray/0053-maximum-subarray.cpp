class Solution {
public:
    int solve(vector<int> &nums, int l , int r){
        if(l==r) return nums[l];
        int mid = l + (r-l)/2;
        int left_s = solve(nums,l,mid);
        int right_s = solve(nums,mid +1, r);

        int left_sum = INT_MIN;
        int sum =0;
        for(int i =mid;i>=l;i--){
            sum += nums[i];
            left_sum = max(sum, left_sum);
        }

        int right_sum = INT_MIN;
        sum =0;
        for(int i =mid+1;i<=r;i++){
            sum += nums[i];
            right_sum = max(sum, right_sum);
        }

        int both_s_sum = left_sum + right_sum;
        return max({left_s,right_s,both_s_sum});
    }
    int maxSubArray(vector<int>& nums) {
        return solve(nums,0,nums.size()-1);
    }
};