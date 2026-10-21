class Solution {
public:
    bool isSorted(string s){
        for(int i=1;i<s.length();i++){
            if(s[i]-s[i-1]<0) return false;
        }
        return true;
    }

    int minOperations(string s) {
        if(isSorted(s)) return 0;
        if(s.length()<=2) return -1;
        string temp=s;
        sort(temp.begin(),temp.end()-1);
        if(isSorted(temp)) return 1;
        temp=s;
        sort(temp.begin()+1,temp.end());
        if(isSorted(temp)) return 1;
        temp=s;
        sort(temp.begin()+1,temp.end());
        sort(temp.begin(),temp.end()-1);
        if(isSorted(temp)) return 2;
        temp=s;
        sort(temp.begin(),temp.end()-1);
        sort(temp.begin()+1,temp.end());
        if(isSorted(temp)) return 2;
        return 3;
    }
};