// generated by Fast Light User Interface Designer (fluid) version 1.0110

#ifndef colorsfonts_h
#define colorsfonts_h
#include <FL/Fl.H>
#include "font_browser.h"
void selectColorsFonts();
void cbWaterfallFontBrowser(Font_Browser*, void* v);
#include <FL/Fl_Double_Window.H>
extern Fl_Double_Window *dlgColorFont;
#include <FL/Fl_Button.H>
extern Fl_Button *btnClrFntClose;
#include <FL/Fl_Tabs.H>
extern Fl_Tabs *tabsColors;
#include <FL/Fl_Group.H>
#include <FL/Fl_Box.H>
extern Fl_Box *FDdisplay;
extern Fl_Button *btnBackgroundColor;
extern Fl_Button *btnForegroundColor;
extern Fl_Button *btnFD_SystemColor;
#include <FL/Fl_Check_Button.H>
extern Fl_Check_Button *btnUseGroupColors;
extern Fl_Button *btnGroup1;
extern Fl_Button *btnGroup2;
extern Fl_Button *btnGroup3;
extern Fl_Button *btnFkeyTextColor;
extern Fl_Button *btnFkeyDEfaults;
#include <FL/Fl_Input.H>
extern Fl_Input *RxText;
extern Fl_Button *btnRxColor;
extern Fl_Button *btnTxColor;
extern Fl_Input *TxText;
extern Fl_Button *btnRxFont;
extern Fl_Button *btnTxFont;
extern Fl_Button *btnXMIT;
extern Fl_Button *btnCTRL;
extern Fl_Button *btnSKIP;
extern Fl_Button *btnALTR;
extern Fl_Button *btnNoTextColor;
extern Fl_Button *btnTextDefaults;
extern Fl_Button *btnTabColor;
extern Fl_Button *btnTabDefaultColor;
Fl_Double_Window* make_colorsfonts();
#endif
