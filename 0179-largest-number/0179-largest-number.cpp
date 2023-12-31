class Solution {
public:
    static bool mycomp(string a,string b){
        string t1=a+b;
        string t2=b+a;
        return t1>t2;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> snums;
        for(int i=0;i<nums.size();i++){
            snums.push_back(to_string(nums[i]));
        }
        
        sort(snums.begin(),snums.end(),mycomp);
        
        if(snums[0]=="0") return "0";
        string ans="";
        
        for(auto it:snums){
            ans+=it;
        }
        
        return ans;
    }
};