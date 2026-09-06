class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<int> ans(n,-1);
        for(int i =0;i<n;i++){
            int min_start_index = -1;
            for(int j =0;j<n;j++){
                if(intervals[i][1]<=intervals[j][0]){
                    if(min_start_index==-1 || intervals[j][0]<intervals[min_start_index][0])min_start_index = j;
                }
            }
            ans[i]=min_start_index;
        }
        return ans;
    }
};