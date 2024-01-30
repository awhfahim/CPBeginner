#include <bits/stdc++.h> //NameSpace
using namespace std;

bool isAnagram(string str1, string str2)
{
    //Write your code here
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

int main()
{
    ///Palindrome Part
    string name = "madama";
    if(isPalindrome(name) == true){
        cout << "This is a palindrome" << endl;
    }
    else
        cout << "Not a palindrome" << endl;


    ///Anagram Part
    string str = "fired";
    string str2 = "fried";

    if(isAnagram(str,str2)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}

