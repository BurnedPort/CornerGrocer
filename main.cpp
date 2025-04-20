#include "CornerGrocer.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    CornerGrocer grocer("CS210_Project_Three_Input_File.txt");
    grocer.SaveFrequenciesToFile("frequency.dat");

    int choice;
    string item;

    do {
        cout << "\n1. Find frequency of specific item\n";
        cout << "2. Display all items with frequencies\n";
        cout << "3. Display histogram\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter item name: ";
            cin >> item;
            cout << item << " was purchased "
                << grocer.GetItemFrequency(item) << " time(s)." << endl;
            break;
        case 2:
            grocer.PrintAllFrequencies();
            break;
        case 3:
            grocer.PrintHistogram();
            break;
        case 4:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter 1–4.\n";
        }
    } while (choice != 4);

    return 0;
}
