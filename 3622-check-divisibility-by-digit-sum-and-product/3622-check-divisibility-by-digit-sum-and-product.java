class Solution {
    public boolean checkDivisibility(int n) {
        int sum=0;
        int product=1;

        int temp=n;
        while(temp>0){
            int ld= temp % 10;
            sum+=ld;
            product*=ld;
            temp=temp/10;
        }
        int finalsum= sum + product;
        if(n % finalsum==0) {
            return true;
        }
        return false;
    }
}