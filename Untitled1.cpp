#include "TXlib.h"

//=============================================================================

void DrawCircle (int x, int y);

//=============================================================================

int main()
    {
    txCreateWindow (800, 600);

    DrawCircle (160, 165);
    DrawCircle (250, 310);
    DrawCircle (340, 420);
    }

//{----------------------------------------------------------------------------
//!
//}----------------------------------------------------------------------------

 void DrawCircle (int x, int y)
    {
    txSetColor (TX_LIGHTGREEN, 3);
    txSetFillColor (TX_PINK);
    txCircle (x-10, y-15, 10);
    txCircle (x+10, y-15, 10);
    txCircle (x, y, 10);
    }








     //-----------------------------------------------------------------------------
     //(----------)








//x=160 y=165
