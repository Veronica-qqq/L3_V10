#ifndef IMAGE_H_INCLUDED
#define IMAGE_H_INCLUDED
#include "GraphicElement.h"
#include <iostream>
using namespace std;

class Image : public GraphicElement {
private:
    int picture;
public:
    Image(string owner, int size1, int picture);
    void print() const override;
    void set_picture(int image_picture);
    int get_picture() const;


};

#endif // IMAGE_H_INCLUDED
