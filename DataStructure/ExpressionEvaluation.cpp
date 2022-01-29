#include <bits/stdc++.h>
using namespace std;

bool isOperand(char ch)
{
    if (ch >= '0' && ch <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
    {
        return true;
    }
    else
    {
        return false;
    }
}

// check operator precedence
int Precedence(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '^')
    {
        return 3;
    }
    else
    {
        return -1;
    }
}

string infix2Postfix(string str)
{
    string postfix = "";
    stack<char> stk;
    stk.push('(');
    str = str + ')';
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            continue;
        }
        else if (isOperand(str[i]))
        {
            string val = "";
            while (isOperand(str[i]) && i < str.length())
            {
                cout << "val " << str[i] << endl;
                val = val + str[i];
                i++;
            }
            i--;
            postfix = postfix + val + ',';
            cout << "postfix:" << postfix << endl;
        }
        else if (str[i] == '(')
        {
            cout << __LINE__ << endl;
            stk.push(str[i]);
        }
        else if (str[i] == ')')
        {
            while (stk.top() != '(' && !stk.empty())
            {
                postfix = postfix + stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else if(isOperator(str[i]))
        {
            char op1 = str[i];
            char op2 = stk.top(); /// here is wrong
            while ((Precedence(op1) < Precedence(op2)) && !stk.empty())
            {
                op2 = stk.top();
                postfix = postfix + op2;
                stk.pop();
            }
            stk.push(op1);
        }
    }
    return postfix;
}

string infix2Prefix(string s)
{
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            s[i] = ')';
        }
        else if (s[i] == ')')
        {
            s[i] = '(';
        }
    }
    return s;
}

int main()
{
    string infix;
//    infix = "(( 10 * (20 + 40)/50) - 60 * (70 + 80 / 90))";
    infix = "(( 1 * (2 + 4)/5) - 6 * (7 + 8 / 9))";
    // cin>>s;
    string postfixExp = infix2Postfix(infix); // convert infix to postfix expression
//    string prefixExp = infix2Prefix(infix);
//    prefixExp=infix2Postfix(prefixExp);
    cout << "Infix: " << infix << endl;
    cout << "Postfix: " << postfixExp << endl;
//    cout<<"Prefix: "<<prefixExp<<endl;

    return 0;
}
