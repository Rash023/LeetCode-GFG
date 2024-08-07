class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int> parent;
        vector<string> common;
        for(auto i:words[0]) parent[i]++;
        
        for(int i=1;i<words.size();i++){
            unordered_map<char,int> temp;
            for(int j=0;j<words[i].size();j++) temp[words[i][j]]++;
            
            for(auto it:parent){
               parent[it.first]=min(it.second,temp[it.first]);
                
            }
        }
        for(auto it:parent){
            string temp="";
            temp+=it.first;
            while(it.second--){
                common.push_back(temp);
                
            }
        }
        
        return common;
    }
};