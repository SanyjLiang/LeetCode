#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <stack>
#include <vector>

class Solution {
public:
    std::string removeDuplicates(std::string s, int k) {
        std::unordered_map<char,int>m;
        std::vector<char>v;
        for(auto &c:s)
        {
            m[c]++;
            v.push_back(c);
            if(m[c]==k)
            {
                for(int i=0;i<k;i++)
                {
                    v.pop_back();
                    m[c]--;
                }
            }
        }
        std::string ans;
        for(int i=0;i<v.size();i++)
        {
            ans+=v[i];
        }
        return ans;
    }
};


int main(int argc,const char*argv[])
{
    std::string s;
    int k=0;
    std::cin>>s>>k;
    Solution so;
    std::string res;
    res=so.removeDuplicates(s,k);
    std::cout<<res<<std::endl<<std::flush;
}