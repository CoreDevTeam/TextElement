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
