#include <iostream>
#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        if(s.size()%2!=0)
        {
            return false;
        }

        std::stack<char>st;
        for(auto &c:s)
        {
            if(c=='('||c=='['||c=='{')
            {
                st.push(c);
            }else if(!st.empty()&&(st.top()=='('&&c==')'||st.top()=='['&&c==']'||st.top()=='{'&&c=='}'))
            {
                st.pop();
            }else 
            {
                return false;
            }
        }
        return st.empty()?true:false;
    }
};


int main(int argc,const char*argv[])
{
    std::string s;
    std::cin>>s;
    Solution so;
    bool res=so.isValid(s);
    std::cout<<res<<std::endl<<std::flush;
}