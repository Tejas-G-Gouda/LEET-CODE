class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
        int n=s.size()-1;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' '){
                n--;
            }
            else{
                break;
            }
        }
        for(int i=n;i>=0;i--){
        
            if(s[i]==' '){
                return len;
            }
            len++;
        }
        return len;
    }
};