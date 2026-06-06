class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int n = nums.size();
       long long sum = 0;
       for(int i = 0;i<k;i++){
        sum += nums[i];
       } 
       long long mSum = sum;
       for(int i = k;i<nums.size();i++){
        sum += nums[i] - nums[i-k];
        mSum = max(mSum , sum);
       }
       return (double)mSum/k;
    }
};