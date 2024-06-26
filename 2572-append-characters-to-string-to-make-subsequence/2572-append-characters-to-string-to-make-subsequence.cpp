class Solution {
public:
    int appendCharacters(string s, string t) {
        int n = s.size();
        int m = t.size();

        // take 2 pointer and check where the j pointer stay in string t
        // then return m-j 
        int i=0;
        int j=0;

        while(i<n && j<m){
            if(s[i]==t[j]){
                i++; j++;
            }
            else i++;
        }

        return m-j;
    }
};