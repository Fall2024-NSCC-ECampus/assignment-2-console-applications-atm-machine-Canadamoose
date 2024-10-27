#include <iostream>
#include <cstdlib>

using namespace std;

// function prototypes
void printIntroMenu();
void printMainMenu();
void start();
void login();
void createAccount();

// global variable (use this variable to store the user’s menu selection)
char menuInput;

// the main function
int main()
{
    // TO WRITE A WELCOME MESSAGE HERE
    // call the function start
    start();
    return 0;
}

void printIntroMenu()
{
    cout << "l -> Login" << endl;
    cout << "c -> Create New Account" << endl;
    cout << "q -> Quit" << endl;
    cout << "> ";
}

void printMainMenu()
{
    cout << "d -> Deposit Money" << endl;
    cout << "w -> Withdraw Money" << endl;
    cout << "r -> Request Balance" << endl;
    cout << "q -> Quit" << endl;
    cout << "> ";
}

void start() {
    cout << "Please select an option from the menu below:" << endl;
    printIntroMenu();
    while (!(cin >> menuInput) && (menuInput != 'q' || menuInput != 'l' || menuInput != 'c')) {
        cout << "Invalid entry." << endl;
        cin.clear();
        cin.ignore(10000, '\n');
    }
    switch (menuInput) {
        case 'l':
            login();
            break;
        case 'c':
            createAccount();
            break;
        case 'q':
            break;
        default:
            cout << "Invalid input." << endl;
            start();
    }
}

void createAccount()
{
    cout << "Create New Account" << endl;
}

void login()
{
    cout << "Login" << endl;
}
