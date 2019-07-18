#include "TXlib.h"

int main()
    {
    txCreateWindow (800, 600);

    txSetColor (TX_LIGHTGREEN);
    txSetFillColor (TX_PINK);

    txCircle (350, 220, 30);

    txLine (450, 430, 140, 60);
    txLine (340, 220, 135, 50);
    txSelectFont ("Symbol", 500);
    txTextOut (100, 100, "\xA9");
    }
