//Program tests if two c-strings are equal regardless of whitespace,
//punctutation, and case-sensitive characters.
#include <iostream>
#include <cctype>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

void input(char s1[], char s2[]);
//Reads in a string into c-string s.

void stripSpacesAndPunct(char s[]);
//Removes all spaces and punctuations from c-string s.

void convertToLowerCase(char s[]);
//Converts all uppercase letters to lowercase letters.

bool isEqual(char s1[], char s2[]);
//Precondition: Both s1 and s2 are non-empty.
//Postcondition: Returns true if both c-strins are equal regardless of
//whitespace, punctuation, and case-sensitive characters.

const int MAX = 60;

int main()
{
    char s1[MAX], s2[MAX];
    input(s1, s2);

    if (isEqual(s1, s2))
        cout<<"The two strings are equal.\n";
    else
        cout<<"The strings are not equal\n";

    return 0;
}

void input(char s1[], char s2[])
{
    cout<<"Enter two sentences, each on their own line.\n\n";
    cin.getline(s1, MAX);
    cin.getline(s2, MAX);
    cout<<endl;
}

void stripSpacesAndPunct(char s[])
{
    for (int i = strlen(s) - 1; i > 0; i--)
    {
        if (!isalnum(s[i]))
        {
            for (int j = i; j <= strlen(s); j++)
                s[j] = s[j + 1];
        }
    }
}

void convertToLowerCase(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (isupper(s[i]))
            s[i] = tolower(s[i]);
    }
}

bool isEqual(char s1[], char s2[])
{
    char copy1[strlen(s1)], copy2[strlen(s2)]; 
    strcpy(copy1, s1);
    strcpy(copy2, s2);

    stripSpacesAndPunct(copy1);
    stripSpacesAndPunct(copy2);
    convertToLowerCase(copy1);
    convertToLowerCase(copy2);

    return !strcmp(copy1, copy2);
}
