class Solution {
public:
    string removeDuplicates(string s) {
        
        string ans = "";
        int n = s.length();

        for(int i=0; i<n; i++){
            if(ans.empty()){
                ans.push_back(s[i]);
            }
            else if(s[i] == ans.back()){
                ans.pop_back();
            } else if(s[i] != ans.back()){
                ans.push_back(s[i]);
            }
        }

        return ans;
    }
};