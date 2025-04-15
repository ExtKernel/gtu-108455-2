#include <iostream>
#include <fstream>
using namespace std;

class Note {
    string text;
public:
    Note(const string& t) : text(t) {}
    void SaveToFile() {
        ofstream file("notes.txt", ios::app);
        file << text << endl;
    }
};

int main() {
    Note n1("First message");
    Note n2("Second message");
    Note n3("Third message");
    n1.SaveToFile();
    n2.SaveToFile();
    n3.SaveToFile();
}

