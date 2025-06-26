class Solution {
public:
    string decodeMessage(string key, string message) {
        
        unordered_map<char,char> map;
        char start = 'a';
        char space = ' ';
        map[space] = space;
        int index = 0;

        while(start <= 'z' && index < key.length()){
            if(map.find(key[index]) != map.end()){
                index ++;
            } else {
                map[key[index]] = start;
                start++;
                index++;
            }
        }

        string ans = "";

        for(int i=0; i<message.length(); i++){
            char msgChar = message[i];
            char mapChar = map[msgChar];
            ans.push_back(mapChar);
        }

        return ans;
    }
};