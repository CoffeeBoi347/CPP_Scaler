#include <iostream>

using namespace std;

int main()
{
    int option;

    cout << "Menu: \n";
    cout << "1. Start new game \n";
    cout << "2. Load saved game \n";
    cout << "3. Exit\n";
    cout << "Choose an option between 1-3.\n";

    cin >> option;

    switch (option){
        case 1:
            cout << "Starting new game...";
            break;
        case 2:
            cout << "Loading saved game...";
            break;
        case 3:
            cout << "Exiting game...";
            break;
        default:
            cout << "Invalid option. Please choose an option between 1 - 3.";
            break;
    }

    return 0;
}