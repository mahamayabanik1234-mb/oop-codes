#include <iostream>
#include <string>
using namespace std;

class Media {
protected:
    string title;
    string publication;
public:
    virtual void read() {
        cout << "Enter Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter Publication: ";
        getline(cin, publication);
    }
    virtual void show() {
        cout << "Title: " << title << "\nPublication: " << publication << endl;
    }
};

class Book : public Media {
    int pages;
public:
    void read() {
        Media::read();
        cout << "Enter Number of Pages: ";
        cin >> pages;
    }
    void show() {
        Media::show();
        cout << "Pages: " << pages << endl;
    }
};

class Tape : public Media {
    double playingTime;
public:
    void read() {
        Media::read();
        cout << "Enter Playing Time (mins): ";
        cin >> playingTime;
    }
    void show() {
        Media::show();
        cout << "Playing Time: " << playingTime << " mins" << endl;
    }
};

int main() {
    Media* mediaPtr;
    Book b;
    Tape t;
    cout << "--- Enter Book Details ---" << endl;
    mediaPtr = &b;
    mediaPtr->read();
    cout << "\n--- Enter Tape Details ---" << endl;
    mediaPtr = &t;
    mediaPtr->read();
    cout << "\n--- Displaying Inventory Details ---" << endl;
    mediaPtr = &b;
    mediaPtr->show();
    cout << endl;
    mediaPtr = &t;
    mediaPtr->show();
    return 0;
}
