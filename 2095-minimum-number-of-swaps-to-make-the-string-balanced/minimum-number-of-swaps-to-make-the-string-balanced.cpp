class Solution {
public:
    int minSwaps(string s) {
        int track = 0 ;     
        int opencnt = 0 ; 
        int maxi = INT_MIN ; 
        for(int i =0 ; i < s.length() ; i++ ){
            if(s[i] == ']') opencnt++ ;
            else { opencnt-- ;}
            maxi = max(maxi , opencnt );
        }   

        if(maxi % 2 != 0 ) {
            maxi++;
        }
        return maxi / 2 ; 
    }
};