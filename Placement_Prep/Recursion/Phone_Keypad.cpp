class Solution {
private:
    void solver(vector<string> &res, unordered_map<char, string> mp,string &store, string digits,int curr){
        
        if(curr>=digits.length()){
            res.push_back(store);
            return;
        }    
        
        string str;
        char elem = digits[curr];
        str = mp[elem];
        
        for(int i=0;i<str.length();++i){
            store.push_back(str[i]);
            solver(res,mp,store, digits,curr + 1);
            store.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        
        vector<string> res;
            if(digits.length()==0){
                return res;
            }
        string store;
        unordered_map<char, string> mp = {{'0',""},{'1',""},{'2',"abc"},{'3',"def"}, {'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
        
        solver(res,mp,store,digits,0);
        return res;
    }
};
