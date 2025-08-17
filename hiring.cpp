#include <iostream>
#include <string>
using namespace std;

void hiringProcess() {
    string jobDesc, classification, candidate;
    char choice;

    cout << "Define job description: ";
    getline(cin, jobDesc);

    cout << "Send crew request to HR\n";
    cout << "Is it a regular hiring process? (y/n): ";
    cin >> choice;

    if (choice == 'n') {
        cout << "Special hiring process\n";
        return;
    }

    cout << "Post job internally\n";
    cout << "Is there a suitable candidate? (y/n): ";
    cin >> choice;

    if (choice == 'n') {
        cout << "Review existing resumes on file\n";
        cout << "Is there a suitable candidate? (y/n): ";
        cin >> choice;

        if (choice == 'n') {
            cout << "Develop recruitment plan\n";
            cout << "Place advertisements\n";
            cout << "Collect applications\n";
            cout << "Qualified resume available? (y/n): ";
            cin >> choice;

            if (choice == 'n') {
                cout << "Candidate not hired\n";
                return;
            }
        }
    }

   