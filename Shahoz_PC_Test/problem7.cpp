#include <bits/stdc++.h>
using namespace std;

int precedence(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 0;
    }
    else if (ch == '*' || ch == '/')
    {
        return 1;
    }
}

bool isDigit(char ch)
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

int operation(int a, int b, char ch)
{
    switch (ch)
    {
    case '+':
        return a + b;
        break;
    case '-':
        return a - b;
        break;
    case '*':
        return a * b;
        break;
    case '/':
        return a / b;
        break;
    default:
        break;
    }
}

int main()
{
    string exp = "12*10-(20+5)/5";
    //geline(cin,exp);

    stack<int> values;
    stack<char> symbol;

    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == ' ')
        {
            continue;
        }
        else if (exp[i] == '(')
        {
            symbol.push(exp[i]);
        }
        else if (isDigit(exp[i]))
        {
            int val = 0;
            while (i < exp.length() && isDigit(exp[i])) //i < exp.length() check for last nubmer
            {
                val = val * 10 + (exp[i] - '0');
                i++;
            }
            i--;
//            cout<<"val:"<<val<<endl;
            values.push(val);
        }
        else if (exp[i] == ')')
        {
            while (!symbol.empty() && exp[i] != '(')
            {
                int val1 = values.top();
                values.pop();
                int val2 = values.top();
                values.pop();
                char ops = symbol.top();
                symbol.pop();
                values.push(operation(val1, val2, ops));
            }
            if (!symbol.empty())
            {
                symbol.pop();
            }
        }

        else
        {
            while (!symbol.empty() && precedence(symbol.top())>=precedence(exp[i]))
            {
                int val1 = values.top();
                values.pop();
                int val2 = values.top();
                values.pop();
                char ops = symbol.top();
                symbol.pop();
                values.push(operation(val2, val1, ops));
            }
            symbol.push(exp[i]);
        }
    }

    while(!symbol.empty())
    {
        int val1 = values.top();
        values.pop();
        int val2 = values.top();
        values.pop();
        char ops = symbol.top();
        symbol.pop();
        values.push(operation(val1, val2, ops));
    }


    cout<<values.top()<<endl;

    return 0;
}
