class Solution {
public:

    bool isVowel(char c){
        
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            return true;
        }

        return false;
    }

    string reverseVowels(string s) {
        
        int l = 0;
        int h = s.size()-1;

        while(l<=h){

            if(isVowel(s[l]) && isVowel(s[h])){
                swap(s[l], s[h]);
                l++; h--;
            } else if(!isVowel(s[l])){
                l++;
            } else {
                h--;
            }

        }

        return s;
    }
};