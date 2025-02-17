class Solution {
public:
    int build(vector<int>& hash){
        int w = 0 ; 
        for(int i = 0 ;i < 26 ;i++){
            if(hash[i] > 0 ){
                hash[i]--;
                w += 1 + build(hash);
                hash[i]++;
            }
        }

        return w ; 
    }

    int numTilePossibilities(string tiles) {
        vector<int> hash(26,0);
        for(int i = 0 ; i < tiles.length() ; i++){
            hash[tiles[i] - 'A']++;
        }

        return build(hash);
    }
};