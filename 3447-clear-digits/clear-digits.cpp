class Solution {
public:
    string clearDigits(string s) {
        for(int i = 1 ;i < s.length() ; i++){
            if(s[i] >= '0' && s[i] <= '9'){
                s.erase(s.begin() +(i-1) , s.begin() + i+1) ;
                i -= 2;
            }
        }

        return s;

    }
};