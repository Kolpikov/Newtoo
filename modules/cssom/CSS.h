#pragma once

#include "../dom/DOMString.h"

namespace Newtoo
{

    const char EscapeChar[] = " ";

    class CSSUnitValue;

    class CSS
    {
    public:

        static DOMString escape(DOMString ident);

        // Из стандарта CSS Typed OM

        CSSUnitValue number(double value);
        CSSUnitValue percent(double value);

        CSSUnitValue em(double value);
        CSSUnitValue ex(double value);
        CSSUnitValue ch(double value);
        CSSUnitValue ic(double value);
        CSSUnitValue rem(double value);
        CSSUnitValue lh(double value);
        CSSUnitValue rlh(double value);
        CSSUnitValue vw(double value);
        CSSUnitValue vh(double value);
        CSSUnitValue vi(double value);
        CSSUnitValue vb(double value);
        CSSUnitValue vmin(double value);
        CSSUnitValue vmax(double value);
        CSSUnitValue cm(double value);
        CSSUnitValue mm(double value);
        CSSUnitValue Q(double value);
        CSSUnitValue in(double value);
        CSSUnitValue pt(double value);
        CSSUnitValue pc(double value);
        CSSUnitValue px(double value);

        CSSUnitValue deg(double value);
        CSSUnitValue grad(double value);
        CSSUnitValue rad(double value);
        CSSUnitValue turn(double value);

        CSSUnitValue s(double value);
        CSSUnitValue ms(double value);

        CSSUnitValue Hz(double value);
        CSSUnitValue kHz(double value);

        CSSUnitValue dpi(double value);
        CSSUnitValue dpcm(double value);
        CSSUnitValue dppx(double value);

        CSSUnitValue fr(double value);
    };

}
