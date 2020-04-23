#include <iostream>
#include <string>
#include "GraphicElement.h"
#include "Window.h"
#include "Button.h"
#include "Image.h"
#include "InputField.h"
using namespace std;

int main()
{
    int var;
    string owner, header, title, text;
    int size1, picture;
    Window ww("OwnerW", 11, "HeaderW");
    Button bn("OwnerB", 3, "TitleB");
    Image ie("OwnerIm", 25, 32);
    InputField id("OwnerInF", 9, "TextInF");
    cout << "Input var:\n";
    cin >> var;
    if (var == 1) {
        cout << "1) Choose:\n 1 - Window\n 2 - Button\n 3 - Button with the image\n 4 - Input field\n";
        cin >> var;
        if (var == 1) {
            ww.print();
            cout << "Window Owner: " << ww.get_owner();
            cout << "\nWindow Size: " << ww.get_size1();
            cout << "\nHeader: " << ww.get_header() << endl;
        }
        if (var == 2) {
            bn.print();
            cout << "Button Owner: " << bn.get_owner();
            cout << "\nButton Size: " << bn.get_size1();
            cout << "\nTitle: " << bn.get_title() << endl;
        }
        if (var == 3) {
            ie.print();
            cout << "Image Owner: " << ie.get_owner();
            cout << "\nImage Size: " << ie.get_size1();
            cout << "\nPicture: " << ie.get_picture() << endl;
        }
        if (var == 4) {
            id.print();
            cout << "InputField Owner: " << id.get_owner();
            cout << "\nInputField Size: " << id.get_size1();
            cout << "\nTitle: " << id.get_text() << endl;
        }
    }
    else {
        cout << "2) Choose:\n 1 - Window\n 2 - Button\n 3 - Button with the image\n 4 - Input field\n";
        cin >> var;
        if (var == 1) {
            cin >> owner >> size1 >> header;
            ww.set_owner(owner);
            ww.set_size1(size1);
            ww.set_header(header);
            ww.print();
            cout << ww.get_owner() << endl;
            cout << ww.get_size1() << endl;
            cout << ww.get_header() << endl;
        }
        if (var == 2) {
            cin >> owner >> size1 >> title;
            bn.set_owner(owner);
            bn.set_size1(size1);
            bn.set_title(title);
            bn.print();
            cout << bn.get_owner() << endl;
            cout << bn.get_size1() << endl;
            cout << bn.get_title() << endl;
        }
        if (var == 3) {
            cin >> owner >> size1 >> picture;
            ie.set_owner(owner);
            ie.set_size1(size1);
            ie.set_picture(picture);
            ie.print();
            cout << ie.get_owner() << endl;
            cout << ie.get_size1() << endl;
            cout << ie.get_picture() << endl;
        }
        if (var == 4) {
            cin >> owner >> size1 >> text;
            id.set_owner(owner);
            id.set_size1(size1);
            id.set_text(text);
            id.print();
            cout << id.get_owner() << endl;
            cout << id.get_size1() << endl;
            cout << id.get_text() << endl;
        }
    }
    return 0;
}
