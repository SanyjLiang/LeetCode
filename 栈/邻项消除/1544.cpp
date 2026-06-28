#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

class Solution {
public:
    std::string makeGood(std::string s) {
        std::stack<char>st;
        std::string ans;
        for(auto &c:s)
        {
            if(!st.empty()&&(st.top()+32==c||st.top()-32==c))
            {
                st.pop();
            }else{
                st.push(c);
            }
        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

int main(int argc,const char*argv[])
{
    std::string s;
    std::cin>>s;
    Solution so;
    std::string res=so.makeGood(s);
    std::cout<<res<<std::endl<<std::flush;
    std::cout<<"hello"<<std::endl<<std::flush;
    return 0;
}