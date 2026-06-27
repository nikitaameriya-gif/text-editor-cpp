#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class TextEditor {
private:
    string filename;

public:
    TextEditor(string file);

    void createFile();
    void writeFile();
    void appendFile();
    void viewFile();
};

#endif
