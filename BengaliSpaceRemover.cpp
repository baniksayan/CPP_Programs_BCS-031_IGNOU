#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to remove left and right spaces from a string
string removeLeftRightSpaces(const string &inputText)
{
    string cleanedText = "";
    string paragraph = "";
    bool isNewParagraph = true;

    for (char c : inputText)
    {
        if (c == '\n')
        {
            if (!isNewParagraph)
            {
                cleanedText += paragraph;
                cleanedText += "\n";
            }
            paragraph = "";
            isNewParagraph = true;
        }
        else if (!isspace(c))
        {
            paragraph += c;
            isNewParagraph = false;
        }
    }

    // Add the last paragraph if not empty
    if (!isNewParagraph)
    {
        cleanedText += paragraph;
    }

    return cleanedText;
}

int main()
{
    string inputText;
    cout << "Enter Bengali text with extra spaces (press Ctrl+D to end input):" << endl;

    // Read input text
    string line;
    while (getline(cin, line))
    {
        inputText += line + "\n";
    }

    // Remove left and right spaces
    string cleanedText = removeLeftRightSpaces(inputText);

    // Output the result
    cout << "Result:" << endl;
    cout << cleanedText << endl;

    return 0;
}
