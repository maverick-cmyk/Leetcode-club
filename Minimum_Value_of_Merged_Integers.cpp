class Solution {
public:
    long long minMergedInteger(vector<int>& nums) {
    long long ans = 1e18;
        for (int i =0; i<nums.size(); i +=2){
            long long x = nums[i];
            long long y = nums[i + 1];

            long long p = 1;
            long long temp = y;

            while (temp > 0){
                p*=10;
                temp/=10;
            }
            long long merged = x*p + y;
            if(merged <ans){
            ans = merged;
        }
        }
    return ans;        
    }
};
