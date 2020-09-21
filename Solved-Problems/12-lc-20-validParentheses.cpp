// https://leetcode.com/problems/valid-parentheses/

//21 Sept, 2020
//Sri Subhash Pathuri
class Solution {
    public:
        bool isValid(string s){
            if(s.length%2==0){
                return false;
            }
            stack<char> bracks;
            for(int i=0;i<s.length();i++){
                if(!brackets.empty()){
                    if(brackets.top()=='('&&s[i]==')')
                        brackets.pop();
                    else if(brackets.top()=='['&&s[i]==']')
                        brackets.pop();
                    else if(brackets.top()=='{'&&s[i]=='}')
                        brackets.pop();
                }
                else bracks.push(s[i]);
                
            }

            return bracks.empty();
        }