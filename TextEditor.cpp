#include "TextEditor.h"

TextEditor::TextEditor(string file) {
    filename = file;
}

// Create file
void TextEditor::createFile() {
    ofstream file(filename);

    if (file.is_open()) {
        cout << "File created successfully.\n";
    } else {
        cout << "Error creating file.\n";
    }

    file.close();
}

// Write (overwrite)
void TextEditor::writeFile() {
    ofstream file(filename);

    cout << "Enter text (type END on new line to finish):\n";
    string line;

    cin.ignore();

    while (true) {
        getline(cin, line);
        if (line == "END") break;
        file << line << endl;
    }

    file.close();
    cout << "File saved successfully.\n";
}

// Append
void TextEditor::appendFile() {
    ofstream file(filename, ios::app);

    cout << "Enter text to append (type END to stop):\n";
    string line;

    cin.ignore();

    while (true) {
        getline(cin, line);
        if (line == "END") break;
        file << line << endl;
    }

    file.close();
    cout << "Text appended successfully.\n";
}

// View file
void TextEditor::viewFile() {
    ifstream file(filename);
    string line;

    cout << "\n----- File Content -----\n";

    if (!file.is_open()) {
        cout << "File not found.\n";
        return;
    }

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}
