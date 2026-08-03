class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
           vector<vector<string>>ans;
            if(strs.size()==1){
                ans.push_back({strs});
                return ans;
            } 
            unordered_map<string,vector<string>>m;
            for(int i=0;i<strs.size();i++){
                string temp=strs[i];
                sort(temp.begin(),temp.end());
                if(m.count(temp)){
                    m[temp].push_back(strs[i]);    //to check if any key of anangram exits 
                }
                else{
                    m[temp].push_back(strs[i]);    //if not create a new key
                }
            }
            for(auto x : m){
                ans.push_back(x.second);
            }
        return ans;   
        }
    };