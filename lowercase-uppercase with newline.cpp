#include <iostream>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')   
        	str[i] = str[i] - 32;
        cout << str[i];
        if (str[i] == ' ')
        {
            cout << "\n";
        }
    }
    return 0;
}