#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <stack>
#include <vector>

class Solution {
public:
    std::string removeDuplicates(std::string s, int k) {
        std::vector<std::pair<char,int>>st;
        for(auto &c:s)
        {
            if(!st.empty()&&st.back().first==c)
            {
                st.back().second++;
                if(st.back().second==k)
                {
                    st.pop_back();
                }
            }else {
                st.emplace_back(c,1);
            }
        }

        std::string ans;
        for(auto &p:st)
        {
            //追加相同的p.second个字符p.first到字符串ans后面
            ans.append(p.second,p.first);
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