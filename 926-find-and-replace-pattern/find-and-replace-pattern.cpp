class Solution {
public:

    void normalise(string &str){

        char start = 'a';
        unordered_map<char,char> mapping;

        for(int i=0; i<str.length(); i++){
            char stringKaCharacter = str[i];
            if(mapping.find(stringKaCharacter) == mapping.end()){
                mapping[stringKaCharacter] = start;
                start++;
            }
        }

        for(int i=0; i<str.length(); i++){
            char mappedCharacter = mapping[str[i]];
            str[i] = mappedCharacter;
        }

    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string> ans;
        normalise(pattern);

        for(int i=0; i<words.size(); i++){
            string currWord = words[i];
            string currWordCopy = currWord;
            normalise(currWordCopy);
            if(currWordCopy == pattern){
                ans.push_back(currWord);
            }
        }

        return ans;
    }
};