#include "Window.h"


Window::Window(string owner, int size1, string header) : GraphicElement {owner, size1}, header {header} {}

    void Window::print() const {
    cout << "(" << owner << ", " << size1 << ", " << header << ")\n";}

    void Window::set_header(string window_header)
    {
        header = window_header;
    }
    string Window::get_header() const
    {
        return header;
    }

