class Solution {
private:
    bool isPalindrome(string &s, int start , int end){
        while(start<end){
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

public:
    string longestPalindrome(string s) {
        int n = s.size();
        int start_index = 0;
        int max_length = 0;
        for(int i = 0;i<n;i++){
            for(int j = i;j<=n;j++){
                if(isPalindrome(s,i,j)){
                    if(j-i+1 > max_length){
                        max_length = j - i + 1;
                        start_index = i;
                    }
                }
            }
        }
        return s.substr(start_index,max_length);  
    }
};
