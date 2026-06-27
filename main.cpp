#include "TextEditor.h"

int main() {
    string file;
    int choice;

    cout << "Enter filename: ";
    cin >> file;

    TextEditor editor(file);

    do {
        cout << "\n===== TEXT EDITOR MENU =====\n";
        cout << "1. Create File\n";
        cout << "2. Write File\n";
        cout << "3. Append File\n";
        cout << "4. View File\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                editor.createFile();
                break;

            case 2:
                editor.writeFile();
                break;

            case 3:
                editor.appendFile();
                break;

            case 4:
                editor.viewFile();
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
