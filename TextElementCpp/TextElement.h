#ifndef TEXTELEMENT_H_INCLUDED
#define TEXTELEMENT_H_INCLUDED

#include <string>

class TextElement {

private :
    std::string Text;
    int Height,Width,PosX,PosY;

public :
    TextElement();

    void InitLayer(TextElement Layer);
};

#endif // TEXTELEMENT_H_INCLUDED
