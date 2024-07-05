#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>

using namespace std;

char mat[3][3];

void table(void);   // function to print the table
void welcome(void); // function for the welcome screen

int main()
{
    welcome();
A:
    system("cls");
    int i, j, m, n, sum = 0;
    char ch;

    for (m = 0; m < 3; ++m)
        for (n = 0; n < 3; ++n)
            mat[m][n] = ' ';
    table();

    while (sum < 10)
    {
        // for player 1
        cout << "Player 1 is 'x'\nChoose the position :\n";
        cout << "Row : ";
        cin >> i;
        cout << "Column : ";
        cin >> j;

        // if the position is wrong
        for (; i > 3 || i < 1 || j > 3 || j < 1 || ('x' == mat[i - 1][j - 1] || 'o' == mat[i - 1][j - 1]);)
        {
            cout << "Sorry! Wrong position. Choose the position again:\n";
            cout << "Row : ";
            cin >> i;
            cout << "Column : ";
            cin >> j;
        }
        mat[i - 1][j - 1] = 'x';
        sum++;

        // to check if player 1 wins or not
        if (mat[0][0] == 'x' && mat[0][0] == mat[0][1] && mat[0][0] == mat[0][2])
        {
            table();
            cout << "Player 1 wins!!!\nYou have played Great!!!\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        }

        if (mat[1][0] == 'x' && mat[1][0] == mat[1][1] && mat[1][0] == mat[1][2])
        {
            table();
            cout << "Player 1 wins!!!\nYou have played Great!!!\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        }

        if (mat[2][0] == 'x' && mat[2][0] == mat[2][1] && mat[2][0] == mat[2][2])
        {
            table();
            cout << "Player 1 wins!!!\nYou have played Great!!!\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        }

        if (mat[0][0] == 'x' && mat[0][0] == mat[1][0] && mat[0][0] == mat[2][0])
        {
            table();
            cout << "Player 1 wins!!!\nYou have played Great!!!\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        }

        if (mat[0][1] == 'x' && mat[0][1] == mat[1][1] && mat[0][1] == mat[2][1])
        {
            table();
            cout << "Player 1 wins!!!\nYou have played Great!!!\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        }

        if (mat[0][2] == 'x' && mat[0][2] == mat[1][2] && mat[0][2] == mat[2][2])
        {
            table();
            cout << "Player 1 wins!!!\nYou have played Great!!!\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        }

        if (mat[0][0] == 'x' && mat[0][0] == mat[1][1] && mat[0][0] == mat[2][2])
        {
            table();
            cout << "Player 1 wins!!!\nYou have played Great!!!\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        }

        if (mat[0][2] == 'x' && mat[0][2] == mat[1][1] && mat[0][0] == mat[2][0])
        {
            table();
            cout << "Player 1 wins!!!\nYou have played Great!!!\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        }

        if (sum == 9) // to check the chances
        {
            table();
            cout << "The game is over. No one wins!\n";
            break;
        }
        // for player 2
        cout << "\nPlayer 2 is 'o'\nChoose the position :\n";
        cout << "Row : ";
        cin >> i;
        cout << "Column : ";
        cin >> j;

        // if the position is wrong
        for (; i > 3 || i < 1 || j > 3 || j < 1 || ('x' == mat[i - 1][j - 1] || 'o' == mat[i - 1][j - 1]);)
        {
            cout << "Sorry! Wrong position. Choose the position again:\n";
            cout << "Row : ";
            cin >> i;
            cout << "Column : ";
            cin >> j;
        }
        mat[i - 1][j - 1] = 'o';
        sum++;
        table();

        // to check if player 2 wins or not
        if (mat[0][0] == 'o' && mat[0][0] == mat[0][1] && mat[0][0] == mat[0][2])
        {
            cout << "Player 2 wins!!!\nYou have played Great!!!\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        }

        if (mat[1][0] == 'o' && mat[1][0] == mat[1][1] && mat[1][0] == mat[1][2])
        {
            cout << "Player 2 wins!!!\nYou have played Great!!!\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        }

        if (mat[2][0] == 'o' && mat[2][0] == mat[2][1] && mat[2][0] == mat[2][2])
        {
            cout << "Player 2 wins!!!\nYou have played Great!!!\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        }

        if (mat[0][0] == 'o' && mat[0][0] == mat[1][0] && mat[0][0] == mat[2][0])
        {
            cout << "Player 2 wins!!!\nYou have played Great!!!\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        }

        if (mat[0][1] == 'o' && mat[0][1] == mat[1][1] && mat[0][1] == mat[2][1])
        {
            cout << "Player 2 wins!!!\nYou have played Great!!!\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        }

        if (mat[0][2] == 'o' && mat[0][2] == mat[1][2] && mat[0][2] == mat[2][2])
        {
            cout << "Player 2 wins!!!\nYou have played Great!!!\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        }

        if (mat[0][0] == 'o' && mat[0][0] == mat[1][1] && mat[0][0] == mat[2][2])
        {
            cout << "Player 2 wins!!!\nYou have played Great!!!\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        }

        if (mat[0][2] == 'o' && mat[0][2] == mat[1][1] && mat[0][0] == mat[2][0])
        {
            cout << "Player 2 wins!!!\nYou have played Great!!!\n";
            this_thread::sleep_for(chrono::seconds(5));
            break;
        }
    }
    cout << "\n\nWould you like to play more? (y/n) : ";
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
        goto A;
    else
    {
        cout << "\nThanks for Playing... :)\n";
        this_thread::sleep_for(chrono::seconds(5));
        return 0;
    }
}

void table()
{
    system("cls");
    cout << "\n\n\t 1 | 2 | 3 \n";
    cout << "\t - | - | - \n";
    cout << "\t 4 | 5 | 6 \n";
    cout << "\t - | - | - \n";
    cout << "\t 7 | 8 | 9 \n";
    cout << "\n";
    for (int i = 0; i < 3; ++i)
    {
        cout << "\t";
        for (int j = 0; j < 3; ++j)
        {
            cout << mat[i][j];
            if (j != 2)
                cout << " | ";
        }
        cout << "\n";
        if (i != 2)
            cout << "\t - | - | - \n";
    }
}

void welcome()
{
    system("cls");
    cout << "\n\n\n\tWelcome To\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "\tTic - Tac - Toe\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "\t Game\n";
    this_thread::sleep_for(chrono::seconds(1));
    cout << "\n\n\n\tPress any key to continue...!!";

    cin.get();
}
