/////////////////////////////////////////////////////////////////////////////
// Name:        vscpbootloader.cpp
// Purpose:     
// Author:      Ake Hedman
// Modified by: 
// Created:     Thu 25 Oct 2007 22:32:58 CEST
// RCS-ID:      
// Copyright:   (C) 2007-2017 
// Ake Hedman, Grodans Paradis AB, <akhe@grodansparadis.com>
//				(C) 2012 Dinesh Guleria
// Licence:     
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version
// 2 of the License, or (at your option) any later version.
// 
// This file is part of the VSCP (http://www.vscp.org) 
// 
// This file is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this file see the file COPYING.  If not, write to
// the Free Software Foundation, 59 Temple Place - Suite 330,
//  Boston, MA 02111-1307, USA.
// 
//  As a special exception, if other files instantiate templates or use macros
//  or inline functions from this file, or you compile this file and link it
//  with other works to produce a work based on this file, this file does not
//  by itself cause the resulting work to be covered by the GNU General Public
//  License. However the source code for this file must still be made available
//  in accordance with section (3) of the GNU General Public License.
// 
//  This exception does not invalidate any other reasons why a work based on
//  this file might be covered by the GNU General Public License.
// 
//  Alternative licenses for VSCP & Friends may be arranged by contacting 
//  eurosource at info@eurosource.se, http://www.eurosource.se
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "vscpbootloader.h"
#endif

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
////@end includes

#include "vscpbootloader.h"

////@begin XPM images
/* XPM */
static const char *wizard_xpm[] = {
/* columns rows colors chars-per-pixel */
"115 280 251 2",
"cX c #B19B6A",
"|  c #C68948",
"}. c #737469",
"/. c #ECB565",
":X c #9BA09C",
"kX c #9D855A",
"hX c #5A5138",
"K  c #D78946",
"o  c #A1BDC3",
"W  c #DCD4B3",
"2. c #F2C66C",
"pX c #8DA4A8",
"<X c #C29251",
"&. c #C87739",
"{  c #F2DBB7",
"J. c #353E53",
"DX c #90AEB5",
"0X c #E37F35",
"I. c #1A211C",
"P. c #1A2426",
"_  c #B77753",
"F. c #293335",
"u. c #85847C",
"(. c #151D22",
".. c #CE946A",
"+X c #7B7058",
"I  c #DBBBB3",
"F  c #EBE6E7",
"aX c #675D51",
"e. c #F8E3AA",
"V  c #D6AB93",
"GX c #8EAEB4",
"E. c #A58761",
"sX c #4C5563",
"D  c #CBB688",
"(  c #EBC588",
"!  c #F0CC93",
"   c #98B6BC",
"3X c #778587",
"7  c #EEF0FA",
"U. c #131A1A",
"4  c #F8F2E9",
"@. c #F3D9A7",
"c  c #D9A368",
"zX c #4C5573",
"e  c #C9BC97",
"HX c #BCBCD2",
"*. c #D7BBA6",
"%. c #A85327",
"^  c #D18F57",
"M  c #D9A677",
"r. c #F0BA69",
"H  c #FBF0CE",
"fX c #B5A071",
"M. c #454B54",
"9  c #E9D7C8",
"b  c #D49658",
"wX c #6A5539",
"dX c #020809",
"a  c #F1EEF2",
";  c #EAE4C9",
"{. c #868894",
"N  c #E1AB76",
"NX c #687092",
"jX c #776445",
"w. c #F1CA87",
"*  c #94B3B9",
"XX c #5C6576",
"3  c #F9F9FA",
"Z  c #E4B88A",
"y  c #DDB475",
"v. c #9A8975",
"MX c #0F1721",
"A  c #E7C8A8",
"W. c #28281D",
"j. c #64675C",
"}  c #F1CDA2",
"JX c #C7C8E0",
"5. c #E4A65C",
"c. c #646A69",
"i  c #EAD5B8",
"BX c #A7AAB7",
"&X c #8C908D",
"4. c #DA9545",
"y. c #A3B6BA",
"g. c #8A9CA3",
"J  c #F7E4BA",
"$X c #6C7B83",
"T  c #8C492A",
"h. c #76807D",
"$. c #9B5224",
":. c #F2C874",
"-  c #D7D8D7",
"v  c #EDC47A",
"D. c #827665",
"#. c #E18A3F",
"Q  c #E8DBD5",
"o. c #F2DDC4",
"G. c #29322D",
":  c #D7D2CA",
"m. c #5B6358",
",  c #BCC1BC",
"1. c #ABBEC3",
"+. c #DBA25B",
"L. c #443A28",
"V. c #333A3A",
"q. c #B4AAA6",
"8. c #97A5A9",
"6X c #644C33",
"#  c #AEC8CC",
"<. c #D7C9B9",
"gX c #826D59",
"f  c #C48556",
"k  c #C6B17D",
"lX c #857149",
"j  c #C79877",
"]. c #383527",
"bX c #C1BCB7",
"=. c #F3D289",
"b. c #979995",
"`. c #E5983A",
"1  c #A6A599",
"[  c #E3B995",
"L  c #E09D59",
"rX c #B29E82",
"~. c #1D2731",
"8  c #DDD1AC",
"Z. c #3B4246",
"mX c #A19E9A",
"$  c #B1C9CE",
"0  c #DAC4A9",
"_. c #D57634",
"4X c #B09B73",
"P  c #F0CEB4",
"u  c #ECD7A9",
"w  c #C4AB7A",
"5  c #E9C796",
"eX c #6B7369",
"G  c #ECECF4",
"VX c #B3AE9D",
",X c #A99A73",
"f. c #7A8891",
"SX c #6E807C",
"!. c #545C78",
"3. c #ACB3AA",
"yX c #594B37",
"O. c #D6C496",
"K. c #635644",
"d. c #A18F84",
"ZX c #6E8083",
"9. c #9BB0B5",
"E  c #D7A888",
"'  c #985C41",
"N. c #3C433B",
"l. c #4B5248",
"p. c #9BADB3",
"S. c #A7A9A4",
";X c #B8B8C7",
"X  c #9EBAC0",
"-. c #F4D699",
"OX c #697377",
"x. c #555A57",
"*X c #988867",
"k. c #4B5257",
"A. c #737876",
"x  c #EDD59B",
";. c #D4CDC5",
"z  c #D2DCE2",
"s  c #E2BDA3",
".X c #523E2C",
"R. c #9B9276",
"n. c #787C84",
",. c #E2A865",
"7X c #44453B",
"B. c #353C43",
")  c #A66F3E",
"&  c #C6D4D9",
"0. c #C8C8C8",
"9X c #676D74",
"8X c #858886",
"Q. c #302C26",
"[. c #0B1315",
"~  c #F5E6C9",
"nX c #C3C4D6",
"r  c #F5E9D7",
"X. c #EEE2B9",
"%  c #B3CBD0",
"%X c #C6C2BB",
"@X c #6E4D2E",
"i. c #948B85",
"Y  c #D69A67",
">X c #54584C",
"-X c #13150D",
"t  c #DCB787",
"6  c #F3ECE6",
"l  c #CEC199",
"]  c #895836",
"B  c #E6CBB6",
"xX c #56462B",
"C. c #2C3542",
">. c #E8A44C",
"d  c #D4AFA2",
" X c #B98644",
"`  c #E4DDE2",
"^. c #3B4453",
"m  c #E6B678",
"T. c #545B64",
"AX c #91B0B6",
" . c #AB5E35",
"vX c #362E1B",
"'. c #9B6B3E",
"<  c #BAA889",
"7. c #A2B6C0",
".  c #9BB8BE",
"uX c #A4956C",
"=X c #7B5633",
"iX c #070D11",
"O  c #A5C0C6",
"@  c #AAC4C9",
"U  c #B36C44",
"z. c #434949",
"S  c #E4CEC5",
">  c #ECE2DA",
"|. c #DB863C",
"/  c #BB7A49",
"g  c #C58B69",
"n  c #B86A36",
"q  c #DAB795",
"1X c #9598A5",
"6. c #B8B4AC",
"FX c #686E8A",
"oX c #7D9197",
"tX c #927658",
"5X c #A9905C",
"2X c #0A110C",
"p  c #F9F1DD",
"H. c #232E32",
"Y. c #232B29",
"s. c #879697",
"h  c #B7895D",
"CX c #8B90B0",
"qX c #A4895C",
"t. c #93928B",
"2  c #D9E2E9",
"R  c #C57C49",
"C  c #D79E74",
"). c #C76D2E",
"=  c #C7B7A5",
"a. c #B6B7B6",
"+  c #A8C1C6",
"#X c #5A6368",
/* pixels */
"    .     . .   . . . . X . . X . X X X . X X X X o X X o X o o o X o o o o o o O o o O o O o O O O O O O O + O + + O + + @ O @ + @ + @ @ @ @ @ @ @ @ # @ @ # @ # # @ # # # # # # $ # # $ # $ $ $ $ $ $ % $ % $ % % % % % % % % % % % ",
"  .     .   . .   . . . . X . X . X X X X X X X X X X o X o X o o o o o o o o o o O o O o O O O O o + O O O O + O + + O @ + @ O @ @ @ @ @ @ @ @ @ @ # @ @ # @ # # @ # # # # # # # # # $ # $ $ $ $ $ $ $ $ % % $ % % % % % % % % % % % ",
"      .   .   . . . . . . . X . . X X X . X X o X X o X o X o o X o o o o O o o O o O o O o O o + O O O O + O O + + O @ O + @ O @ @ + @ @ @ @ @ @ @ @ @ # @ # @ # @ # # # @ # # # $ # # $ $ # $ $ $ % $ $ % $ % $ % % % % % % % % & % ",
"    .     . .   . . . . . . X . X . X X X X X X o X X X X o o X o o o o o o o o o o O o + o O O O O o + O O + O O + @ O + + @ O @ @ + @ @ @ @ @ @ # @ @ @ # @ # @ # # @ # # # # # $ # $ # $ $ # $ $ % $ $ % % $ % % % % % % % % % % % ",
"      .   .   . . . . . . . X . X . X X X X X X X X o X o X o o X o o o o o O o O o o O o O o + o + O O O + O + O + O @ O @ O @ + @ + @ @ @ @ @ @ @ @ # @ @ # @ # @ # # # # @ # # $ # # $ # $ $ $ $ $ % $ % $ % % % % % % % % % % % % ",
"    .     .   . . . . . . . X . . X X X X X X X o X X o X o X o o o X o o o o o O o O o O o + o O O O O O + O + O @ O O @ O @ @ O @ + @ @ @ @ @ @ @ @ @ # @ @ # @ # # @ # # # # # # $ # # $ $ $ # $ % $ $ % % $ % % % % % % % % % & % ",
"      .   .   . .   . . . X . X . X X X . X X X X X X X o X o X o o o o o o o o o O o O o + o + o + o + O O O + O O @ + O + @ O @ @ @ + @ @ @ @ @ # @ @ @ # @ # @ # # @ # # # # # # # $ # $ # $ $ $ $ % $ $ % % $ % % % % % % % % % % ",
"      .     . .   . . . . . . X . X X X X . X X o X o X X o X o X o o o o o o o O o o + o o + o O O + o + O O + O O + O @ @ O @ @ O @ + @ @ @ @ @ @ @ # @ @ # # @ # @ # # # # # # # # # # $ # $ $ $ $ % $ % $ % % % % % % % % % % % % ",
"        .   .   . . . . . . . X . X . X X X X X X X X o X o o X o o o o o o o o o o O o O o O O O o + O O O + O O + @ O + O + @ O @ @ + @ @ @ @ @ @ @ @ # @ @ # # @ # # # @ # # # # $ # # $ $ $ # $ $ % $ $ % % # % % % % % % % % & % ",
"      .     .   . . . . . . . X . . X X X . X o X X o X o X o o X o o o o o o o o o o O o + o O o + O O O O O + O + O @ O @ + @ O @ @ @ + @ @ @ @ @ @ @ @ # @ @ # # @ # # # # @ $ # # $ # # # $ $ $ $ % $ $ % % % % % % % % % % % % % ",
"        .   . .   . . . . . . X . X X X . X X X X o X X X o X o o X o o o o o o O o O o O o O o + O o + O O O + O O @ O @ O @ O @ @ O @ @ @ @ @ @ @ @ @ @ @ # @ # @ # @ # # # # @ $ # $ # # $ # $ $ $ $ % $ % # % % % % % % % % % % % ",
"      .     .   . . . . . . . X . X . X X X X X X X X o X o X o X o o o o o o o o o o O o + o + o + O O O O O + O + O + O @ O @ @ O @ @ + @ @ @ @ @ @ @ # @ @ # @ # @ # # # # # # # # # # $ # $ $ $ $ $ $ % $ % % % % % % % % % % % % ",
"        .   .   . .   . . . X . X . X X X . X X X o X X X o X o o X o o o o o o o o O o O o + o O O o + O O O O + O @ O @ O @ O @ @ O @ @ @ @ @ @ @ @ # @ @ # @ @ # # @ # # # # # # # # # $ # $ $ $ $ $ $ $ % % % % % % % % % % % % % ",
"      .     .   .   . . . . . X . . X X X X X X X X X o X X o X o o o o o o o o o O o o o + o o O O + o + O O + O O O @ O + O @ O @ @ @ + @ @ @ @ @ @ @ @ @ # @ # @ # # # # @ # # # $ # $ # # $ $ # % $ $ $ % # % % % % % % % % % % % ",
"          .   .   . . . . . . . X . X X . X X X X X X o X o X o o X o o o o o o o o o O o O o + o + o + O O O O + O + O @ O @ + @ @ O @ @ @ O @ @ @ @ @ # @ @ # @ # @ # @ # # # # # # # # $ # $ # $ $ % $ # % % % % % % % % % % % % % ",
"        .     . .   . . . . . . X . X X X . X X X X X X o X o X o o X o o o o o o o O o o O o + o O O O o + O + O O + + O @ O @ O @ @ O @ @ @ @ @ @ @ @ @ @ # @ # @ # @ # # # # # # # # # $ # # $ $ $ $ % $ $ % % % # % % % % % % % & ",
"          .   .   . . . . . . . X . X . X X X X X X o X X X o X o X o o o o o o O o o o O o O o + o O O + O O O O + O @ O O @ O @ O @ @ @ O @ @ @ @ @ @ # @ @ # @ # @ # @ # # # # # # # $ # # $ # $ $ $ $ % # % % % % % % % % % % % % ",
"        .     .   . . . . . . . X . . X X X . X X X X X o X o X o o X o o o o o o o o O o o + o + o O O + O O O + O + O @ O @ O @ @ O @ @ @ @ @ @ @ @ @ @ @ @ # @ # @ # # # # # # # # # # # $ $ # $ # $ % # % % % % # % % % % % % % % ",
"          .   .   . .   . . . X . X . X X X X X X X X o X X o X o o o o o o o o o o o O o o O o + o O O o + O O + O O @ O + O @ O @ @ O @ @ @ @ @ @ @ @ # @ # @ # @ # @ # @ # # # # # # # $ # $ # $ $ $ $ % # % % % % % % % % % % % % ",
"          .     . .   . . . . . X . . X X X . X X X X X o X o X o X o o o o o o o o o o O o O o + o + o + + O O O + O O @ O @ + + @ O @ @ O @ @ @ @ @ @ @ @ @ # @ # @ # @ # # # # # # # # # $ $ # $ $ # % # % % # % % % % % % % % % % ",
"            .   .   . . . . . . . X . . X X X X X X X X X X o X o o X o X o o o o o O o O o O o O o O + O O O O + O + O @ O O @ O @ @ @ @ @ @ O @ @ @ @ # @ @ @ # @ # @ # @ # # # # # # # # $ # $ $ # $ $ % $ # % % % % % % % % % % % ",
"          .     .   . . . . . . . X . X X X . X X X o X o X o X o o X o o o o o o o o o O o O o O O o + o + O O + O + O O @ O @ O @ @ O @ O @ @ @ @ @ @ @ # @ # @ # @ # @ # # @ $ # # # # $ # # $ $ $ $ $ $ % $ % % % # % % % % % % % ",
"            .   .   . . . . . . . X . . X X X X X X X X X X X o X o o X o o o o o o O o o O o O o + o + O O O O O + O O @ O O @ O @ @ O @ @ @ @ @ @ @ @ @ @ # @ @ @ # @ # @ # # # # # # # # $ # $ $ # $ $ $ $ % $ % % % % % % % % % % ",
"              .   .   . . . . . . X . X . X . X X X X o X o X o X o o o o o o o o o o o O o O o + o O o + o + O + O O @ O @ O + @ O @ @ @ O @ @ @ @ @ @ # @ @ @ # # @ # # # @ # # # # # # $ # $ # $ $ # % $ $ # % % % # % % % % % % % ",
"            .     . .   . . . . . X . . X X X X X X X X X X o X o X o o o o X o o o o O o o O o o + O O O O O O O O + O + O @ O @ O @ O @ @ O @ @ @ @ @ @ @ # @ @ @ # @ @ # # @ # # # # # $ # $ $ # $ $ $ $ $ % % % % % % % % % % % % ",
"                .   . .   . . . . X . X . X X X . X X X o X X X o X o o o o o o o o o o O o O o O o + o O O O O O + O O O @ O @ O @ + @ @ @ @ @ @ @ @ @ @ @ @ # @ # @ # # @ # # @ # # # # $ # $ # $ $ $ $ $ $ % # % % # % % % % % % % ",
"              .   .   . . . . . . . X . X X X . X X X X X o X o X o o X o o o o o o o o o O o O o + o + o + O O O O + @ O O @ O O + @ O @ O @ @ @ @ @ @ @ @ # @ @ # # @ @ # # @ # # # # # # $ # $ # $ $ $ $ $ $ % % % % % % % % % % % ",
"                .   . .   . . . . X . X . X . X X X X o X X X X o X o X o o o o o o o O o o O o O o + o O O O O O + O O O @ O @ @ O @ @ O @ @ @ @ @ @ @ @ @ @ @ # @ @ # # @ # # # @ # # $ # $ # # $ # $ % $ $ % # % % % # % % % % % % ",
"              .   .   . . . . . . . . X . X X X X X X X X o o X o X o o X o o o o o o o o O o O o + o O O o + O O O O + O + O O O @ O @ @ O @ O @ @ @ @ @ # @ @ # @ # @ @ # # @ # # # # # # $ # $ # $ $ # % # % $ % # % % % % % % % % ",
"                  .   . . . . . . . X . . X X X . X X X X X X o X o o o X o o o o o o o O o O o O o + o + O O O O + O + O @ O @ O @ @ @ @ @ @ @ @ @ @ @ @ @ # @ @ # @ # @ # @ # # @ # # # # $ $ # $ # $ $ $ % # % # % % % % % % % % % ",
"  *       .   .     . .   . . . . . . X . X X X X X X X X o X X o X o o o o o o o o o o o o O o O o + O o O O O O O + O O @ O @ O O O @ O @ O @ @ @ @ @ @ @ @ @ # @ # @ # # # # @ # # # # # # $ # $ # $ $ $ $ % # % % % % % % % % % % ",
"                  .   .   . . . . . . X . X . X X X X X X X o X X o X o X o o o o o o o O o o O o O o O O O O O O O + O O + O @ O @ + @ @ @ @ @ @ @ @ @ @ @ # @ @ # @ # @ # @ # # @ # # # # # $ # $ $ $ $ $ $ % # % % % # % % % % % % ",
"  *         .   .   .   . . . . . . . X . . X X X X X X X X o X o X o o o o o o o o o o o o O o O o + o + o + o + O O + O O @ O + @ O @ O @ O @ @ @ @ @ @ @ @ @ @ @ # @ # @ # # @ # # @ # # $ # $ # $ $ $ $ $ $ % % % # % % % % % % % ",
"    *       .     .   . . . . . . . . . X . X X X . X X X o . o X X o X o o o o o o o o o O o O o + o + o + o + O O O + O O @ O @ O + @ @ O @ O @ O @ @ @ @ @ # @ @ # @ # @ # @ # # # # # # # # # $ # $ $ $ $ % # % % % % % % % % % % ",
"                    .   . . . . . . . X . X . X X X X X X X o X o X o X o X o o o o o o o o O o O o O o + o + O O O O + O @ O @ O O + @ O @ @ @ @ @ @ @ @ @ # @ @ @ # @ # @ # # # @ # # # # # # $ # $ # % # % # % # % % % # % % % % % ",
"  *         .     .   .   . . . . . . X . . X X X X X X X X X X o X o X o o o o o o o o o o O o o + o + o + O o + O O + O O @ O @ O @ @ O @ O @ @ @ @ @ @ @ @ # @ @ # @ # @ # # @ # # @ # # # $ # $ # $ $ $ $ % # % % % # % % % % % % ",
"    *       .       .   . . . . . . . . X . X . X X X X X X o X X o X o o X o o o o o o o o o O o o + o + o O + O O o + O O O @ O @ O @ @ O @ @ + @ @ @ @ @ @ @ # @ # @ # @ # @ # # # # # # # # # $ # $ $ $ # % $ $ # % % % % % % % % ",
"  *           .       . .   . . . . . . X . X . X X X X X X X o X o X o X o o o o o o o O o o O o + o O o + O O O O + O + O O O @ O O O @ @ O @ @ @ @ @ @ @ @ # @ @ # @ # @ # # # # @ # # # # # # # $ $ # % $ $ $ % % % % % % % % % % ",
"    *           .   .   .   . . . . . . X . . X X X X X X X X o X X o o o X o o o o o o o o O o o o + o + o O O O O O O O + + O O @ O @ @ O @ @ O @ @ @ @ @ @ @ # @ @ # @ # @ # @ # # # @ # # $ # $ # $ # $ % $ $ # % % # % % % % % % ",
"  *             .     . .   . . . . . . X . X . X X X X X X o X X o . o o o X o o o o o o o o O o O o O o + O o + O O O + O + @ O @ O + @ @ O @ @ @ @ @ @ @ @ @ @ # @ @ # @ # @ # # # # @ # # # $ # $ # % # $ % % # % # % % % % % % % ",
"    *             .   .   . . . . . . . X . . X X X X . X X X o X o X o X o o o o o o o o O o o O o O o + o O + o + O O O O O O @ O @ O @ O @ @ O @ @ @ @ @ @ @ @ @ # @ # @ # # # @ # # # # # # # # # $ $ # % # % $ % % % % % % % % % ",
"  *                 .   . .   . . . . X . X . X . X X X X X o X X X o X o o X o o o o o o o o O o o O O o + o + O O O O + @ O @ O O @ O @ @ O @ @ @ O @ @ @ @ # @ @ @ # @ # @ # @ # # @ # # # # # # $ # $ $ # % $ % # % % # % % % % % ",
"    *             .     .   . . . . . . . X . X X X X . X X X X o X o X o X o o o o o o o o O o O o o + o + O O O O O O O O O O @ O @ O @ O @ @ O @ @ @ @ @ @ @ @ # @ @ # @ # # # # @ # # # # # # # $ # $ $ # % $ $ % # % % % % % % % ",
"  *                   .   . .   . . . . X . X . X X . X X X X X X o X o o o X o o o o o O % = - ; : > & , < 1 + o + O O O + O O @ O + @ O @ @ @ @ O @ @ @ @ @ @ @ @ # @ # @ @ # @ # # # # # # # # # # $ # % # % $ $ $ % % % # % % % % ",
"    *               .   .   . . . . . . . . X . X X X X X X o X o X X o X o O % & & 2 2 3 4 ; 5 6 7 3 8 9 0 q w e ; ; - - & % % # + O @ O @ O @ @ @ @ @ @ @ @ @ # @ @ @ # # @ # # @ # # # # # # # # # $ # $ $ $ % $ $ % # % % % % % % ",
"  *                 .   .   . . . . . . . X . . X X X X X X X X X o % & 2 7 7 3 3 3 3 r t t y u i p a s s q 9 d f g h j k l ; r ; 2 - % # @ O @ O @ O @ @ @ @ @ @ @ # @ @ # @ # @ # # @ # # # # # # # $ # $ $ $ # % % # % % % % % % % ",
"*       * .         .   .   .   . . . . X . . X X . X X X X X # z 7 3 7 3 7 3 7 7 7 ; x c v v b n m M N B V B C Z c f A 9 V j S t D l a F 2 % # @ @ @ @ @ @ @ @ @ # @ @ # @ # @ # # # # # @ # # # # $ # $ # % # % $ $ % % % # % % % % ",
"  *                     .   . .   . . . X . X . X . X X X % G 3 3 3 3 3 3 3 7 3 a H ; B i J K L b c P 9 a I j g U Y T R E E C s W F > Q F a 7 a - # @ @ @ @ @ @ @ @ @ @ # @ # @ # @ # @ # # # # # # # # $ $ $ # % $ $ # % % % % % % % ",
"*       *   .       .     .   . . . . . . . . X . X X % G 3 3 3 3 3 3 3 7 3 3 ; ! c A 4 ~ u ^ / ( ) _ > a 7 ` Q E C ' ] C Y Y [ [ [ A 9 ; > 6 G l > z # @ @ @ @ # @ @ # @ @ # # @ # # # # # # # # # # # $ $ # % $ $ % $ % # % % % % % ",
"  *     *     .       .   .   . . . . . . . X . . O 2 3 3 3 3 3 3 3 7 3 3 a ; { 5 u u 6 r } | T m  ...6 a 6 G F Q s V g C C N R ^ E E I V j 0 > > F G F z # @ @ @ @ # @ # @ # @ # # @ # @ # # # # # # # $ # % # % $ # % # % % % % % % ",
"*         *     .       .   .   . . . . . . X . $ a 3 3 3 3 3 3 3 7 ; r X.x ~ ~ u 4 6 4 r r N / o.A { [ Z _ > Q Q d o.9 [ C g V [ s B B S o.9 9 S ; > F 7 2 % # @ @ @ @ @ # @ # @ # # @ # # # # # # # # $ # $ $ $ % $ % # % % % % % % ",
"  *     *         .   .     . . . . . . . . . % 3 3 3 3 3 3 3 3 a p ~ 8 M O.Z +.u 6 6 4 p r P N } ~ o.n ^ s S F 6 F s A I [ C Y Y N m s B q q A I i 8 0 > F F % # # @ # @ @ # @ # @ # # # # # # # # # # $ # $ $ # % $ # % % % # % % % ",
"*       *             .   .   .   . . . . . % 3 3 3 3 3 3 3 3 3 3 ; ; 6 p r 6 r p r J v K M p @.#.@.6 [ P o.F Q [ N P 9 S [ .._ U _ C S B B B Q 9 B 9 Q > ` F F & # @ @ # @ # @ # # # @ # # # # # # # # $ # $ $ # % % # % % % % % % % ",
"  *     *             .     .   . . . . . % 3 3 3 3 3 3 3 3 3 3 3 3 3 a 4 3 3 3 ~ 4 ! $.%.&.u v L P 6 a ~ C a a V R P 9 f C S [ C P 9 P S Q S > ` F > ` F Q > ` G z @ @ @ # @ # @ # @ # # # # # # # # # # $ $ # % # % # % % % # % % # ",
"*     *                 .   .   . . . . + 7 3 3 3 3 3 3 3 3 3 3 3 4 8 *.4 3 3 a 3 3 J b ..u o.=.-.o.3 a a 6 F a I V P S S g V P R C A s A ` S ` > F 7 G G ` Q G G G ;.@ @ # @ # @ # # # # @ # # # # # # # $ $ # % # % $ % # % % % % % ",
"  *     *               .   . .   . . . F 3 3 3 3 3 3 3 3 3 3 3 a p 6 3 r 3 3 3 3 a o.J { ~ p :.~ r 7 3 3 a } s Q Q P P Q 9 P s ..^ [ [ s 9 ` G G ` 7 ` a 9 G 7 G G > # @ @ # @ # @ # @ # # # # # # # # # $ $ # % # % $ $ % % # % % % ",
"*     *                   .   . . . . & 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 Z +.3 3 a 4 4 p J @.J J >.P a 3 a a o.c } > 6 P P > 9 E ,.C Z E C P A F G G G F G G 7 7 2 7 7 <.9 1.# @ # @ # # # @ # # # # # # # # $ # $ $ $ $ % # % $ % % % # ",
"  *     *             .     .     . o 7 3 3 3 3 3 3 3 3 3 3 3 3 3 3 ~ ,.~ 3 3 3 u c H K K 2.J J 4 3 a 3 7 o.&.C o.a 7 > ` Q [ N Z [ Z [ A s Q 2 ` G G 7 7 F F G 7 7 7 Q : 3.@ # # @ # @ # # # @ # # # # # $ # % # $ % # % % % % # % % ",
"*   *                     .   . . . z 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 J H 3 3 3 3 H @.p 4.>.5.p { r 3 3 3 7 6 L V 6 a G > P 5 Z N N Z Z s P S S ` 9 ` G G G 7 7 F G Q > a > 6.o # @ # @ # # # # # # # # # # $ # $ $ # % $ % # % # % % % ",
"  *   *     *       .     .   .   7.a 3 3 3 3 3 3 3 3 3 3 3 3 3 3 4 3 3 3 3 3 3 J { p ! =.-.4 4 u a 3 3 7 4 Z s a 7 F > Q N N P o.} Z s 9 F ` S 9 F 7 G G 7 G G F i s 6 Q Q 8.# # # # # @ # # # # # # # # # % # $ # % $ % # % % % % % ",
"*   *                 9..   . .   0.3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 4 3 3 3 3 3 H J 4 p ~ H ~ r @.r m o.4 3 a 6 S a 7 > F F 5 } Q Q S [ Q F Q ` F F ` G 7 G ` ` 7 F i 6 > > 9 q.o # @ # @ # # # @ # # # # # $ # $ $ # % $ $ $ % # % % # ",
"  *   *     *             .   .   - 3 3 3 3 3 3 3 3 3 3 3 w.Z 3 3 3 3 3 3 3 3 -.=.v H e.p p H u H r.N a 3 7 6 a a G Q Q 6 > > P a 6 F > F Q F F Q ` ` a ` ` a F F 6 a a 7 > ;.t.# # @ # # # @ # # # # # # # % # $ $ $ % # % # % % % % ",
"*   *                   .     . y.; 3 3 3 3 3 3 3 3 3 3 J ,.4 3 3 3 3 3 3 3 3 4 H -.e.=.p 4 H @.J :.! 6 7 3 7 a G 7 F > 7 a > 6 > F o.Q F Q F ` Q Q G Q 9 6 F 6 7 6 a a G > 9 u.@ @ # # # @ # # # # # # # # $ # % # % # % % # % % % # ",
"  *   *     *             .     y.; 3 3 3 3 3 3 3 3 3 p =.r 3 3 3 3 3 3 3 3 3 4 { 4 x ~ 4 4 4 { r ~ a a 3 7 7 G a G G G 7 a a a 6 Q } F F ` F S { 9 > F F ~ 9 6 a 3 a G F > B i.p.@ # # # # # # # # # # # # $ # $ $ # % % # % % % % % ",
"*   *     *                 .   a.; 3 3 3 3 3 3 3 3 3 4 3 3 3 3 3 3 3 3 3 3 3 p J e.H 4 4 3 3 3 a a 3 3 7 7 7 7 7 F 7 a 7 6 6 6 F Q o.Q F F F F > > o.> o.> r 6 F 7 a G G Q B i.s.@ @ # # # # # @ 1.y.$ # $ # $ # % # % # % % # % % # ",
"  * *   *     * .         .   . 6.; 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 p 3 3 3 3 J :.~ 3 e.~ 3 3 3 3 7 4 F 7 7 7 7 > a 7 3 a 3 a a 6 > 6 G G G Q o.a 4 6 6 > > F 6 a a a 7 Q A d.f.@ # @ y.g.h.j.k.l.z.x.c.f.p.# $ # % $ $ $ # % % % $ ",
"*   *     *                 .   3.W 4 3 3 3 3 3 3 J 4 3 3 3 3 3 3 3 H 4 3 3 3 3 H =.4 4 -.H p 4 7 3 a 6 o.7 3 7 a 6 9 a 3 3 3 a 6 a a > a F 9 Q F a r F > 6 > a 3 a a 7 7 Q Z v.c.b.n.m.M.z.N.B.V.V.V.C.V.Z.k.A.y.$ # % % # % % % # % ",
"  *   *     *                   S.0 p 3 3 3 3 3 J e.4 3 3 3 3 3 3 3 3 3 3 3 3 p H H 3 3 e.H r r 3 3 7 4 F 7 7 3 7 3 3 a 3 3 3 3 a 6 a o.o.Q r 4 Q r o.> 3 3 a 3 a 6 7 7 a i M D.z.Z.Z.N.B.V.V.F.G.F.H.F.F.C.B.J.x.8.$ $ % $ % # % % % ",
"*   *     *                 . . 8.< r 3 3 3 3 p J p 3 3 3 3 3 3 3 3 3 3 3 H 3 3 p H 4 p H 4 3 a 3 7 3 7 7 3 7 3 4 4 r ! N 6 a 3 a a o.o.P o.F r 4 a a r > 6 6 F 3 7 a 7 > [ j K.F.B.V.L.V.V.G.P.I.U.U.U.P.Y.H.C.B.T.9.% $ # % % % % # ",
"*   *   *     *               . y.R.X.a 3 3 H 4 3 3 3 3 3 3 3 3 3 3 3 3 3 H 3 3 4 =.p 4 3 3 3 3 3 7 3 7 p 6 6 a o.{ ! 5.R } 6 o.4 3 4 3 o.6 4 o.3 3 3 9 a a Q a a 3 > 9 5 +.E.Z.W.Y.F.Q.F.W.I.P.I.W.U.P.!.!.C.P.~.^.A.@ % $ % # % % % ",
"*   *   *       9..       .     1.u.e ; 3 3 3 3 3 3 3 3 3 3 3 3 3 4 3 3 3 4 p =.e.=.e.4 4 4 4 p 4 4 6 4 ! ( r ~ { o.w./.Y r a a 3 3 3 7 4 3 > [ 6 3 3 3 3 3 3 a P 6 P A m | K.V.U.U.P.Q.k.m.N.Y.U.U.(.(.P.F.C.H.(.H.T.p.$ % $ % % # % ",
"*   *   *     *             .   1.t.R.W p a 3 3 3 3 3 3 3 3 3 3 3 H 3 3 3 3 -.)._.`.5.r e.-.~ J w.i -.! v m H 5 r J } o.r o.3 { 4 3 3 3 a 3 3 a a 3 3 a 3 a 3 a 6 Q P ( ^ '.].~.[.C.Q.z.G.I.I.P.H.Y.H.Y.H.G.F.P.(.I.Z.{.% $ % # % % % ",
"*   *   *     *               . 1.3.}.< ; 4 3 3 e.@.4 3 3 3 3 3 H H 3 3 H H r.|._.|.5.H } w.=.w.&.J @.! -.J H @.H { @.! r 4 4 6 P 3 3 3 4 3 3 3 3 3 3 3 3 a a 4 o.5 5 +. X.XH.Z.P.U.(.I.P.Y.F.XXoXy.o o g.OXF.Q.F.P.F.n.# $ % $ % % # ",
"*   *   *       *         .     X , h.+Xl H 4 e.`.r.p 3 3 3 3 3 3 3 3 p H e._.n K /.m J w.{ H } w.=.J @.@.H 6 o.o.r 4 3 3 6 3 3 3 3 3 3 3 3 4 3 3 3 6 a 3 a 4 P P ! N  X@XW.P.#X~.H.H.H.Y.$X+ # # # # $ # $ 7.Y.P.F.F.XX$ $ $ $ % % % ",
"*   *   *     *               . . %X&Xm.*Xu p =.,.~ 3 4 H 3 3 3 3 3 3 4 3 m $.n m } r 6 ~ @.~ p r { H -.@.r 6 p 4 4 p 3 3 r 3 3 3 3 3 3 3 3 3 r 3 a 4 3 ~ o.{ P x y | =XW.C.U.{.P.F.Y.(.Z.9.$ # # @ # # # $ s.I.-XY.F.T.$ $ $ $ $ % $ ",
"*   * *   *       *             . ;X:XA.>X,XW ~ H 3 v =.v 4 3 3 3 3 ~ 3 J &.R v { i 4 r r N Y 5 4 p ~ ! P r 4 3 3 3 r 3 3 3 3 4 3 3 3 3 3 3 3 3 3 3 4 a r { P O.t <X] W.V.Z.[.1XY.H.(.F.F.z.8.# # # # # # 1XN.[.2XU.V.c.$ $ $ $ $ % $ ",
"* *   *   *     *           .   {., :X3Xj.l.4X8 6 4 r 4 4 4 J /.w.~ 3 3 p } @.( ~ p r o.! L R P 4 @.} 4 4 a p p 3 p 3 4 3 3 3 H 3 3 3 3 3 3 3 3 3 3 6 r o.9 s t 5X6X].F.k.C.-Xn.H.P.G.G.F.V.7Xp.@ # # # {.x.P.2X[.U.F.n.% $ $ $ % $ % ",
"*   *   *     *               8XN.S.:X8X9Xx.7X*X8 F 4 3 4 4 >.0X#.e.r 3 4 4 { 2.! -.@.J r ~ 4 4 Z ).L P 3 3 ~ r p -.3 3 3 3 3 3 3 3 3 3 3 3 3 3 a p > { A o.w qXwXQ.G.^.T.F.[.k.Y.G.H.F.F.G.V.M.y.@ 1.n.N.I.[.2X[.Y.V.9.$ $ $ $ % % $ ",
"* *   *   *       * .       8XN.V.n.S.3XeX#Xz.7X*Xl X.> a H >._.K e./.3 4 4 4 ~ K n o.4 4 4 H 4 } n K N ( { 3 4 ~ r 4 3 3 p r 4 p 3 r 3 3 3 G r r o.9 9 O.rXtXyXW.F.^.k.XXB.[.Y.H.F.G.F.F.V.F.V.T.8.#XG.[.2X2X[.I.F.9X% $ $ $ $ % $ % ",
"*   *   *   *   *         s.7XV.C.M.3.8XA.#Xx.M.7XK.uXD ; r J r.u @.@.4 3 6 6 p m N r 3 4 o.{ 4 p -.w.o.r 4 3 { m 4 { o.3 4 p r { 4 p 6 6 6 > ~ i 9 0 rX+XK.L.Y.C.Z.M.T.!.z.[.H.G.F.F.G.F.F.F.z.9X7XU.2XiX2XiXP.G.k.7.$ $ $ $ $ $ % $ ",
"* *   * *     *         pXz.V.C.F.F.S.{.A.c.T.>Xz.Z.].K.,X8 X.; 4 H 3 H 4 3 3 4 w.H r 4 r r 3 p e.v m J P 3 3 J -.3 4 p J 4 4 p ~ p ~ ~ W B 9 i l < v.aX7XQ.~.V.J.z.sXsX#X^.-XH.F.F.F.F.G.V.x.k.Y.iX2XdX2XiXU.G.Z.p.$ $ $ # % $ $ $ % ",
"*   * *   *       *   9.x.V.V.C.F.C.9Xb.A.c.m.k.k.z.Z.N.].K.fXk W X.6 p 6 4 p H J 4 4 4 p w.~ 4 p ,.} { p 4 p -.-.H H ~ J H H p { { u O.< D D < E.gXyXQ.P.F.B.B.^.M.M.T.!.Z.U.F.F.F.G.F.Z.x.F.[.dX2XdXiX2XU.F.z.p.# $ $ # $ % $ $ $ $ ",
"* * *   *   *   *     A.N.V.C.k.XX#Xx.b.n.9X#Xx.k.z.z.N.N.N.V.hXjXkXw l u ~ ~ ~ ; p H p H /.J H e.r.e.J e.J e.e.=.e.e.e.J J { i B ,Xe D 4X*XjXhXL.Y.P.H.C.C.B.^.z.^.M.T.XXF.P.G.F.F.V.M.N.U.dXdXiXdX2X[.P.G.T.7.$ # $ # $ $ $ % $ $ $ ",
"*   * *   *         pX7XV.sXA.x.B.N.z.eX8XOXj.x.M.l.z.Z.Z.N.V.N.V.Q.W.L.lXfXk O.O.u u X.e.x X.@.@.u @.u e.e.e.x =.-.@.x x x D rX*XD.D.aXyXL.W.W.P.H.F.B.C.B.Z.Z.^.z.sXzXk.[.Y.F.F.z.Z.I.iXdXdXdX2XdXU.P.V.f.# $ # # $ $ # $ $ $ % $ $ ",
"* *   *   * *   *   j.B.#XA.V.F.F.H.F.V.8XA.9XT.k.z.z.Z.Z.Z.N.V.N.V.V.G.W.W.].xXwXlXkXcXw w k w cXfX,XR.uXR.uXuXuX*XcXqX5XqX*XtXhX7X].W.(.P.~.H.H.C.C.V.B.B.Z.J.Z.M.sXT.(.iXV.^.Z.I.iXdXdXdXdXiXiXU.U.F.f.@ $ # $ # $ # $ $ $ $ % $ $ ",
"*   *   *     *   g.7XB.b.z.V.F.F.H.F.G.x.n.c.#Xx.M.z.z.Z.N.V.Z.V.N.V.N.V.V.G.Y.W.U.I.W.vXvXvXvXL.L.xXxX6XxXxXxXhXhXxXhXhXL.].].W.P.P.~.H.H.F.H.C.F.V.C.B.B.B.^.z.M.sXH.iX(.V.-XiXdXdXdXdXiXdX[.I.U.P.F.#X# # # $ # # $ $ # $ $ % $ % ",
"* * * *   *       eXB.A.{.k.B.F.Y.G.F.F.Y.c.A.#XT.>XM.Z.Z.Z.N.B.V.B.V.V.V.V.V.V.F.V.G.G.Y.I.I.I.U.-XU.-X-X-X2X-X-X-XI.I.I.P.P.H.H.H.H.F.H.F.F.F.F.C.C.B.B.B.J.Z.M.sXC.iXiXdXiXdXdXdXdXdX[.U.U.[.U.F.V.F.N.O # # # # $ $ # $ $ $ $ % $ ",
"*   * * *   * * p.z.V.1XbXx.B.F.H.H.G.V.Y.F.OXc.#Xk.M.z.Z.Z.B.N.B.N.V.B.V.V.V.V.V.F.V.G.V.F.F.G.H.G.H.Y.H.Y.H.Y.H.H.H.H.H.H.H.H.H.H.F.H.C.H.F.C.F.C.V.C.B.B.Z.^.^.B.iXiXiXdXdXdXdXdXiXU.[.[.[.G.V.V.V.V.V.oX$ # # $ # $ # $ $ $ $ $ $ ",
"* *   *   *     s.N.F.a.nX}.B.V.H.H.H.F.F.G.G.eX#Xx.k.z.z.Z.Z.B.N.B.V.V.V.V.V.V.F.V.F.V.F.F.F.F.G.F.H.H.H.H.H.H.H.H.H.H.H.H.H.H.F.H.F.H.F.F.F.F.C.F.C.B.B.J.Z.^.B.iXiXiXdXdXdXdXiX[.[.[.[.P.V.V.V.B.V.V.F.A.# # $ # $ # $ $ $ $ $ $ $ ",
"* * *   *   * * A.B.Y.;X0.mXZ.C.F.Y.H.H.G.Y.F.G.#X#Xk.M.z.z.Z.N.B.V.B.V.V.V.V.C.V.F.V.F.F.F.F.F.G.F.G.F.F.H.G.H.H.H.H.H.H.F.H.H.H.F.H.F.H.C.H.C.F.C.V.C.B.Z.^.V.iXiXdX[.dXdXdXiX[.[.iXI.F.V.V.V.B.N.B.V.V.T.# # # # # $ $ # $ $ $ % $ ",
"* *   * * *     j.V.Y.S.n.0.l.B.F.H.H.Y.F.F.G.G.Y.T.x.k.M.z.Z.Z.B.N.V.B.V.V.V.F.V.F.V.F.F.F.F.F.F.F.H.H.H.H.H.H.H.H.H.H.F.H.H.H.H.H.H.C.H.H.C.F.C.C.C.B.Z.J.H.iXdXdXiXiXiXiX[.U.iXU.F.V.V.V.V.B.V.B.N.V.F.M.# # $ # $ # $ $ $ $ $ $ $ ",
"* * * *     *   x.V.I.b.k.nXD.Z.B.F.H.Y.H.F.G.Z.I.I.k.k.M.z.Z.Z.Z.B.B.V.V.V.V.V.V.F.V.F.V.F.F.F.G.F.G.H.F.H.F.H.F.H.H.H.H.H.F.H.C.H.H.H.F.C.F.C.C.C.V.B.B.P.iXdXiXdX[.iX[.[.iXU.~.F.F.F.V.V.V.B.N.B.Z.V.V.^.# # # # # $ # $ $ $ $ $ $ ",
"* *   * *   * * 7XV.I.8Xl.{.a.k.B.V.H.H.H.F.F.H.z.U.[.V.k.z.z.Z.Z.Z.B.B.V.B.V.F.V.V.F.V.F.F.F.F.F.G.F.H.U.(.~.H.H.F.H.F.H.F.H.H.H.H.C.H.C.H.C.F.C.V.B.F.MXdXdXdXdXiXiX-XiX-X~.F.F.F.V.V.F.V.B.V.Z.N.Z.V.F.Z.$ # # $ # # $ $ $ # $ % $ ",
"* * * *   *     7XV.U.j.}.M.0.8XM.V.V.F.F.F.V.F.N.N.-X[.I.Z.^.z.B.Z.Z.N.B.V.V.V.F.V.F.F.F.V.F.F.F.H.G.[.[.iXiXP.H.H.H.H.H.F.H.C.H.F.H.F.F.C.F.C.C.F.(.iXdXdXdXiXdXiXdXiX~.F.F.F.F.F.F.V.V.V.B.N.Z.Z.Z.V.F.^.# # # # # # $ # $ $ $ $ $ ",
"* *   * * *   * 7XV.-XY.q.m.1X0.A.z.B.V.F.V.V.B.F.x.V.dX2X[.Y.Z.Z.Z.Z.B.B.V.V.V.C.V.V.F.V.F.F.F.F.F.I.[.[.[.iXMXH.F.H.F.H.C.H.H.F.F.C.H.C.F.F.F.(.iXdXdXdXdXdXdXiX[.~.F.F.F.H.F.F.V.V.F.V.V.Z.B.Z.z.Z.F.(.k.$ # $ # $ # # $ # $ $ $ $ ",
"* * * *   *   * 7XB.U.-Xt.i.T.0.%Xc.z.Z.B.V.V.V.Z.z.m.W.2XiX2XiXY.V.Z.Z.B.V.V.V.V.F.V.F.V.F.F.F.F.P.2XMXP.MXiXP.H.F.H.F.H.H.F.H.C.H.F.C.F.H.P.iXdXdXdXdXdXdXdXdX~.F.F.F.F.F.F.F.C.F.V.V.V.B.B.Z.z.z.z.U.(.9X# # # # $ $ $ $ $ # $ $ $ ",
"* * *   *   *   l.V.I.2XN.mX8Xn.- bX9Xz.z.Z.Z.Z.z.z.eX>XU.dX2XdXiX2X(.F.N.B.B.B.V.V.F.V.F.V.F.F.P.MXP.C.C.MX~.F.H.H.H.H.C.H.H.F.H.F.F.H.P.iXiXdXdXdXdXdXdXdXdXiXP.H.F.F.F.C.F.V.F.V.F.V.V.Z.N.z.M.z.B.[.P.f.# # # # # # $ # $ $ $ $ $ ",
"* *   * * *   * x.N.I.-X2Xj.{.n.b.- %Xu.#XT.x.l.>Xm.OXD.N.2X2XdX2XdXdXiX[.P.F.V.V.V.V.F.V.F.F.P.MXJ.NXJ.~.~.F.H.H.H.H.H.H.H.F.H.H.~.[.iXdXdXdXdXdXdXdXdXdXdXdXdXdXiXiXiXMXI.P.Y.H.F.F.V.B.N.Z.M.N.V.P.[.F.p.# # # $ # # # $ $ # $ $ $ ",
"* * * *   *   * c.N.F.2X2X[.u.i.8XBX` ;.6.a.&X}.A.8Xb.VX}.W.2XdXdX2XdXdX2XdX2X[.(.Y.F.F.V.F.I.MXzXCXXX~.H.F.H.H.~.~.H.~.P.(.MX[.iXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiXdX[.(.B.Z.z.Z.Y.F.[.U.z.# @ # $ # # $ # $ # $ $ $ $ ",
"* * *   * * *   h.Z.N.-XiX2XQ.0.t.t.q.- ;.: 0.%X%X<.;.: <.j.I.2X2XdXdXiXdXdXdXdX2XdX2XG.N.I.~.!.zXJ.P.P.P.P.MXU.[.[.iX2XdXiXdXdXdXdXiXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiXV.z.^.Y.Y.P.-XP.ZX$ # # # # # # $ # $ $ $ $ $ ",
"* * * * *   *   g.7XB.Y.2XdX2Xl.- b.mXa.0.0.- ;.S <.<.<.: : }.N.-XiXdXdXdX2XdX2XU.N.l.G.U.C.XXsX(.iXiXdXiXdXdXiXdXdXdXdXdXdXdXiXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiXdXB.z.Y.~.Y.U.P.F.O @ # # # # $ $ # $ # $ $ $ $ ",
"* * * *   *   * p.l.N.V.2X2XiX2XV.bXmXmXq.q.bX= %X;.<.;.: - ;.m.l.N.I.I.[.2XG.7XN.I.-XP.P.(.MX[.iXiXdXdXdXdXdXdXiXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdX[.z.~.Y.F.U.Y.Y.XX# $ # # @ $ # # $ # $ $ $ $ $ ",
"* * *   * * *   * eXZ.Z.Y.2XdX2X2XI.i.: 6.S.6.6.6.= 6.bX, 0.b.-X-X[.2X[.U.I.I.I.U.2X[.iXiXiXdXdXdXdXdXdXdXdXiXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiXP.H.Y.C.Y.U.F.C.X # # # # # # # $ # # $ $ # $ $ ",
"* * * * *   * *   s.z.Z.B.-XiXdX2XdX-XW.8XbX: : 0.VX1 6.bXa.i.G.2XdXdX2XdXdXdXiXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiX(.~.F.F.U.F.P.$X# # # @ # # # $ # $ # # $ $ $ $ ",
"* * * *   * *   * * m.N.Z.V.2XdXiX2XdXiX2X2X-XQ.W.I.I.W.j.u.].Y.2XdXdXdXdXdXdXdXdX2XdXdXiXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiXdXdXdXMXY.H.Y.(.F.Y.^.1.# @ # # # # # # # $ # $ # $ $ $ ",
"* * * * * *   *   * s.z.B.z.Y.iX2XdX2XdXdX2XdX2XdX2XdX2XdXI.>XW.U.2XdXdXdXdXdXdXdXdXdXiXdXdXdXiXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiXdXdXdXdXdXdXiXP.~.P.Y.Y.H.H.p.@ # # # # # # # # # $ # $ # $ $ $ ",
"* * * *   * * *   * * j.Z.Z.M.I.dX2XdXiXdXdX2XdXdX2XdXdX2XdX2Xl.I.U.2XdXdXdX2XdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiXdXdXdXdXdXdXdXiXMX~.P.Y.~.Y.~.oX@ # # @ # # # # # # $ # $ # $ $ $ $ ",
"* * * * * *   * *     pXl.N.Z.M.-XiXdX2XdX2XdXdX2XdXdX2XdXdXdX2Xl.U.U.2XdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiXdXdXdXiXdXdXiXdXiXMXP.P.~.I.P.P.$X@ # # @ # # @ # # # # $ # # $ $ # $ $ ",
"* * * *   * *   *   * * 3X7XZ.Z.B.-XiXdX2XdX2XdXdX2XdXdXdXdX2XdXI.V.I.I.[.dXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiXdXdXiXdXdXdXdXdXiXMX(.P.P.(.U.~.XX+ # @ # @ # # # # # # # # # $ # $ # $ $ ",
"* * * * * *   * *   *   9.c.7XZ.B.V.[.dX2XdXdX2XdXdX2XdXdX2XdXdX2XN.I.P.U.2XdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiXdXdXiXdXMX(.P.P.U.(.~.#X@ @ # @ # @ # # @ # # # # $ # # $ # $ $ $ ",
"* * * * 9.* *   *   *     AX>X7XB.F.V.2XdXdX2XdXdX2XdXdXdXdX2XdXdX2Xl.I.P.[.dXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiXdXiXdXdXdXiXMXP.~.I.[.P.~.#X@ @ # @ # @ # # @ # # # # # $ # # $ # $ $ # ",
"* * * * * * *   * *   *     p.m.N.V.P.G.[.2XdXdX2XdXdX2XdX2XdXdXdXdXG.V.I.P.[.dXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiXdXdXdXdXdXiXdXdXdXdXdX[.(.~.Y.U.[.P.~.OX@ @ @ # @ # @ # @ # # # # # # # # $ # $ # $ $ ",
"* * * * *   * *   *   *     * * j.N.V.I.P.[.2X2XdXdX2XdXdXdX2XdXdX2X2X>XI.P.U.2XdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiXiX(.~.~.P.[.U.~.H.f.@ @ # @ @ # @ # # # @ # # # # # # # # $ # $ $ $ ",
"* * * * * * * * *   *     9.      SXV.V.I.I.U.P.(.[.iXiX2X2XdXdXdXdXdXW.l.I.P.[.dXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiXdXdXiXdXdXdXdXdXdXdXdXiXdXdXiXMX(.U.U.U.iX(.~.B.pX@ @ @ @ # @ # @ # @ # # @ # # # # # # $ # # $ $ $ ",
"* * * * *   *   * *   * *       *   &XN.V.W.U.U.P.(.P.U.[.iXdXdX2XdXdX2Xm.I.(.(.[.dXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiXdXiXdXdXdXiXdXdXdXiXdXdXiXiXdXdXdXdXMX[.iX[.[.iX[.H.F.T.X @ @ @ # @ @ @ @ # @ # @ # # # # # # # # # # $ # $ $ ",
"* * * * * * * *   *       *           AXj.N.G.I.[.I.P.U.[.[.dX2XdXdX2XdXU.>XP.(.[.[.dXdXdXdXdXiXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiXdXdXdXdXdXdXdXdXdXdXdXdXiXiX[.[.2X[.~.B.J.f.@ @ @ @ @ @ # @ # @ # @ # @ # # @ # # # # # $ # # $ # $ ",
"* * * * *   * * *   * * *     *         . s.l.N.G.I.[.U.[.dX2XdXdXdXdX2XdX>XY.U.(.[.iXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiXiX[.2XiXP.J.C.9X. @ @ @ @ @ @ @ @ @ @ # @ # @ # # @ # # # # # # $ # # $ $ # ",
"* * * * * * *   * *     *   *                 3X>Xl.G.I.2X[.2XdX2XdXdXdX2X-Xj.I.U.[.[.dXdXdXdXiXdXdXdXdXiXdXdXiXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiX2X~.J.Z.#XDXO @ @ @ @ @ @ @ @ # @ @ # @ # @ # # @ # # # # # # $ # # $ $ # ",
"* * * * * * * * *   * *       *             .   AXSX>X>XN.P.-X[.dX2XdX2XdXdX>XG.(.U.MX[.dXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiXiXU.C.B.J.T.DXO + @ + @ @ @ @ @ @ @ @ # @ @ # @ # @ # # # @ $ # # # # $ # # $ $ ",
"* * * * * *   *   9.*   *   9.  *             .   .   8Xm.m.>XN.I.U.2X2XdX2XU.eXU.U.MX[.iXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXdXiXMXF.^.M.^.FX8.O + @ O @ @ @ O @ @ @ @ @ # @ @ @ # @ # @ # # # @ # # # # $ # # $ # $ ",
"* * * * * * * * *   *   *         *         .   . .   . . pXSXm.>Xm.z.W.U.2X2XeXY.U.[.(.[.2XdXdXdXiXdXdXdXdXiXdXdXdXdXdXdXdXdXdXdXdXdXdXdX-XMXC.B.^.Z.sXf.7.+ @ O @ O @ @ O @ @ @ @ @ @ @ @ @ # @ # @ @ # @ # # # # @ $ # # $ # # $ # ",
"* * * * * 9.* * * *   *   *   *                 .   . . . . . . pXSXm.m.>X>XN.N.}.U.[.[.(.iXiXdXdX2XdXdXdXiXiXdXdXdX2XdXdX2XdX2X2X-XMXI.~.H.B.B.T.f.p.O + + @ O O @ @ @ O @ @ @ @ @ @ @ @ @ @ @ @ # # @ # @ # # # # # # # # # # $ # $ ",
"* AX* * * * *   *   * *   *     *             .     . . . . . . . . . AXs.eXm.>Xb.W.U.[.U.MXiXiX2X[.2XiX2X2X2X-X[.iX-X[.U.-XMXP.(.(.Y.F.k.OXg.7.+ O O + O @ O @ O @ O @ @ @ O @ @ @ @ @ @ @ # @ @ # @ # @ # # @ # # # # # # $ # $ # # ",
"* * * * * * * * * *   *   *       *               .   . . . . . . . . X . . .   9.j.I.[.[.(.[.[.Y.Y.W.P.I.I.(.U.U.I.(.I.Y.F.V.M.9Xf.pXy.O O O O O O O + O + @ O @ O + @ O @ @ @ @ @ @ @ @ @ @ # @ @ # @ # @ # # # # # # # # # # $ # $ ",
"* AX* * * * *   *   *   *   *   *           .   .   . .   X . . . . X . X . X X X 3.I.U.[.[.P.[.P.ZX3XZX3Xh.ZXh.3Xf.g.g.8.7.o O O o 1.o O O O O O O O O + O + O @ + O @ @ O @ @ O @ @ @ @ @ @ @ # @ @ # @ # # # @ # # # # # # $ # $ # ",
"* * AX* *   * * * *   *   *       9.                .   . . . . X . . . X . o . X + >XU.[.[.(.U.[.#Xo o X o o o o o o o O o O o O 1.o O o O O O O O O + O O @ O @ O @ O @ @ + @ @ @ @ @ @ @ # @ @ # @ # @ # @ # # # # # # # # # # $ # ",
"* AX* * * * *   * *   * *     *               7.      .   . . X . . . X . . X X X X 1 I.U.[.[.U.U.[.oXX o o o o X o o O o o o O o o O O O o O O O + O O + O + O + @ O @ O @ @ O @ @ @ @ @ @ @ # @ @ # @ # @ # # @ # # # # # # $ # # $ ",
"* AX* * * * * * *   *   * *       *               .   . . . . . . . X . . X . X X X # >XI.U.[.[.MXU.P.GXX X o o o o o o o o O o O o O o O O O O O O O + O O + @ O + @ O @ O @ @ @ @ @ @ @ @ @ @ # @ @ # @ # @ # # # # # # # # # $ # # ",
"* AX* * * *   * * * * *   *   *                     .   .   . . . X . X . X . X X X X 1 I.U.U.[.MX(.U.V.. o o o o o o o o o o o O O o + o O O O O O O + O + O + @ O + @ @ O @ + @ @ @ @ @ @ @ @ @ @ # @ # @ # # # @ # # # # # $ # $ # ",
"* AX* * * * * * *   *   *   *     *             . .   .   . . . . . . X . X . X X X X # 7XP.U.[.[.MXP.(.sXX o o o o o o o O o O o o + o + o + o + O O O + O O @ O + @ O @ @ @ @ O @ @ @ @ @ @ # @ @ # @ # @ # @ # # # # # # # # $ # # ",
"* AX* * * * *   * * * *   *                             . . . . . . . X . X . X X o . o u.Y.P.P.U.MXMXP.P.ZXo o X o o o O o o o + o o + o O O + o + O O + O O + + O + @ O @ O @ @ @ @ @ @ @ @ @ # @ @ # @ # # @ # # # # # # # # # $ # ",
"* AX* * * * * * *   *   9.* * *   9.*             .   .     . . . . . . X . X . X X X X , G.H.P.(.MXU.P.P.H.pXX o o o o o o O o o O o O O o O O + O O O + O O @ O @ O + @ O @ @ O @ @ @ @ @ @ @ @ # @ @ # @ # # @ # # # @ $ # # $ # # ",
"* AX* * * * * * * * * *       *                 7.    . . . . . . . . . X . X . X X X X O }.H.~.P.P.MX(.P.H.k.  o o o o o o o + o O O o O O O O O O O + O O + O @ O @ + @ @ @ O @ @ @ @ @ @ @ @ @ @ # @ # # @ # # @ # # # # # # # $ # ",
"* AX* * * * * * *   *   * *   *     *                       . . . . . . X . X X . X X X o 3.B.C.H.P.P.P.P.P.^.pXX o o O o o o o O o o + o O O o + o + O + O + @ O + O @ O @ O @ @ @ @ @ @ @ @ @ # @ @ # @ @ # @ # # # # # # # # # $ # ",
"* AX* * * * * * * * * * *   *                       . . . . .   . . . X . . X X X X X . X @ SXsX^.C.~.P.~.H.k.HX:Xo o o o o O o o O o O o O O + o + O O + O O O @ O @ O @ @ O @ @ + @ @ @ @ @ @ @ # @ @ # # @ # # @ # # # # # # # $ # ",
"* AX* * * * * * *   *   * *   * *   *             .         . . . . . . . X . X . X X o X . 3.FX!.J.~.~.~.F.#X% a.pXo o o o o O o O o + o O o + O O O O + O + O + @ O @ O @ @ O @ + @ @ @ @ @ @ @ @ # @ @ @ # # @ # # # # # # # # $ # ",
"* AX* * * AX* * * * * *   *                           . . .   . . . . . . . X . X X . . o X + g.FXXXJ.F.C.sXOX1X;Xn.* o O o o o O o + o O O O O O O O O + O O + + O @ O @ O @ @ @ @ @ O @ @ @ @ # @ @ # @ # @ # # @ # # # # # # # # $ ",
"* AX* * * * * * *   *   * * * *   *   9.            .     .   . . . . . . X . X X X X X X X X , 8.f.zXM.#X9.;X9Xn.c.n.o o o O o o + o o o + o + o + O O + O + O @ O O @ O @ O @ O @ + @ @ @ @ @ @ @ @ @ # @ # # @ # # # # @ # # $ # # ",
"* AX* * * * * * * * * * *     *                   7.* . .   . . . . . . . . X . X X . X X X X @ ;X;XBXp.BXHXnX;XOXM.!.p.o O o o o O o + o + o O O O O O + O O + O @ O @ + @ @ O @ @ @ @ @ @ @ @ @ # @ @ # @ # @ # # @ # # # # # # $ # ",
"AX* * AX* * * * * * *   * * *   *   *               .     .   . . . . . X . . X . X X X X X X X ;X;XHX;XnXnXnXnX;X1X{.BXo o o O o O o O o + o O O O O O + O + O @ O @ O @ O @ @ @ O @ @ @ @ @ @ @ @ @ # @ @ # # @ # # # # # # # # # # ",
"* AX* * AX* * *   * * *   *   *       *               .   .   . . . . . . . X . X X X X X X X X y.HXnXnXnXnXHX;X;X;XBX;X7.O o o o O o O o + o O O O O O O + O + O @ O @ O @ O @ @ @ @ @ @ @ @ @ @ # @ @ # @ @ # # @ # # # @ $ # # $ # ",
"AX* * AX* * * * * * 9.* *   9.* * *                 .     . .   . . . . . . . X . X X X X X X X . ;XnXnXJXnXnXHX;XHX;X;X7.O o o O o o + o + o O O o + O O O + O O O @ O @ O @ O @ + @ @ @ @ @ @ @ @ @ @ @ # @ # @ # # # @ $ # # # # # ",
"* AX* * AX* * * * * *   *   *         *                 .   . . . . . . . . X . X . X X X X X o X 1.& nXJXJXnXJXHXHXHX;X7.o o O o O o O o O o + O + o + O + O + O + O @ O @ @ O @ @ O @ @ @ @ @ @ @ # @ # @ # @ # # @ # # # # # # # # ",
"AX* * * * * AX* * *   * * *   * *   *                 .   .     . . . . . . . X . X X X . X X X X X # a.HXnXnXHXJXnX;X{.o o o o O o O o O o + O o + o + O + O + + @ O @ O + @ @ O @ @ @ @ @ @ @ @ # @ @ @ # @ @ # @ # # # # # # # # # ",
"* AX* AX* * * * * * * *   *   *         *         7.* .     7.  . . . . . . X . . X . X o X X X o X X X 9.8.BXCX{.{.s.7.o o o o o O O o O o O o + o + O O O + O O O @ O @ O @ O @ @ O @ @ @ @ @ @ @ @ # @ @ # @ # # # @ # # # # # # # ",
"AX* * AX* * * * * * * * * *   *   * *                 .   .   . . . . . . . . X . . X X X X X X X o X X o o 7.O o o o o O o o o O o O o O o + o + O O O O + O + O O @ O O @ @ @ O @ @ @ @ @ @ @ @ @ # @ @ # @ # @ @ # # # # # # # # # ",
"* AX* * AX* * * * * *   * * *   * *     9.              .   .   . . . . . . X . . X . X X X X X X X X o X o o X o o o o o o o o o o O o O O O o + O O O O O + O @ O O @ O + O @ @ O @ @ O @ @ @ @ @ @ @ # @ # @ # @ # # @ # # # # # # ",
"AX* AX* * * * AX* * * * *   *     *       *           .   .   .   . . . . . X . . X X . X X X X o X X X o X o o X o o o o o o O o o O o O o + o + O o + + O O O O O @ O @ O @ @ O @ @ @ @ @ @ @ @ @ # @ @ # @ # @ # @ # # # # # # # # ",
"* AX* AX* * * * * * *   * *   * *     *                 .   .   . . . . . . . X . . X X X X X X X o X o X o X o o X o o o o O o o o O o O o + o O O O o + O + O + O + O @ O O @ @ @ O @ @ @ @ @ @ @ @ @ # @ @ # @ # @ # # # # # # # # ",
"* AX* * AX* * * * * * * * * *   *       *   * 7.*     7.* .   .   . . . . . X . . X . X X X X X X X X X o X o X o X o o o o o o O o o O o O O o + o + O + O O O + O @ O + @ O @ O @ @ O @ @ @ @ @ @ @ # @ @ # @ # @ # @ # # # # # # # ",
"AX* AX* * AX* * * * * *   * * 9.*   *                   .     .   . . . . . . X . . X . X X X X X o X o X X o o o o o o o o o o o O o O o O o + o + O o + O + O O @ O @ O O @ + @ O @ @ @ O @ @ @ @ @ @ @ # @ # @ @ # # @ # # # # # # ",
"AX* * AX* * AX* * * * * * *   *   *   * *                 .   .   . . . . . . X . . X X . X X X X X o X X o X o X X o o o o o o o o O o O o + o + O o + + O O O + O O @ O @ O @ @ @ @ O @ @ @ @ @ @ @ # @ @ # @ # # @ # # @ # # # # # ",
"AX* AX* * AX* * * * * *   * *   *         *             .   . .   . . . . . . . . X . X X . X X o X X X o X o X o o o o o o o o o o o O o O o + o O O O O O O + O O @ O @ O @ O @ O @ @ @ @ @ @ @ @ @ @ @ @ # @ # @ # @ # # @ $ # # # ",
"AX* * AX* * * * * * * * * * * *   * *     *               .   .   . . . . . . . X . . X X X . X X o X o X X o o X o X o o o o o o o O o O o O O o + O o + O O O @ O O O @ O @ O @ @ @ O @ @ @ @ @ @ @ # @ @ # @ # @ # # @ # # # # # # ",
"AX* AX* * AX* * * * * * * *   * *     *     * 7.*       7.* .   .   . . . . . . X . X . X X X X X X X X X o X o o X o o o o o o o o O o o O o O O O O O O + O O O O + O @ O + @ O @ @ @ O @ @ @ @ @ @ @ # @ @ # @ # @ @ # # @ # # # # ",
"AX* * AX* * AX* * * * * * * *   *   *   *   *     7.*     .   .   . . . . . . . . X . X . X X X X X o X X X o X o X o o o o o o o o O o O o o O o + o + o + O + O + O @ O O @ O @ O @ @ @ @ @ @ @ @ @ @ @ @ # @ # @ # # # @ # # # # # ",
"AX* AX* * AX* * AX* * * *   * *   * * 7.*                   .   . .   . . . . X . . X . X X . X X o X o X o X o X o o o o o o o o o o O o O o + o + o + O O O O + O O + @ O O @ @ O @ O @ @ @ @ @ @ # @ @ @ @ # @ # @ # @ # # @ # # # ",
"AX* AX* * AX* * * * * * * * *   *     *   *             7.      .   . . . . . . X . . X . X X X X X X X o X o X o X o o o o o o o o o o O o O o + o + O o + O + O @ O O @ O @ O @ @ O @ @ O @ @ @ @ @ # @ # @ # @ # @ # # # # # @ # # ",
"AX* AX* AX* * * * * * * * * * *   * * *     * *             .   . . . . . . . . . X . X . X X . X X o X X X X o o o X o o o o o o o o O o o O O o + O o + + O O O O O @ O @ O + @ O @ @ @ @ @ @ @ @ @ @ @ @ @ # @ # @ # @ # @ # # # # ",
"AX* AX* * AX* * AX* * * * *   * *       *                   .   .   . . . . . . . . X . X X X . X X X o X o X o X o o o o X o o o O o o o + o o + o O + O o + O + + O O + O @ O @ @ O @ O @ @ @ @ @ @ @ # @ @ # @ # @ # # @ # # @ # # ",
"AX* AX* AX* * AX* * * * * * * *   * * *     *             7.      .   . . . . . X X . X X . X X X X X X o X o X o o X o o o o o o o o O o o O o + o + o + O O O O + O + @ O @ O O @ @ @ @ O @ O @ @ @ @ @ # @ @ # @ # @ # # # # # # # ",
"AX* AXAX* * AX* * * * * * *   * *             *               . .   . . . . . . . . . . X . X X X X X o X X X o X o X o o o o o o o O o o O o O o O O O o + O O + O O O + @ O O @ O @ O @ @ @ @ @ @ @ @ @ @ # @ @ # @ # # @ # @ # # # ",
"AXAX* * AX* AX* * * * * * * * *   * * * * *                 .   .   . . . . . . . X . X . X X . X X X X X X o X o o X o o o o o o o o o O o O o + o + o + O O O O @ O O @ O + @ O @ @ O @ + @ @ @ @ @ @ # @ @ @ # @ # @ # # # # # @ # ",
"AX* AX* AX* * AX* * * * * *   * * *           *   7.*         .   . .   . . . . . X . X . X X X . X X o X X X o X o o X o o o o o o o o O o O o O o + O O O O O O O O O @ O @ O @ @ O @ @ @ @ @ @ @ @ @ @ # @ @ @ # @ # # @ # # # # # ",
"AXAX* AX* AX* * * * * * * * * *   * * * *   * 7.* *   7.* .     .   . . . . . . . . X . X X X X X X X X o X X o X o X o o o o o o o o o o O o O o + o O o + O O O + + O O @ o @ O + @ @ O @ O @ @ @ @ @ @ @ # @ # @ # @ # # @ # @ # # ",
"AX* AX* AX* AX* AX* * * * * * * *       *     *             7.      .   . . . . . X . X . . X X X X X X X o X X o o o X o o o o o o o o O o o O o + o + O O O O O + O O O @ O @ O @ O @ @ @ @ O @ @ @ @ @ @ @ # @ # @ # @ # @ # # # # ",
"AXAX* AX* AX* * * * AX* * * *   * * * *   *     *               . .   . . . . . . . . X . X X . X X X X X o X o X o o o X o o o o o o o o O o O o O o + O o + O O + O + O @ O @ O + @ @ O @ @ @ @ @ @ @ @ # @ @ @ @ # @ # # # # # @ # ",
"AXAX* AX* AX* AX* * * * * * * *   *   *     *             .   .   .   . . . . . . . X . X X . X X X X X X X o X X o X o o o o o o o o O o o O o O o + o O O O O O + O O @ O @ O O @ @ O @ O @ @ @ @ @ @ @ @ # @ # @ # @ # @ # @ # # # ",
"AXAX* AX* AX* * AX* * * * * *   * * *   *     *                 .   .   . . . . . X . X . . X X X . X o X X X X o X o o X o o o o o o o o O o O o O o + O o + O O O + O O O O @ O @ O @ @ @ @ O @ @ @ @ @ @ @ @ @ # @ # @ # # # @ # # ",
"AXAXAX* AX* * AX* * * * AX* * * *   * 9.* * 7.* *             7.      . . .   . . X . X . X X X X X X . o X o X X o o X o o o o o o o O o o O o O o + o O O O O O O + O O @ O + O @ @ O @ O @ @ @ @ @ @ @ @ # @ # @ # @ # # @ # # # # ",
"AXAX* AX* AX* AX* * * * * * * * * *       * *     *               . .   .   . . . . X . X . X . X X X X X X X o X o X o o o o o o o o o o o O o O o O O O O O o + + O + O O @ @ O @ O @ @ @ O @ @ @ @ @ @ @ @ @ @ # @ # @ # # @ # @ # ",
"AXAXAX* AX* AX* * * AX* * * *   * * * *   *                     .   . .   . . . . . . X . X X X X . X X X o X X o X o o X o o o o o o o O o o O o O o + o + O + O O O + O + O O + O @ O @ @ @ O @ @ @ @ @ @ # @ @ # @ # @ # @ # # # # ",
"AXAX* AX* AX* * AX* * * * * * * *     *   *   *   *           7.      .   . . . . . X . . X . X X X X X X X o X X o X o o X o o o o o o o O o o + o O o + o + o + O O + O O @ @ O @ O @ O @ @ @ @ O @ @ @ @ @ # @ @ # @ # @ # # # # @ ",
"AXAXAX* AX* AXAX* * * * * * * * * * * *   *           7.* 7.*     . .   . . . . . . . . X . X X . X X X X X X o X X o o X o o o o o o o o o O o O o + o O O O + o + O + O @ O O O @ O @ @ O @ + @ @ @ @ @ @ # @ @ @ @ # @ # # @ # @ # ",
"AXAXAX* AX* AX* * AX* * * * * *   *   * *   *   * * 7.*   *     .   .   . . . . . . . X . . X . X X X X X o X X o X X o o X o o o o o o O o o O o o + o + o + o + O O + O O @ @ O @ O @ O @ @ @ @ @ @ @ @ @ @ @ # @ # @ # @ # # @ # # ",
"AXAXAX* AX* AX* AX* AX* * * * * * * *   *   * 7.*   *       .     .   . .   . . . . X . X . X X X X X X X X X X X o o X o o o o o o o o o o O o O o O o + o + O + O O O O O + O O @ O @ @ O @ O @ @ @ @ @ @ # @ @ @ # @ # @ # # # # # ",
"AXAXAX* AX* AX* * * * * AX* * *   * *   * *   *   *             .   .   .   . . . . . X . X . X . X X X X o X o X X o o X o o o o o o o o o O o O o + o O O o + o O O + O @ O @ O @ O @ O @ @ @ O @ @ @ @ @ @ @ # @ @ # @ # @ # # @ # ",
"AXAXAX* AX* AX* AXAX* * * * * * * * *     *   *                   .   .   . . . . . . . X . X X X X . X X X X X o X X o o o X o o o o o o o o O o O o + o + O O + O O O + O O O + O @ O @ @ O @ @ @ @ @ @ @ @ @ @ # @ # @ # # @ # # @ ",
"AXAXAXAX* AX* AX* * AX* * * * * * * * *   *       *             7.      .   . . . . 7.. . . . X . X X X X X o X X o X o X o o o o o o o o O o o O o + o O o O O O O O O + O + @ O @ O @ O @ @ @ + @ @ @ @ @ @ # @ @ @ # @ # @ # # # # ",
"AXAX* DXAX* AX* AX* * * * * * * *   * * *   *   *   *               .   .   . . . . . . . X . X X . X X X X X o X X o X o o X o o o o o o o o O o O o O o + o + O O O O + O O O @ O @ O @ O @ @ O @ @ @ @ @ @ @ @ # @ @ # @ # @ # # @ ",
"AXAXAX* AXAX* AX* * AX* * * * * * * *   * *   * 7.*           7.* .     . . . . . . . . X . . X . X X X X X X X o X X o o X o o o o o o o O o o O o + o + o + O O O O O O + O @ O + O @ O @ O @ @ @ @ @ @ @ @ # @ @ @ # @ # @ # @ # # ",
"AXAXAX* AXAX* AX* AX* * * DX* *   * * *   *   * *   *             .   .     . . . . . . . X . X X X X . X X o X X o X o X o o o o o o o o o o o O o o + o O O O O o + O + O O @ O @ O @ + @ @ @ @ O @ @ @ @ @ @ @ # @ @ # @ # # # @ # ",
"AXAXAX* AXAX* AX* * * AX* * * * * * *   * *   * 7.*   *           .   .   . . . . . . . . X . . X . X X X X . o X X o X o X o o o o o o o o O o o O o O o + o O O + O O + O O O O O @ O @ O @ O @ @ @ @ @ @ @ @ @ @ @ # @ # @ # # # @ ",
"AXAXAX* AXAX* AX* AX* * * * * * * * *   *   * *   *                 .   . .   . . . . . X . X . X X X X X X X X o X o X o o o X o o o o o o o O o O o O o + O O O o + O + O O @ O @ O @ O @ @ @ @ @ @ O @ @ @ # @ # @ @ # @ # @ # @ # ",
"AXAXAX* DX* AX* AX* * AX* * * * * * * * *   *         *         7.      .   . . . . . . X . . X . X X X X X X X X X X o X o X o o o o o o O o o O o o O O o + o + O O O + O O O + O @ O @ O @ O @ O @ @ @ @ @ @ @ @ @ # @ # @ # @ # # ",
"AXAXAX* DXAX* AX* * AX* * * * * * * *   *   * *   *                 .   .   . . . . . . . X . . X . X X X X X o o X X o X o o o o o o o o o o o O o O o O O o + O O O O + O + O @ O + + + @ @ O @ @ @ @ @ @ @ @ # @ # @ # @ # @ # # @ ",
"AXAXAX* DX* AX* DX* * * AX* * * * *   * * * 7.DX    *               .     . . .   . . . X . X . X X X . X X X X X X o X o o X o o o o o o o o o O o O o O o + o + O o O + O O + O @ O @ O @ O @ @ O @ @ @ @ @ @ @ @ @ @ # @ # @ # # @ ",
"AXAXAXAX* DX* AX* AX* AX* * * * * * * * * * *   *       *             .   .   . . . . . . X . X . . X X X . X o X o X o X o X o o o o o o o o o o O o O o + o + O O O O O O + O @ O @ O @ O @ @ O @ @ @ @ @ @ @ # @ @ @ # @ # @ # # # ",
"AXAXAX* DXAX* AX* * AX* * * * * * * * *   *   *   *               7.* .   .   . . . . . . X . . X X X X . o . X X X o . o o o o o o o o o o o O o o O o O o + o + O O O O O O + O + O @ O @ O @ @ @ @ @ @ @ @ @ @ # @ @ # @ @ # @ # @ ",
"AXAXAXAXAX* AX* DX* * * AX* * * * * * * *   *   *   *                 .   .   . . . . . . X . X . X . X X X X X o X X o X X X o X o o o o o o o O o o + o O o + O O o + O O + O O @ O O @ + @ O @ @ O @ @ @ @ @ @ @ # @ @ # # # @ # # ",
"AXAXAX* DXAX* AX* AXAX* * * DX* * *   * *   *   *     *               7.    .   . . . . . X . . X . X X . o . X X o X X o o o o o o o o o o o o o O o o O o + o O O + O O O O + O @ O @ O + @ @ O @ @ @ @ @ @ @ @ @ @ # @ @ @ # @ # @ ",
"AXAXAXAXAXAXAX* AX* * * DX* * * * * * * * *   *   *     * 7.*       7.*     .   . . . . . X . X . X X X . X X X X X o o X X X o X o o o o o o O o o O O o + o + o O O O + O + O O @ O @ O + @ O @ O @ @ @ @ @ @ @ @ # @ @ # # @ # @ # ",
"AXAXAXAX* AXAXAX* AXAX* * * * * * * * * *   * *   *   *                 .   .   . . . . . . . X . X . X X . o . o X X X o o o o o o o o o o o o o O o o + o + o + O O o + O O O O @ O O @ O @ @ @ @ O @ @ @ @ @ @ @ @ @ @ # @ # @ # @ ",
"AXAXAXAXAXAX* AX* AX* * AX* * * * * * * * *   *   * 7.*   *       7.* .   .   . . . . . . . . . X . X X X X X X X X o o X X X o X o o o o o o O o o o O o O o O O O O O O O O + O O @ @ O @ O @ O @ @ @ O @ @ @ @ @ # @ @ # @ # @ # # ",
"AXAXAXAXAX* DX* DX* AX* * AX* * * * * * * *   *   * *                   .   .   .   . . . . X . . X X X . X X X X X X X o o o o o o o o o o o o o O o O o O + o O O O O O O + O + O O O @ O @ @ @ O @ @ @ @ @ @ @ @ @ # @ @ # @ # @ # ",
"AXAXAXAX* DX* AX* AX* AX* * * AX* * *   * * *   *     *   *           7.    .   . . . . . . . X . . X X X . o . o . o o X X X o X o o o o o o o o o O o o O o + O o + o + O O + O O @ O @ O O @ O @ @ O @ @ @ @ @ @ @ @ # @ # @ # @ # ",
"AXDXAX* DXAXDX* DX* * * * DX* * * * * * *   * *   *                     .   .   .   . . . . X . X . X . X . X X X X o . o X o o o o o o o o o o O o o O o O + o O O O O O O O O + O @ O O @ + @ @ O @ @ @ @ @ @ @ @ @ # @ @ # @ # @ # ",
"AXDXAXAXAX* AXAXAX* DX* AX* * * * * * * * *   * *   * *   * 7.*         7.    .   . . . . . . X . X . X X X X X X X X o X o X o X o o o o o o o o o O o O o o + o O O O o + O + O O @ O @ O O @ @ O @ @ O # @ @ @ @ @ @ @ @ # @ # @ # ",
"AXDXAX* DXAXAX* AX* AX* * * AX* * * * *   * * *   * 7.* *   * 7.*           .   . . . . . . . X . . X X X . X X X o . o X o X o o X o o o o o o O o o O o O + o O o + O O O O O + O @ O O @ @ O @ @ O @ @ O # @ @ @ @ # @ @ # @ # @ @ ",
"AXDXAXAXAXAXAX* AX* AXAX* * * * * * * * * * *   * * *       *           . .   .   . . . . . . . . X X X . o . X X o . o . o X o X o o o o o o o o o O o o O o + o + O O O O O + O O O @ O O @ + @ O @ @ @ @ O # @ @ @ @ # @ @ # @ # # ",
"AXDXAXAX* DXAXAX* AX* AX* * DX* * * * * *   * *   *   *     * 7.*         .   .   . . . . . . . X . . . X . o . o . o X o X X o o o o o o o o o o o o O o O o O O o + o + o + O + @ o @ @ O O @ @ @ O @ @ @ @ O # @ @ @ @ # @ # # @ @ ",
"AXDXAXAXAXAX* AXAX* AX* AX* * * * * * * * *   * *   *   *                 .   . .   . . . . . X . X . X X . X X X X X X o X o X o X o o o o o o o O o O o O o + o + o + O O O + O O O O @ O @ O @ O @ @ O @ @ @ @ @ @ # @ @ @ @ # @ # ",
"AXDXAXAXAXAXAXAX* AX* AX* * AX* * * * * * * *   *   *     *             7.      .   . . . . . . X . X . X X . o . X o X X o X o o X o o o o o o o o o o O o O o O O O O O O O O + O @ O O @ O @ @ O @ @ @ @ @ @ @ @ @ @ # @ # @ # @ @ ",
"AXDXAXAXAX* AXAXAXAX* AX* * AX* * * * * * *   * *   *   *                   .   . . . . . . . X . . X X . X X . o . X o X X o X o o X o o o o o o O o O o o O + o O O o + o + O + O O @ O @ O O @ @ O @ @ O @ @ @ @ @ @ @ @ @ # @ # # ",
"AXDXAXAXAXAXAXAX* AXAX* AX* * AX* * * * * * *   *   *   *   *           7.      .   . . . . . . . X . X X . X X X X X X o X X o X o o o o o o o o o o O o O o o + o O + O O O O O @ o @ O @ O @ O @ @ O @ @ @ @ @ @ @ @ # @ # @ # @ @ ",
"AXDXAXAXAXAX* DX* AX* AX* * AX* * * * * * * *   * *   * 7.*   *             .   . .   . . . . . X . X . X X X . X X o . o X o X o X o o o o o o o O o o O o O O o + o + o + O O O O O O @ O + @ O @ @ @ O @ @ @ @ @ @ # @ @ @ # @ # @ ",
"AXDXAXAXAXAXAXAXAX* AX* AX* * AX* * * * * * * *   *   * *   *             7.    .   . . . . . . . X . . X X . o . X X o X o X o X o X o o o o o o o o o O o o + o O O O O o + O + O @ o @ O @ O @ O O @ @ @ @ @ @ @ @ @ @ # @ @ # # @ ",
"AXDXAXAXAXAX* DX* AXAX* AX* * * * * * * * * *   * *   * 7.*   *             .   .   . . . . . . X . . X X . o . X X X X X o X o X o o o o o o o o o O o o O o o + o + o + O O O + O O @ O @ O O @ @ @ O @ + @ @ @ @ @ @ @ @ # @ @ # @ ",
"AXDXAXAXAXAXAXDXAX* AX* AX* AX* * DX* * * * *   * *   * *                     .   .   . . . . . . X . X . X . X X X X o . o X X o o X o o o o o o o o O o o O O o O O o + o + O O @ o @ O @ O @ O @ @ O @ @ @ O @ @ @ # @ @ @ @ # @ # ",
"AXDXAXDXAX* DXAXAX* AXAX* AX* AX* * * * * * * *   * *     *   *           7.    . .   . . . . . X . . X . X X X X X X X o . o o X o X o o o o o o o o o O o O o + o O O O O O O O O O O @ O O @ O @ O @ @ O @ @ @ @ @ @ # @ # @ @ # @ ",
"AXDXAXDXAXAXAXAX* AXAX* AX* * * * * * * * * * *   *   *     *                     . . . . . . . . X . X . X X . X X X o . o X o o X o X o o o o o o O o o O o O o + o O + o + O O @ O O + @ O @ O @ @ O @ @ @ @ @ @ @ @ @ @ @ # @ # @ ",
"AXDXAXDXAXAX* GXAX* AX* AX* AX* * * * * * * * *   * *   * 7.* *             . .   .   .   . . . . . X . X . X X X . o . o X X o X o o o o o o o o o o o o O o O O o O o + O o + O O + O O + + + + + @ @ O @ @ @ @ @ @ @ @ # @ @ # @ @ ",
"AXDXAXDXAXAXAX* GX* AX* AX* * AX* * * * * * * *   * *   * *     * 7.*         .   . .   . . . . . X . . X X . X X X X o . o X X o X o X o o o o o o o O o o O o o + O O O O O o + O @ o @ O @ O @ O @ O @ @ O @ @ @ @ @ @ @ # @ @ # # ",
"DXAXAXDXAXAXAXAXAXAX* AX* AX* * AX* * * * * * * *   * *       *   *       7.* .   .   . . . . . . . X . X . X . X X X X o . o o . o o X o o o o o o o o O o o O O o O o O + o @ O O O @ o @ O @ O @ @ @ O @ @ @ O @ @ @ @ @ @ # @ @ @ ",
"DXAXAXDXAXAXAXAXAX* GX* AX* AX* * * * * * * * *   * *   *     * 7.*             .   .   . . . . . . . X . X X . X X X o . o X X o o X o X o o o o o O o o O o O o + o + o + O o + O O O + O O O @ O @ O @ @ O @ @ @ @ @ @ # @ @ @ # @ ",
"DXAXDXAXAXAXAXAXAXAX* AX* AX* AX* * * * * * * * *   *   *   *   *             .   .   . . . . . . . X . X . X . X X X X o . o X o X o o o o o o o o o o o o O o O o O o O O O O O O + O O @ @ O @ O @ @ O @ @ @ @ @ @ @ @ @ # @ @ # @ ",
"DXAXDXAXGXAXAXAX* GX* AXAX* AX* * * DX* * * * * * *   *   *       * 7.*       7.    . . .   . . . . . X . X X . X X X X X o X X o o X o X o o o o o o o O o o O o + o + O o + o + O @ O O O + @ O @ O @ @ O @ @ @ @ @ @ @ @ @ # @ # @ ",
"DXAXDXAXAXAXAXAXAXAX* AX* AX* AX* * * * * * * * *   *   *   *     *                   .   . . . . . X . . . X X X . X X X X o X o X o o o o o o o o o o o O o O o O O o O + O O O O O O @ o @ O @ O @ O @ @ @ O @ @ @ @ @ @ @ @ @ # @ ",
"DXAXDXAXGXAXAXAXAX* GX* * AX* * DX* * * * * * * * *   * *     * 7.*             . .   . . . . . . . . X . X . X X X X X X X X o . o o X o X o o o o o O o o O o O o O O o + o + O O O + O + @ O @ O @ O @ O @ @ @ @ @ @ @ @ # @ @ @ @ ",
"DXAXDXAXAXAXAXAXAXAXAX* GX* AX* * * * * * DX*   * *   *   *   *   *         .     .   .   . . . . . X . . X . X X X X X X X o X o X o o X o o o o o o o o O o O o O o + o + o + O O + O O O O @ o @ O @ @ @ O @ @ @ @ @ @ @ @ # @ # @ ",
"DXDXAXGXAXAXAXAXAXAX* AX* AX* AX* DX* * * * * * *   * *   *     *             7.    .   . . . . . . . X . . X X . X X X X o . o . o X o o X o o o o o o O o o O o o + o O O O o + O @ O O + @ O @ O @ @ O @ @ + @ @ @ @ @ @ @ @ @ @ # ",
"DXDXAXAXDXAXAXAXAXAXAXAX* AX* * AX* * * * * * * * *   * *   * 7.*             * .     .   . . . . . X . X . . X . X X X X X o X o X o o X o o o o o o o o O o o O O o O o + O O O O O + O O O @ O @ O @ @ O @ @ O @ @ @ @ @ @ # @ # @ ",
"DXDXGXAXAXGXAXAXAX* GX* AX* GX* * * * * * * * * * * *   *   * *   *             . .   .   . . . . . . . . X X X . o . X o . X o X o o X o o o o o o o o o o O o o O O o + o + o + O O O @ O @ O @ O @ o @ @ @ O @ @ @ @ @ @ @ @ @ @ @ ",
"DXDXAXAXAXGXAXAXAX* GX* AXAX* * AX* AX* * * * * *   * *   *         * 7.*       .     . .   . . . . . X . . X . X . X X . o . o X X o o o X o o o o o o o O o O O o o + o O + O o + O O O O O @ o @ O @ @ O @ @ @ @ @ @ @ @ @ # @ # @ ",
"DXDXGXAXAXAXGXAX* GX* AX* AX* DX* * * * * * * * * * *   *   *   *   *             .   .   . . . . . . . X . X X X X . o X X o . o . o X o o X o o o o o O o o o O o O o + o O O O O O O @ o + @ O @ O @ O @ @ @ O @ @ @ @ @ @ @ @ @ @ ",
"DXDXAXGXAXGX* GX* GXAXAXAX* AX* * AX* * * * * * *   * *   *   *                   7.    . . . . . . . . . X . . X X X . X . o X o X o o X o o o o o o o o o O o O o O O o O O O o + O O O @ o @ O @ O @ @ @ O @ @ @ @ @ @ @ @ # @ # @ ",
"DXDXGXAXAXGXAXAXAX* AXAXAXAX* AX* * DX* * * * * * * *   * *   *     *       .           .   . . . . . X . . X . X X X . o . o X X o . o o X o X o o o o o o o O o O o O O o + o + O O + O O + @ O @ O + @ O @ @ @ O @ @ @ @ @ @ @ @ @ ",
"DXDXGXAXAXDXAXAXAXAXAX* * AXAX* AX* * * * * * * * * * *   *   *   * 7.*           . .   .   . . . . . . X . X . X X X X . X X o X X o o X o o o o o o o o O o o O o O o + o + O o + O O + O O O @ o @ O @ @ O @ @ @ @ @ @ @ @ # @ @ @ ",
"DXDXGXAXAXGXAXAXAXAXAXGX* AX* AX* * DX* * * * * * *   * *   *   *   *           .       . . . . . . . . . . X . X X X X X X X . o X o X o o X o o o o o o o O o o O o + o + o + O O O O O @ O O @ O @ @ o @ @ @ O @ @ @ @ @ @ @ @ # @ ",
"DXDXGXAXAXAXGXAXAX* AXAXAX* AX* AX* * * DX* * * * * *   * *   *     *             7.      .   . . . . . X . . . X X . X X o . o . o X o X o o o o o o o o o o O o O o o O o O O o + O O O O + O @ O @ O @ @ O @ @ @ @ @ @ @ @ @ @ @ @ ",
"DXDXGXAXAXDXAXGX* GX* AXAXAX* AX* * DX* * * * * * *   *   *   *       * 7.*           .   . . . . . . . . X X . X X X . o . o X o X X o o X X o o o o o o o O o o o O O o + O O O O O + O O + O O @ o @ O @ @ O @ O @ @ @ @ @ @ @ # @ ",
"GXDXDXAXGXAXAXGXAX* GXAX* AXAX* DX* * * * * * * * * * * *   *   *   *   * 7.*       .   .   . . . . . . . . . . X . o . X X . o . o X o X o o o X o o o o O o o O O o O O o O O o + O O + O O O @ O @ @ O @ O @ @ @ @ @ @ @ @ @ # @ @ ",
"GXDXDXGXAXAXGXAXAXAX* GX* AX* AX* * DX* * * * * * * *   * *   *   * 7.*           7.    .   . . . . . . . X X . X . X X . o X X o X X o o o X o o o o o o o o o o o O o o + o O O O O O O @ O O O @ O O @ O @ @ O + @ @ @ @ @ @ @ @ @ ",
"DXGXDXGXAXAXAXDXAXAXAXAXAXAXAX* GX* * * * DX* * * *   * *   *   *   *   *                 .   . . . . . . X . . X . X X X . o . X o X X X o o X o o o o o o O o O o O o + o O O O o + O o @ o @ O @ O @ O @ @ O @ @ @ @ @ @ @ @ @ # @ ",
"DXGXDXDXAXAXGXAXAXAX* GX* AX* AX* * AX* * * * * * * * * * *   *   *                 .   . .   . . . . . . . X . X X X . o . X o . o X o X o o o o o o o o o o o o O o O o O O o + O O + O @ O O O O @ O @ O @ @ @ O @ @ @ @ @ @ @ @ @ ",
"DXGXDXDXGXAXAXGXAX* GX* GX* GX* AX* * DX* * * * * * * *   *   *     *   * 7.*         .     .   . . . . . . X . . X . X . o . o X X o X o X o X o X o o o o O o o O o O o + o O + o + o O O + + + @ O @ O + @ O @ @ @ O @ @ @ @ @ # @ ",
"DXGXDXDXAXGXAXAXGX* GXAX* AX* AX* DX* * * * * * * * *   * *   *   *     *           7.    . . . . . . . . . X . . X X X X X . X o X X o X o o o o o o o o o o o O o O o O o O o + O O O + O O O O O @ O @ O @ @ @ o # O # @ @ @ @ @ @ ",
"DXGXDXGXGXAXAXAXGX* GX* GX* GX* AX* * * DX* * * * * * * * *   *     * 7.*               .     .   . . . . X . X . X . X . o . X X o X X o . o X o o o o o o o O o o O o O O O O o O O O O + O + O @ o @ O + @ o # @ @ @ O @ @ @ @ @ @ ",
"DXGXDXGXAXAXGXAXGX* GXAXAXAX* AX* DX* * * * * * * * * *   * *   * *   *   *       7.* .   .   . . . . . . . . X . . X X X X X X X X o X o o o o X o o o o o o o o O o O o O o O O O o + O O @ o @ O @ O @ O @ @ O @ O @ @ @ @ @ @ # @ ",
"DXGXDXGXAXGXAXAXGXAX* AXAXAX* GX* * AX* * DX* * * * * * *   * *   *     *               .   . . . . . . . . X . X X . X X . o . o . o . o . o o o o X o o o o O o o O o o + O o O + O O O O O @ o @ O @ O @ O @ O @ @ @ @ @ @ @ @ @ @ ",
"DXGXDXGXAXGXAXAXGXAXAXAX* GX* * GX* AX* * * * * * * * *   * *   *     * 7.*           .   .     . . . . . . . . X . X X . o . o . o . o o o o X o o o o o o o o O o o O O o o + o + o + O O O O @ o @ O @ O @ @ @ @ O @ @ @ @ @ @ @ @ ",
"DXGXDXGXAXGXAXAXGXAXAX* GX* DXAX* AX* DX* * * * * * * * * *   *   *   * *               .   . . . . . . . . X . . X . X X . X X X o X X X o X o o X o o o o o o o O o O o O O o O + o + O O O O + @ O @ O + O @ O @ @ @ O @ @ @ @ @ @ ",
"DXGXDXGXAXGXAXAXGXAXAXGX* GX* AX* * AX* * DX* * * * * *   * *   *                     7.* .   .   . . . . . X . X . X X . o . X X X o X o X o o X o o o o o o o O o O o O o O O o + O o + O + O O O @ o @ @ O @ @ O @ @ @ @ @ @ @ @ @ ",
"DXGXGXDXGXAXAXGXAXAXAX* GX* GX* GX* * DX* * * * * * * * *   * *   *   *   * 7.*             .   . . . . . . . X . . X . o . X X X X X X X o X o o X o o o o o o o o O o O o O o + O O O O O O @ o @ O @ O @ O @ @ O @ @ O # @ @ @ @ @ ",
"DXGXGXDXDXGXAXAXGXAXAXAXAXAX* GX* DX* * * DX* * * * * * * * *   *   *     *         .   .     . . . . . . . . . X . X . . o . o . o X o . o o o X o o o o o o o O o o O o O o + o O O o + O O O @ o @ O @ o @ O @ @ @ @ O @ @ @ @ @ @ ",
"DXGXGXDXDXGXAXAXGXAXAXAX* AXDX* AX* DX* * * * * * * * * *   * *   *     *                 . .   .   . . . . . . . X X X X . X X X X X X o . o X o o o o o o o o o o O o O o O o O O O O O O O O O @ O @ O @ @ O @ O @ @ @ @ @ @ @ @ @ ",
"GXDXGXDXGXAXGXAXAXGXAXAXGX* AX* AX* AX* DX* * DX* * * *   * *   * *   * 7.* * 7.*     .       .   . . . . . . X . . . X . o . X X o X X o o . o o X o o o o o o o O o o O o O O o O O O o + O + O O O O @ o @ O @ @ O @ O @ @ @ @ @ @ ",
"GXDXGXDXDXGXAXGX* GXAXAXAXAXAX* GX* AX* * * * * * * * * * * * *   *   * *     *           .   . .   . . . . . . X X . X X . o . o . o X X o o o o o o o o o o o o o O o o O o O O o O + O O + O + + O @ O @ + + @ O @ @ @ @ @ @ @ @ @ ",
"GXDXGXDXGXGXAXGXAXAXAXAX* AXAXDX* AX* DX* * DX* * * * * * *   * * 7.*     *             7.    .   .   . . . . . . . X X . o . X . o . o X . o X o X X o o o o o o o O o O o O o + O o + o + O O O O @ o @ O + + @ @ @ O @ @ @ @ @ @ @ ",
"GXDXGXGXAXGXGXAXGXAXAXGXAXAX* GX* GX* * DX* * * * * * * *   * * * * *   *   * 7.*           .   .   . . . . . X X . . . X . X X X X X o X o . o o o o o o o o o o o O o O O o O o O O O O O O @ O O O @ O @ O @ O @ O @ @ O @ @ @ @ @ ",
"GXDXGXGXDXDXAXGXAXAXGX* GX* GX* AX* DX* * * DX* * * * * * * *   *   *         *           .       . . . . . . . X . X X . o . X X o . o X o X o . o X o o o o o o o o O o o O o + O o + o + o O + + O @ O @ O @ O @ @ @ @ @ @ @ @ @ O ",
"GXDXGXGXDXGXGXAXAXGXAXGX* GX* GX* AX* AX* AX* * * * * * * * * * *   *   *   * 7.        7.* . . .   . . . . . . . X . . X . o . X X X o . o X o o o o o o o o o o o O o O o o O o O O O O O O + O O O O @ O @ O @ O @ O @ @ @ @ @ @ @ ",
"GXDXGXGXDXDXAXGXAXAXGX* GX* GX* DX* AX* * DX* * DX* * * *   *   * *   *       *                 . . . . . . . . . . X . X X . o . o . o X X o X o X o o X o o o o O o o O o O o O O O O O o + O O @ O O @ O O @ O @ @ @ O @ @ @ @ @ @ ",
"GXDXGXGXDXGXGXAXAXAXGXAXAXDX* GX* AX* GX* * * * * * * * * * * *   *   * 7.*                 .   .   . . . . . . . X . X X . o . X . o . o X X o o X o o o o o o o o o O o O o O o + o O + O O O O O + O O @ O @ + @ O @ @ @ O @ @ @ @ ",
"GXGXDXGXGXDXAXGXAXAXAXGX* AXDX* GX* DX* * DX* * * * * * * *   * * *   * *   *   *             .   .   . . . . . . . X . . X . X X X X o . o X X o o X o o o o o o o o O o O O o O o + o O o + O O O + O @ O @ O O @ @ O @ @ @ @ @ @ @ ",
"GXGXGXDXGXDXGXGXAXAXDXAXGX* AXAXAX* AX* DX* * DX* * * * * * *   *   *         * 7.*     . .     . .   . . . . . . X . . X . o . X X X o X X o X X o o X o o o o o o o o O o o O o + o + O O O O @ O O @ o @ O @ O @ @ @ O @ @ @ @ @ O ",
"GXGXGXDXGXDXGXGXAXGXAXGX* GX* GX* GX* AX* * * * DX* * * * *   * * *   * *     *             .     .   . . . . . . . X . X X . o . X X o . o X o o X o o o o o o o o O o o O O o O o + o + O o + o @ O O @ O @ O + @ O @ @ O @ @ @ @ @ ",
"GXGXGXDXGXDXGXDXAXAXDXAXGX* GX* GX* DX* DX* DX* * * * * * * * * *   * * 7.*     *             .   .   . . . . . . X . . X . o . X X . o X o . o X o o X o o o o o o o o O o o O o + o O O O O + O O + O O @ O @ O @ O @ @ @ O @ @ @ @ ",
"GXGXGXDXGXDXGXGXAXAXDXAXAXAX* GX* DX* * DX* * * * DX* * * * *   * *   * *     *               .   .   . . . . . . . X . . X . X X X X . o . o X o o X o o o o o o o o O o O o O o O O O O O o + O O O + O O @ O + @ @ O @ @ @ @ @ @ @ ",
"GXGXGXGXDXDXGXDXGXAXAXGX* GXAXAXDX* DX* * DX* * * * * * * * * *   * *   *   *               7.      .   . . . . . . . X . X X X . o X X o X X o . o o o X o o o o o o o O o O o O o O O o + O O O + O O O @ O @ O O @ @ O @ + @ @ @ O ",
"GXGXGXGXGXGXDXGXGX* GXAXGX* DX* GX* GX* GX* * DX* * * * * *   * * *   *                         .   . . . . . . . X . X . X . o . X . o . o X X o o X o o o o o o o o o O o O o o O O o O + o + O @ O + O @ O @ O @ @ O @ @ @ @ @ @ @ ",
"GXGXGXGXDXGXDXGXGXGXAXAXGXAX* GX* GX* AX* * * * DX* * * * * * *   * *   * *   *                 .   .   . . . . . . X . . X . X X X X X o . o X X o o X o o X o o o O o o o O o O o O + o + O o O O O + O O @ o @ O @ @ O @ O @ @ @ @ ",
"GXGXGXGXGXGXDXGXDXAXDXAXAXAXDX* GX* GX* DX* DX* * * * * * * * * * *   *   *     *             .   .   . . . . . . . . X . X X X . X o . o . o X o X o X o o o o o o o o o O o O o O o + O o + O O O O + @ O @ @ O @ O @ @ @ @ O @ @ @ ",
"GXGXGXGXDXGXDXGXDXAXDXAXGXAXAXAX* GX* AX* DX* * DX* * * * * * *   * *   * 7.*               7.      .   . . . . . . X . . X . o . . o . o X o . o X o o X o o o o o o O o o O o O o + o O O + o @ O O O O O @ o @ O @ O @ O @ @ @ @ @ ",
"GXGXGXGXGXGXDXGXGXAXDXAXAXGX* GX* GX* DX* * DX* * * DX* * * * * *   * * * *   *   *         *   . .   .   . . . . . . X . . X . o . X X . o X o X o o X o o o o o o o o o O o O o O o O O o + O o + O @ o @ O @ O @ O @ @ @ O @ @ @ @ ",
"GXGXGXGXGXGXDXGXDXGX* GXDXAXAX* GX* DX* DX* * * * * * * * * * *   *   * 7.* *                 7.    . . . . . . . . . . X . X X . X X X o . o . o X o o X o o o o o o o O o O o O o O o + O O O O O O O @ o @ O @ O + @ O @ @ @ O @ @ ",
"GXGXGXGXGXGXGXDXGXGXAXAXAXGXAXAXDXDX* DX* GX* DX* * * * * * * * * * * * * *     *                   .     . . . . . X . . X . X X X X . o . o X X o X o o o o X o o o O o o o O o O o + o O O O O O + O O + @ O @ O @ O @ @ O @ @ @ @ ",
"GXGXGXGXGXGXGXDXDXGXAXGXAXAXAX* DX* GX* * DX* * * DX* * * * * * *   *     *   *                   .   . . . . . . . . X . . o . X . o . o . o X X X o X o X o o o o o o o O o O o O o O O O O o + O O + O O O @ O @ O @ O @ @ @ @ O @ ",
"GXGXGXGXGXGXGXDXGXGXAXAXDXDXGX* GXAXAX* GX* * DX* * * * * * * * * * * *   *     *   * 7.*     7.    .   .   . . . . X . X . . X X . o . X o . o X o X o o o o o o o o o o o O o O o O o + o + O O O O @ O O @ o @ O @ @ @ O @ O @ # @ ",
"GXGXGXGXGXGXGXDXDXGXAXGX* GX* GX* GX* DX* * DX* * * DX* * * * * * *   * *   *       *             .   .   . . . . . . . . X X . o . X X . o X o X X o o X o o o o o o o O o o o O o O O o O O O o + O O + O O @ O @ o @ O @ @ @ O @ O ",
"GXGXGXGXGXGXGXDXGXGXAXGXDXDXDXAXAX* GX* DX* DX* * DX* * * * *   *   *   *   *   *                   .   .   . . . . . X . . . X . o . o . o . o X X X o o X o o X o o o o O o O o O o o + O O O O O O O O @ O @ O @ @ O @ @ @ O # @ @ ",
"GXGXGXGXGXGXGXDXDXGXAXAXAXAXAXAXAXAXDX* DX* * DX* * * * * * * * * * * *   *   * 7.*               .   .   . . . . . . . X . X . X . X X X X o . o X o X o o o o o o o o o o O o O o O O o O o + o + O + O O O O @ o @ @ O @ O @ + @ O ",
"GXGXGXGXGXGXGXDXDXGXGXAXDXDXGX* GX* DX* GX* DX* * * DX* * * * * * *   * *   *   *   *           7.    . .   . . . . . . . X . X X X . o . o . o X X X o X o X o o o o o o O o o O o O o O O O O + O O O O O + @ O @ o @ @ O @ @ @ @ @ ",
"GXGXGXGXGXGXGXGXGXDXGXAXAXAXGXAX* GX* DX* * DX* DX* * * * * * * * * *   *   *   *               * .     .   . . . . . X . X . . X X . o . X o . o o X o o X o o o o o o o o o O o O o O o + O o + o + + @ O O O @ O @ O @ @ O @ O @ @ ",
"GXGXGXGXGXGXGXGXDXDXGXAXGXAXAXGXAXAXAXGX* GX* * * * DX* * * * * * *   *   *   * 7.*               .   . .   . . . . . . X . X . X X . o . X o X X o X X o o o o o o o o o o O o o O o O o O O O + o + o O O + @ O @ O + @ O # @ @ O @ ",
"GXGXGXGXGXGXGXGXGXDXGXDX* GXDX* GX* * GX* * DX* DX* * * * * * * * * * * * *   * *   *                   .   . .   . . . . X . X . o . X X . o . o . o o X o X o o o o o o o o O o O o O O o O O O O O + O O O O @ o @ O @ O @ O # + @ ",
"GXGXGXGXGXGXGXGXDXDXGXGXGX* GXGX* GXDX* DX* DX* * DX* DX* * * * * * *     * * 7.*     *           7.    .   . . . . . . X . . . X . X . o X X o . o X X o o o X o o o o o o O o O o O o o + O O O O O O @ O + O @ O @ O @ O @ @ O @ + ",
"GXGXGXGXGXGXGXGXGXDXGXAXDXDXAXDXAX* GX* GX* * DX* * * * * * * * * * * *   * * *   *                     .   . . . . . . . X X . X X X . o . X o X o . o X o o o o o o o o o o o O o O o O o + o + o + O O O + O @ O @ O @ @ O @ @ @ + ",
"GXGXGXGXGXGXGXGXGXDXGXGX* GXDXAXGX* GX* GX* GX* * DX* * DX* * * *   * * *     *       * 7.            7.    . . . . . . . . X . . X X . o . o . o . o X o X o o o o o o o o O o o O o O O O o O O O O O O O + O O @ O @ o @ @ O @ + @ ",
"GXGXGXGXGXGXGXGXGXDXGXGXGXAXDX* GX* GX* GX* * DX* * DX* * * * * * * * *   * *   *     *   *       7.      .   . . . . . . X . X . o . X . o . o X o X o X o X o X o o o o o o O o o O o O o + O O O o + O + O O @ o @ O @ @ @ O @ @ O "
};

////@end XPM images


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// VSCPBootloader type definition
//

IMPLEMENT_DYNAMIC_CLASS( VSCPBootloader, wxWizard )


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// VSCPBootloader event table definition
//

BEGIN_EVENT_TABLE( VSCPBootloader, wxWizard )

////@begin VSCPBootloader event table entries
////@end VSCPBootloader event table entries

END_EVENT_TABLE()


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// VSCPBootloader constructors
//

VSCPBootloader::VSCPBootloader()
{
  Init();
}

VSCPBootloader::VSCPBootloader( wxWindow* parent, wxWindowID id, const wxPoint& pos )
{
  Init();
  Create(parent, id, pos);
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// VSCPBootloader creator
//

bool VSCPBootloader::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos )
{
////@begin VSCPBootloader creation
  SetExtraStyle(wxWIZARD_EX_HELPBUTTON);
  wxBitmap wizardBitmap(GetBitmapResource(wxT("wizard.png")));
  wxWizard::Create( parent, id, _("VSCP Bootloader"), wizardBitmap, pos, wxDEFAULT_DIALOG_STYLE|wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX );

  CreateControls();
////@end VSCPBootloader creation
  return true;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// VSCPBootloader destructor
//

VSCPBootloader::~VSCPBootloader()
{
////@begin VSCPBootloader destruction
////@end VSCPBootloader destruction
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Member initialisation
//

void VSCPBootloader::Init()
{
////@begin VSCPBootloader member initialisation
////@end VSCPBootloader member initialisation
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Control creation for VSCPBootloader
//

void VSCPBootloader::CreateControls()
{    
////@begin VSCPBootloader content construction
  VSCPBootloader* itemWizard1 = this;

  wxWizardPageSimple* lastPage = NULL;
////@end VSCPBootloader content construction
  
  WXUNUSED(lastPage);
  WXUNUSED(itemWizard1);
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Runs the wizard.
//

bool VSCPBootloader::Run()
{
  wxWindowList::compatibility_iterator node = GetChildren().GetFirst();
  while (node)
  {
    wxWizardPage* startPage = wxDynamicCast(node->GetData(), wxWizardPage);
    if (startPage) return RunWizard(startPage);
    node = node->GetNext();
  }
  return false;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Should we show tooltips?
//

bool VSCPBootloader::ShowToolTips()
{
  return true;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Get bitmap resources
//

wxBitmap VSCPBootloader::GetBitmapResource( const wxString& name )
{
  // Bitmap retrieval
////@begin VSCPBootloader bitmap retrieval
  wxUnusedVar(name);
  if (name == _T("wizard.png"))
  {
    wxBitmap bitmap(wizard_xpm);
    return bitmap;
  }
  return wxNullBitmap;
////@end VSCPBootloader bitmap retrieval
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Get icon resources
//

wxIcon VSCPBootloader::GetIconResource( const wxString& name )
{
  // Icon retrieval
////@begin VSCPBootloader icon retrieval
  wxUnusedVar(name);
  return wxNullIcon;
////@end VSCPBootloader icon retrieval
}
