#include <iostream>
#include <string>
using namespace std;

int main()
{
    string thing = "racecar";
    string name = "raulluar";
    string name2 = "raulyarmemmedov";

    bool isPalindrome1 = true;
    int length1 = thing.length();
    int length2 = name.length();
    int length3 = name2.length();

    for (int i = 0; i < length1 / 2; i++)
    {
        if (thing[i] != thing[length1 - 1 - i])
        {
            isPalindrome1 = false;
            break;
        }
    }

    bool isPalindrome2 = true;
    for (int i = 0; i < length2 / 2; i++)
    {
        if (name[i] != name[length2 - 1 - i])
        {
            isPalindrome2 = false;
            break;
        }
    }

    bool isPalindrome3 = true;
    for (int i = 0; i < length3 / 2; i++)
    {
        if (name2[i] != name2[length3 - 1 - i])
        {
            isPalindrome3 = false;
            break;
        }
    }

    cout << "thing is palindrome? " << (isPalindrome1 ? "YES" : "NO") << endl;
    cout << "name is palindrome? " << (isPalindrome2 ? "YES" : "NO") << endl;
    cout << "name2 is palindrome? " << (isPalindrome3 ? "YES" : "NO") << endl;

    return 0;
}
