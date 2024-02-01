#include <bits/stdc++.h> //NameSpace
using namespace std;

bool isAnagram(string s1, string s2)
{
    vector <int> alpha(26, 0);
    for(int i = 0; i < s1.length(); i++)
    {
        alpha[s1[i] - 'a']++;
    }

    for(int i = 0; i < s1.length(); i++)
    {
        alpha[s1[i] - 'a']--;
    }

    return false;
}

bool isPalindrome(string str)
{
    stack<char> stk;

    for(int i = 0; i < 5; i++)
    {
        stk.push(str[i]);
    }

    string result;

    for(int i = 0; i < 5; i++)
    {
        result += stk.top();
        stk.pop();
    }

    if(str == result)
    {
        return true;
    }
    else
    {
        return false;
    }
}

map<string, int> BookList()
{
    map <string,int> bookCount;

    ///
    //
    //

    return bookCount;
}

int main()
{
    ///Palindrome Part
    /*string name = "madama";
    if(isPalindrome(name) == true){
        cout << "This is a palindrome" << endl;
    }
    else
        cout << "Not a palindrome" << endl;*/


    ///Anagram Part
    /*
    string str = "fired"; ///defii
    string str2 = "fried"; ///defir

    if(isAnagram(str,str2)){
        cout << "Yes";
    }
    else{
        cout << "No";
    } */

    map<char, int> occurs;


    string str = "aljnaafkjdajksdyfqwkjhfnkajsdhfajwkehflkajsdhflkajwehf"; ///aaaabbbbcccccdddd

    for(int i = 0; i < str.length(); i++)
    {
        occurs[str[i]] = occurs[str[i]] + 1;
    }

    for(auto forhad : occurs)
    {
        cout << forhad.first << " " << forhad.second << endl;
        for(int i = 0; i < forhad.second; i++)
        {
            cout << forhad.first;
        }
        cout << endl;
    }

    return 0;
}

