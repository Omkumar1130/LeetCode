class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size()-1;
        int l =0, mid =0, r =n, pos =-1;
        if(target<letters[0]) return letters[0];
        while(l<=r){
            mid = l + (r-l)/2;
            if(letters[mid]>target){
                pos = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        if(pos==-1)return letters[0];
        return letters[pos];
    }
};