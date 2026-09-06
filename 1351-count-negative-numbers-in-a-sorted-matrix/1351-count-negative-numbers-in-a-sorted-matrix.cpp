class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size() , neg_num =0;
        for(int i =0;i<m;i++){
            int l =0 , r = n-1, pos =n ;// means no negative no. 
            int mid =0;
            while(l<=r){
                mid = l + (r-l)/2;
                if(grid[i][mid] < 0){                   
                    pos = mid;
                    r = mid-1;
                }
                else{
                    l= mid+1;
                }
            }
            neg_num += n - pos;
        }
        return neg_num;
    }
};