class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int n = chars.size();
        int res = 0;
        while(i < n){
            char ch = chars[i];
            int count = 0;
            while(i < n && ch == chars[i]){
                count += 1;
                i += 1;
            }
            chars[res++] = ch;
        if(count > 1){
            string cnt = to_string(count);
            for(char c : cnt){
                chars[res++] = c;
            }
        }
        }
        return res;
    }
};