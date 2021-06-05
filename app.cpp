#include <windows.h>
#include <iostream>

using namespace std;

string progressBar(int time) {
    float mili = (float)time / float(25);
    mili = mili * 1000;
    string bar = "";
    int counter = 0;
    cout << "\n";
    for(int i = 1; i <= 25; i++) {
        bar += "=";
        for(int j = 1; j <= 4; j++) {
            counter++;
            cout << "\r" << counter << "% [";
            Sleep(mili / 4);
        }
        cout << bar;
    }
    cout << ">]";
}

string slowTyper(string text) {
    cout << "\n";
    for(int i = 0; i <= text.length(); i++) {
        cout << text[i];
        Sleep(200);
    }
}

int main() {
    system("color 9B");
    progressBar(5);
    slowTyper("Hello Mimu");
    return 0;
}
