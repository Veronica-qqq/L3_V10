#ifndef GRAPHICELEMENT_H_INCLUDED
#define GRAPHICELEMENT_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class GraphicElement {
protected:
    string owner;
    int size1;
public:
    GraphicElement();
    GraphicElement(const GraphicElement &g);
    GraphicElement (string t_owner, int t_size1);
    virtual void set_owner(string graph_owner);
    virtual string get_owner() const;
    virtual void set_size1(int graph_size1);
    virtual int get_size1() const;
    GraphicElement& operator= (const string &a);
    GraphicElement& operator= (const int &b);
    virtual void print() const = 0;
};


#endif // GRAPHICELEMENT_H_INCLUDED
