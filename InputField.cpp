#include "InputField.h"

InputField::InputField(string owner, int size1, string text) : GraphicElement {owner, size1}, text {text} {}

    void InputField::print() const {
    cout << "(" << owner << ", " << size1 << ", " << text << ")\n";}

    void InputField::set_text(string field_text)
    {
        text = field_text;
    }
    string InputField::get_text() const
    {
        return text;
    }
