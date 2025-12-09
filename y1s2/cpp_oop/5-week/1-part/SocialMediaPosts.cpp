#include <iostream>
using namespace std;

class Post {
public:
    virtual void display() {
        cout << "This is a general post." << endl;
    }
};

class ImagePost : public Post {
public:
    void display() override {
        cout << "This is an image post." << endl;
    }
};

class TextPost : public Post {
public:
    void display() override {
        cout << "This is a text post." << endl;
    }
};

class VideoPost : public Post {
public:
    void display() override {
        cout << "This is a video post." << endl;
    }
};

int main() {
    ImagePost img;
    TextPost txt;
    VideoPost vid;

    img.display();
    txt.display();
    vid.display();

    return 0;
}

