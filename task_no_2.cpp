#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void registerUser() {
    string username, password;
    cout<<"Enter new username:";
    cin>>username;
    cout<<"Enter new password: ";
    cin>>password;
    ifstream infile("users.txt");
    string fileUser, filePass;
    while(infile >> fileUser >> filePass) {
    if(fileUser == username) {
    cout<< "Username already exists. Try again.\n";
    return;
        }
    }
    infile.close();
    ofstream outfile("users.txt", ios::app);
    outfile << username << " " << password << endl;
    cout << "Registration successful.\n";
}

void loginUser() {
    string username, password;
    cout<<"Enter username: ";
    cin>>username;
    cout<< "Enter password: ";
    cin >> password;

    ifstream infile("users.txt");
    string fileUser, filePass;
    bool found = false;
    while (infile >> fileUser >> filePass) {
        if (fileUser == username && filePass == password) {
            found = true;
            break;
        }
    }
    infile.close();

    if (found)
        cout << "Login successful. Welcome, " << username << "!\n";
    else
        cout<<"Login failed. Invalid credentials.\n";
}

int main() {
    int choice;
    do {
        cout << "\nLogin & Registration System ===\n";
        cout << "1. Register\n2. Login\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) registerUser();
        else if(choice == 2) loginUser();
        else if(choice == 3) cout << "Goodbye!\n";
        else cout<< "Invalid option. Try again.\n";

    } while(choice != 3);

    return 0;
}
