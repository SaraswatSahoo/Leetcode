class Solution {
public:
    bool checkIfPangram(string sentence) {
        int hash[26] = {0};
        for(int i=0; i<sentence.length(); i++){
            char c = sentence[i];
            hash[c-'a']++;
        }
        for(int i=0; i<26; i++){
            if(hash[i]==0){
                return false;
            }
        }
        return true;
    }
};