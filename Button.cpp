#include "Button.h"


Button::Button(string owner, int size1, string title) : GraphicElement {owner, size1}, title {title} {}

    void Button::print() const {
    cout << "(" << owner << ", " << size1 << ", " << title << ")\n";}

    void Button::set_title(string button_title)
    {
        title = button_title;
    }
    string Button::get_title() const
    {
        return title;
    }

