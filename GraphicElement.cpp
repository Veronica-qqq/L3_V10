#include "GraphicElement.h"


GraphicElement::GraphicElement() : owner("none"), size1(0) {}
GraphicElement::GraphicElement(const GraphicElement &g)
    {
        owner = g.owner;
        size1 = g.size1;
    }
GraphicElement::GraphicElement(string t_owner, int t_size1)
    {
        owner = t_owner;
        if (t_size1 > 0) {
        size1 = t_size1; }
    }
void GraphicElement::set_owner(string graph_owner)
    {
        owner = graph_owner;
    }
string GraphicElement::get_owner() const
    {
        return owner;
    }
void GraphicElement::set_size1(int graph_size1)
    {
        if (graph_size1 > 0) {
        size1 = graph_size1;
    }
int GraphicElement::get_size1() const
    {
        return size1;
    }
GraphicElement& GraphicElement::operator=(const string &a) {
    owner = a.substr(0, a.find(' '));
    return *this;
}

GraphicElement& GraphicElement::operator= (const int &b) {
    size1 = b;
    return *this;
}
