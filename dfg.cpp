#include "TXlib.h"

int main()
    {
    txCreateWindow (600, 600);

    txLine (176, 451, 176, 291);
    txLine (177, 351, 213, 375);
    txLine (177, 351, 139, 381);
    txLine (178, 452, 137, 505);
    txLine (178, 452, 216, 505);
    txCircle (178, 252, 40);


    txSelectFont ("Symbol", 300);
    txTextOut (250, 150, "\xA9");


    txLine (478, 450, 478, 292);
    txLine (478, 377, 542, 333);
    txLine (478, 377, 424, 333);
    txLine (478, 450, 436, 503);
    txLine (478, 450, 505, 503);
    txCircle (479, 250, 42);


    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txCircle (353, 102, 60);
    }
