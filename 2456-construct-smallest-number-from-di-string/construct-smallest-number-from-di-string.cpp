class Solution {
public:
    string smallestNumber(string pattern) {
        string res = "" ; 
        stack<int> s ; 
        int n = pattern.length() ;
        for(int i = 1 ; i <= n+1 ; i++ )
        {
            s.push(i);
            if(i == n+1 || pattern[i-1] == 'I'){
                while(!s.empty()){
                    res.push_back(char('0'+s.top()));
                    s.pop();
                }
            }
        }

        return res;
    }
};