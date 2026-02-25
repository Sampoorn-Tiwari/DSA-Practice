class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> roin;
        roin['I']=1;
        roin['V']=5;
        roin['X']=10;
        roin['L']=50;
        roin['C']=100;
        roin['D']=500;
        roin['M']=1000;
        int num=0;
        
        for(int i=0;i<s.size();i++){
        if(roin[s[i]]<roin[s[i+1]])
        num-=roin[s[i]];
        if(roin[s[i]]>=roin[s[i+1]])
        num+=roin[s[i]];
        }
        return num;
    }
};