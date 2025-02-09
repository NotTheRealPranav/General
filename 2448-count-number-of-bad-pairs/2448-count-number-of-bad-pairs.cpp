class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n = nums.size();
        long long total_pairs = (long long)n * (n-1)/2;
        long long good_pairs = 0;
        unordered_map<int,int> freq;
        for(int i = 0; i<n;i++){
            int diff = nums[i]-i;
            if(freq.find(diff) != freq.end()){
                good_pairs += freq[diff];
            }
            freq[diff]++;
        }
        return total_pairs - good_pairs;
    }
};