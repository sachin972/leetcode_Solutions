class Solution {
public:
    string reverseWords(string s) {
        // s.trim();
        vector<string> res;
        int i=0;
        while(i < s.size()){
            while(i < s.size() && s[i] == ' '){
                i++;
            }
            if(i == s.size()) break;
            string str = "";

            while(i < s.size() && s[i] != ' '){
                str += s[i++];
            }
            res.push_back(str);
            // cout<<str<<endl;
        }
        // reverse(res.begin(),res.end());
        // return res;
        string finalRes = "";
        for(int i=res.size()-1;i>=0;i--){
            finalRes += res[i];
            if(i == 0) break;
            finalRes += " ";
        }
        // if(s[s.size()-1] == ' ') finalRes += " ";
        // if(finalRes[0] == ' ')
        return finalRes;
    }
};