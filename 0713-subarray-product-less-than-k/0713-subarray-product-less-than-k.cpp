class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int n=nums.size();
        int count=0;
        int prod=1;
        
        int j=0,i=0;
        
        while(j<n){
            prod*=nums[j];
            
            while(prod>=k){
                prod/=nums[i++];
                
            }
            
            count+=(j-i+1);
            j++;
            
        }
        
        return count;
        
    }
};