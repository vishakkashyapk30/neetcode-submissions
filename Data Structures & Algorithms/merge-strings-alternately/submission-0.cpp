class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();

        int l1=0, l2=0;
        string result="";
        while(l1 < n1 && l2<n2)
        {
            result+=word1[l1++];
            result+=word2[l2++];
        }

        if(n2 > n1)
            result+=word2.substr(l2);
        
        else
            result+=word1.substr(l1);

        return result;
    }
};