#include <algorithm>
#include <stack>
#include <string>
#include <iostream>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char>st;
        for(auto &c:s)
        {
            if(!st.empty())
            {
                if(st.top()=='a'&&c=='b')
                {
                    st.pop();
                }else if(st.top()=='b'&&c=='c')
                {
                    st.pop();
                }
            }else {
                st.push(c);
            }
           /
        }
        if(st.top()=='c')
        {
            return true;
        }else return false;
    }
};

int main(int argc,const char*argv[])
{
    std::string s;
    std::cin>>s;
    Solution so;
    bool res=so.isValid(s);
    std::cout<<res<<std::endl<<std::flush;
    return 0;
}