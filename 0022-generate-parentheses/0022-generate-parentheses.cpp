class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string s;
        parantheses(0,0,s,result,n);
        return result;
    }
    void parantheses(int oc,int cc, string &s,vector<string> &result,int n)
    {
        if((int)s.size() == n * 2)
        {
            result.push_back(s);
            return;
        }
        if(oc < n)
        {
            s.push_back('(');
            parantheses(oc + 1, cc,s,result,n);
            s.pop_back();
        }
        if(cc < oc)
        {
            s.push_back(')');
            parantheses(oc,cc + 1,s,result,n);
            s.pop_back();
        }

    }
};