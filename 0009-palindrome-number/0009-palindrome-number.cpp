class Solution {
public:
    bool isPalindrome(int x) {
        long long i = x;
        long long reverse =0;
        while(i!=0){
            long long r = i%10;
            reverse = reverse*10+r;
            i = i/10;
        }
        if(x<0){
            reverse *= -1;
        }
        if(reverse==x) return true;
        return false;
    }
};