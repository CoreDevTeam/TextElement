#ifndef TEXTELEMENT_H_INCLUDED
#define TEXTELEMENT_H_INCLUDED

#include <string>

#include "ErrorCode.h"

class TextElement {

private :
    std::string Text;
    unsigned int Height,Width,PosX,PosY;

public :
    TextElement();

    void InitLayer(TextElement Layer);

    //getter
    std::string getTextString();
    int getHeight();
    int getWidth();
    int getPosX();
    int getPosY();
};

#endif // TEXTELEMENT_H_INCLUDED
