#ifndef INPUTFIELD_H_INCLUDED
#define INPUTFIELD_H_INCLUDED
#include "GraphicElement.h"
#include <iostream>
#include <string>
using namespace std;

class InputField : public GraphicElement {
private:
    string text;
public:
    InputField(string owner, int size1, string text);
    void print() const override;
    void set_text(string field_text);
    string get_text() const;

};

#endif // INPUTFIELD_H_INCLUDED
