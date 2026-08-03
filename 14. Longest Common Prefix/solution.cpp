class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            string pref="";
            sort(strs.begin(),strs.end());
            string firstwrd=strs[0];
            string lastwrd=strs[strs.size()-1];
            for(int i=0;i<firstwrd.length();i++){               
                if(firstwrd[i]!=lastwrd[i]){                    //comparison of first and last word
                    break;
                }
                pref.push_back(firstwrd[i]);                   //if same then add to answer
            }
        return pref;    
        }
    };