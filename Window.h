#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED
#include "GraphicElement.h"
#include <iostream>
#include <string>
using namespace std;

class Window : public GraphicElement {
private:
    string header;
public:
    Window(string owner, int size1, string header);
    void print() const override;
    void set_header(string window_header);
    string get_header() const;


};

#endif // WINDOW_H_INCLUDED
