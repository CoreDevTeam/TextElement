#include "TextElement.h"

TextElement::TextElement()
{
}

void TextElement::InitLayer(TextElement Layer)
{
    std::string Text_source;
    int Height_source,Width_source,PosX_source,PosY_source;

    TextElement::Height = Height_source;
    TextElement::PosX   = PosX_source;
    TextElement::PosY   = PosY_source;
    TextElement::Text   = Text_source;
    TextElement::Width  = Width_source;
}
std::string TextElement::getTextString()
{
    if ( TextElement::Text.empty() ) {
        return ErrorStringNotSet;
    } else {

        return TextElement::Text;
    }
}
int TextElement::getHeight()
{
    if ( TextElement::Height < 0 ) {
        return -1;
    } else {

        return TextElement::Height;
    }
}
int TextElement::getWidth()
{
    if ( TextElement::Width < 0 ) {
        return -1;
    } else {

        return TextElement::Width;
    }
}
int TextElement::getPosX()
{
    if ( TextElement::PosX < 0 ) {
        return -1;
    } else {

        return TextElement::PosX;
    }
}
int TextElement::getPosY()
{
    if ( TextElement::PosY < 0 ) {
        return -1;
    } else {

        return TextElement::PosY;
    }
}
