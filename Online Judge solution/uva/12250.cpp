#include <bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("input.txt","r",stdin);
    string language;
    int _case = 0;
    while (cin >> language)
    {
        if (language == "#")
        {
            break;
        }
        cout << "Case " << ++_case << ": ";
l        if (language == "HELLO")
        {
            cout << "ENGLISH" << endl;
        }
        else if (language == "HOLA")
        {
            cout << "SPANISH" << endl;
        }
        else if (language == "HALLO")
        {
            cout << "GERMAN" << endl;
        }
        else if (language == "BONJOUR")
        {
            cout << "FRENCH" << endl;
        }
        else if (language == "CIAO")
        {
            cout << "ITALIAN" << endl;
        }
        else if (language == "ZDRAVSTVUJTE")
        {
            cout << "RUSSIAN" << endl;
        }
        else
        {
            cout << "UNKNOWN" << endl;
        }
    }
    return 0;
}
