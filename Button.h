#ifndef BUTTON_H_INCLUDED
#define BUTTON_H_INCLUDED
#include <string>
#include <iostream>
#include "GraphicElement.h"
using namespace std;

class Button : public GraphicElement {
private:
    string title;
public:
    Button(string owner, int size1, string title);
    void print() const override;
    void set_title(string button_title);
    string get_title() const;

};

#endif // BUTTON_H_INCLUDED
