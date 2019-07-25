#include "TXlib.h"

int main()
    {
    txCreateWindow (1914, 936);

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


    txSetColor (TX_PINK, 5);
    txSetFillColor (TX_PINK);
    txRectangle (689, 309, 817, 371);
    txCircle (669, 278, 40);
    txLine (820, 344, 878, 281);
    txLine (687, 370, 656, 428);
    txLine (818, 370, 856, 428);
    POINT tri[3] = {{617, 251}, {642, 251}, {630, 227}};
    txPolygon (tri, 3);
    POINT tre[3] = {{685, 249}, {703, 224}, {720, 248}};
    txPolygon (tre, 3);
    txSetColor (TX_BLACK, 2);
    txSetFillColor (TX_BLACK);
    txLine (667, 294, 652, 283);
    txLine (667, 294, 680, 283);
    txCircle (657, 269, 10);
    txCircle (678, 269, 10);


    txSetColor (TX_BROWN);
    txSetFillColor (TX_BROWN);
    txRectangle (1111, 222, 1144, 399);
    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txCircle (1085, 242, 30);
    txCircle (1165, 242, 30);
    txCircle (1183, 198, 30);
    txCircle (1139, 198, 30);
    txCircle (1087, 198, 30);
    txCircle (1108, 153, 30);
    txCircle (1171, 153, 30);
    txCircle (1143, 114, 30);


    txSetColor (TX_PINK, 3);
    txSetFillColor (TX_PINK);
    txRectangle (1563, 359, 1413, 211);
    txLine (1413, 211, 1481, 38);
    txLine (1563, 208, 1481, 38);
    txSetFillColor (TX_BLACK);
    txCircle (1491, 288, 30);
    txLine (1491, 258, 1491, 316);
    txLine (1465, 288, 1523, 288);

    txSetColor (TX_LIGHTGREEN);
    txSetFillColor (TX_LIGHTGREEN);
    txCircle (1384, 583, 60);
    txSetColor (TX_BLACK, 3);
    txLine (1402, 560, 1432, 560);
    txLine (1347, 560, 1380, 560);
    txLine (1361, 595, 1389, 621);
    txLine (1389, 621, 1415, 595);
    txSetColor (TX_LIGHTGREEN);
    txSetFillColor (TX_LIGHTGREEN);
    txCircle (1290, 555, 40);
    txCircle (1478, 555, 40);

    txSetColor (TX_RED);
    txSetFillColor (TX_RED);
    txCircle (819, 539, 45);
    txSetColor (TX_GREEN);
    txLine (819, 577, 820, 728);
    txLine (820, 677, 877, 625);
    txLine (820, 654, 777, 599);
    txLine (820, 626, 872, 577);
    }
