#include "Image.h"


Image::Image(string owner, int size1, int picture) : GraphicElement {owner, size1}, picture {picture} {}

    void Image::print() const {
    cout << "(" << owner << ", " << size1 << ", " << picture << ")\n";}

    void Image::set_picture(int image_picture)
    {
        picture = image_picture;
    }
    int Image::get_picture() const
    {
        return picture;
    }

