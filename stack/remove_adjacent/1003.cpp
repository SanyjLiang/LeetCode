#include <algorithm>
#include <stack>
#include <string>
#include <iostream>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;
        for(auto &c:s)
        {
            if(c=='b'&&(!st.empty()&&st.top()!='a'||st.empty()))
            {
                return false;
            }else if(c=='c'&&(st.empty()||!st.empty()&&st.top()!='b'))
            {
                return false;
            }
            st.push(c);
            if(c=='c')
            {
                st.pop();
                st.pop();
                st.pop();
            }
        }
        return st.empty();
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