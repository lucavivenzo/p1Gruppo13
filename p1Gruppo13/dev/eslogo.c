/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap Converter (ST) for emWin V5.44.                      *
*        Compiled Nov 10 2017, 08:52:20                              *
*                                                                    *
*        (c) 1998 - 2017 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: eslogo                                                *
* Dimensions:  150 * 64                                              *
* NumColors:   2                                                     *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmeslogo;

#if 0


/*********************************************************************
*
*  This palette is included for reference only
*  As it is saved as device dependent bitmap without color info.
*  Please note that this bitmap requires the physical palette to be
*  identical to the palette of the display.
*  If this does not work out, please convert your bitmap into a DIB 
*/
/*********************************************************************
*
*       Palette
*
*  Description
*    The following are the entries of the palette table.
*    The entries are stored as a 32-bit values of which 24 bits are
*    actually used according to the following bit mask: 0xBBGGRR
*
*    The lower   8 bits represent the Red   component.
*    The middle  8 bits represent the Green component.
*    The highest 8 bits represent the Blue  component.
*/
static GUI_CONST_STORAGE GUI_COLOR _Colorseslogo[] = {
#if (GUI_USE_ARGB == 0)
  0x000000, 0xFFFFFF
#else
  0xFF000000, 0xFFFFFFFF
#endif

};

#endif

static GUI_CONST_STORAGE GUI_LOGPALETTE _Paleslogo = {
  2,  // Number of entries
  0,  // No transparency
  NULL
};

static GUI_CONST_STORAGE unsigned char _aceslogo[] = {
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, _______X, XXXXXXX_, _____XXX, XXXXX___, ________, ________, ________, ________, ________, _XXXXXXX, XXXXXXXX, XXXX____, ________, ___XXXXX, XXX_____, ________, ________, ________,
  ________, _______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXXX, XXXXXXXX, XXXXXX__, ______XX, XXXXXXXX, XXXXXXXX, XXXXXXX_, ________, ___XXXXX, XXX_____, ________, ________, ________,
  ________, _______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXXX, XXXXXXXX, XXXXXX__, ______XX, XXXXXXXX, XXXXXXXX, XXXXXXX_, ________, ___XXXXX, XXX_____, ________, ________, ________,
  ________, _______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXXX, XXXXXXXX, XXXXXX__, _____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________, ___XXXXX, XXX_____, ________, ________, ________,
  ________, _______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXXX, XXXXXXXX, XXXXXX__, _____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________, ___XXXXX, XXX_____, ________, ________, ________,
  ________, _______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXXX, XXXXXXXX, XXXXXX__, _____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________, ___XXXXX, XXX_____, ________, ________, ________,
  ________, _______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXXX, XXXXXXXX, XXXXXX__, _____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________, ___XXXXX, XXX_____, ________, ________, ________,
  ________, _______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXXX__, _______X, XXXXXXXX, ________, ___XXXXX, XXX_____, ________, ________, ________,
  ________, _______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ___XXXXX, XXX_____, ________, ________, ________,
  ________, ________, ________, ________, ________, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ________, ________, ________, ________, ________,
  _XXXXXXX, X______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ___XXXXX, XXX_____, ________, ________, ________,
  _XXXXXXX, X______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ___XXXXX, XXX_____, ________, ________, ________,
  _XXXXXXX, X______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ___XXXXX, XXX_____, ________, ________, ________,
  _XXXXXXX, X______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ___XXXXX, XXX_____, ________, ________, ________,
  _XXXXXXX, X______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ___XXXXX, XXX_____, ________, ________, ________,
  _XXXXXXX, X______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ___XXXXX, XXX_____, ________, ________, ________,
  _XXXXXXX, X______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXXX__, ________, ________, ________, ___XXXXX, XXX_____, ________, ________, ________,
  _XXXXXXX, X______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXXXX_, ________, ________, ________, ___XXXXX, XXX_____, ________, ________, ________,
  _XXXXXXX, X______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXXXXX, ________, ________, ________, ___XXXXX, XXX_____, ________, ________, ________,
  ________, ________, ________, ________, ________, _______X, XXXXXXX_, ________, ________, ______XX, XXXXXXXX, X_______, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, _______X, XXXXXXX_, ________, ________, _______X, XXXXXXXX, XX______, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, _______X, XXXXXXX_, ________, ________, ________, XXXXXXXX, XXX_____, ________, ________, ________, ________, ________, ________, ________,
  ________, _______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, ________, _XXXXXXX, XXXX____, ________, ________, ___XXXXX, XXX_____, _XXXXXXX, X_______, ________,
  ________, _______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXXX, XXXXXXXX, XXXX____, ________, __XXXXXX, XXXXX___, ________, ________, ___XXXXX, XXX_____, _XXXXXXX, X_______, ________,
  ________, _______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXXX, XXXXXXXX, XXXX____, ________, ___XXXXX, XXXXXX__, ________, ________, ___XXXXX, XXX_____, _XXXXXXX, X_______, ________,
  ________, _______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXXX, XXXXXXXX, XXXX____, ________, ____XXXX, XXXXXXX_, ________, ________, ___XXXXX, XXX_____, _XXXXXXX, X_______, ________,
  ________, _______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXXX, XXXXXXXX, XXXX____, ________, _____XXX, XXXXXXXX, ________, ________, ___XXXXX, XXX_____, _XXXXXXX, X_______, ________,
  ________, _______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXXX, XXXXXXXX, XXXX____, ________, ______XX, XXXXXXXX, X_______, ________, ___XXXXX, XXX_____, _XXXXXXX, X_______, ________,
  ________, _______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXXX, XXXXXXXX, XXXX____, ________, _______X, XXXXXXXX, XX______, ________, ___XXXXX, XXX_____, _XXXXXXX, X_______, ________,
  ________, _______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXXX, XXXXXXXX, XXXX____, ________, ________, XXXXXXXX, XXX_____, ________, ___XXXXX, XXX_____, _XXXXXXX, X_______, ________,
  ________, _______X, XXXXXXX_, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, ________, ________, _XXXXXXX, XXXX____, ________, ___XXXXX, XXX_____, _XXXXXXX, X_______, ________,
  ________, ________, ________, ________, ________, _______X, XXXXXXX_, ________, ________, ________, ________, __XXXXXX, XXXXX___, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, _______X, XXXXXXX_, ________, ________, ________, ________, ___XXXXX, XXXXXX__, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, _______X, XXXXXXX_, ________, ________, ________, ________, ____XXXX, XXXXXXX_, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, ________, ________, _____XXX, XXXXXXXX, ________, ___XXXXX, XXX_____, _XXXXXXX, X_____XX, XXXXXX__,
  ________, ________, ________, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, ________, ________, ______XX, XXXXXXXX, ________, ___XXXXX, XXX_____, _XXXXXXX, X_____XX, XXXXXX__,
  ________, ________, ________, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, ________, ________, _______X, XXXXXXXX, ________, ___XXXXX, XXX_____, _XXXXXXX, X_____XX, XXXXXX__,
  ________, ________, ________, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ___XXXXX, XXX_____, _XXXXXXX, X_____XX, XXXXXX__,
  ________, ________, ________, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ___XXXXX, XXX_____, _XXXXXXX, X_____XX, XXXXXX__,
  ________, ________, ________, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ___XXXXX, XXX_____, _XXXXXXX, X_____XX, XXXXXX__,
  ________, ________, ________, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ___XXXXX, XXX_____, _XXXXXXX, X_____XX, XXXXXX__,
  ________, ________, ________, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ___XXXXX, XXX_____, _XXXXXXX, X_____XX, XXXXXX__,
  ________, ________, ________, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ___XXXXX, XXX_____, _XXXXXXX, X_____XX, XXXXXX__,
  ________, ________, ________, ________, ________, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ___XXXXX, XXX_____, _XXXXXXX, X_______, ________,
  ________, ________, ________, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXX___, ________, XXXXXXXX, ________, ___XXXXX, XXX_____, _XXXXXXX, X_______, ________,
  ________, ________, ________, _____XXX, XXXXX___, _______X, XXXXXXX_, ________, ________, _____XXX, XXXXXX__, ________, XXXXXXXX, ________, ___XXXXX, XXX_____, _XXXXXXX, X_______, ________,
  ________, ________, ________, _____XXX, XXXXX___, _______X, XXXXXXXX, XXXXXXXX, XXXXXX__, _____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________, ___XXXXX, XXX_____, _XXXXXXX, X_______, ________,
  ________, ________, ________, _____XXX, XXXXX___, _______X, XXXXXXXX, XXXXXXXX, XXXXXX__, _____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________, ___XXXXX, XXX_____, _XXXXXXX, X_______, ________,
  ________, ________, ________, _____XXX, XXXXX___, _______X, XXXXXXXX, XXXXXXXX, XXXXXX__, _____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________, ___XXXXX, XXX_____, _XXXXXXX, X_______, ________,
  ________, ________, ________, _____XXX, XXXXX___, _______X, XXXXXXXX, XXXXXXXX, XXXXXX__, _____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________, ___XXXXX, XXX_____, _XXXXXXX, X_______, ________,
  ________, ________, ________, _____XXX, XXXXX___, _______X, XXXXXXXX, XXXXXXXX, XXXXXX__, ______XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ________, ___XXXXX, XXX_____, _XXXXXXX, X_______, ________,
  ________, ________, ________, _____XXX, XXXXX___, _______X, XXXXXXXX, XXXXXXXX, XXXXXX__, ______XX, XXXXXXXX, XXXXXXXX, XXXXXXX_, ________, ___XXXXX, XXX_____, _XXXXXXX, X_______, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, XXXXXXXX, XXXXXXXX, XXXXX___, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________
};

GUI_CONST_STORAGE GUI_BITMAP bmeslogo = {
  150, // xSize
  64, // ySize
  19, // BytesPerLine
  1, // BitsPerPixel
  _aceslogo,  // Pointer to picture data (indices)
  &_Paleslogo   // Pointer to palette
};

/*************************** End of file ****************************/
