class Solution {
public:
    void generateStr(int n, int i, string temp, int &count, int k, string &result) {
        if (i == n) {
            count++; 
            if (count == k) result = temp; 
            return;
        }  

        for (char ch : {'a', 'b', 'c'}) {
            if (temp.empty() || temp.back() != ch) {
                generateStr(n, i + 1, temp + ch, count, k, result);
                if (!result.empty()) return; 
            }
        }
    }

    string getHappyString(int n, int k) {
        string result = "";
        int count = 0;
        generateStr(n, 0, "", count, k, result);
        return result;
    }
};
