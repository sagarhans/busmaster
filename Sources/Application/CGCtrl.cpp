/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * \file      CGCtrl.cpp
 * \brief     Implementation file for CCGCtrl class
 * \author    Raja N
 * \copyright Copyright (c) 2011, Robert Bosch Engineering and Business Solutions. All rights reserved.
 *
 * Implementation file for CCGCtrl class
 */

// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "cgctrl.h"

/////////////////////////////////////////////////////////////////////////////
// CCGCtrl

IMPLEMENT_DYNCREATE(CCGCtrl, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CCGCtrl properties

short CCGCtrl::GetAppearance()
{
    short result;
    GetProperty(DISPID_APPEARANCE, VT_I2, (void*)&result);
    return result;
}

void CCGCtrl::SetAppearance(short propVal)
{
    SetProperty(DISPID_APPEARANCE, VT_I2, propVal);
}

CString CCGCtrl::GetCaption()
{
    CString result;
    GetProperty(DISPID_CAPTION, VT_BSTR, (void*)&result);
    return result;
}

void CCGCtrl::SetCaption(LPCTSTR propVal)
{
    SetProperty(DISPID_CAPTION, VT_BSTR, propVal);
}

BOOL CCGCtrl::GetEnabled()
{
    BOOL result;
    GetProperty(DISPID_ENABLED, VT_BOOL, (void*)&result);
    return result;
}

void CCGCtrl::SetEnabled(BOOL propVal)
{
    SetProperty(DISPID_ENABLED, VT_BOOL, propVal);
}

unsigned long CCGCtrl::GetAxisColor()
{
    unsigned long result;
    GetProperty(0x1, VT_I4, (void*)&result);
    return result;
}

void CCGCtrl::SetAxisColor(unsigned long propVal)
{
    SetProperty(0x1, VT_I4, propVal);
}

unsigned long CCGCtrl::GetGridColor()
{
    unsigned long result;
    GetProperty(0x2, VT_I4, (void*)&result);
    return result;
}

void CCGCtrl::SetGridColor(unsigned long propVal)
{
    SetProperty(0x2, VT_I4, propVal);
}

unsigned long CCGCtrl::GetLabelColor()
{
    unsigned long result;
    GetProperty(0x3, VT_I4, (void*)&result);
    return result;
}

void CCGCtrl::SetLabelColor(unsigned long propVal)
{
    SetProperty(0x3, VT_I4, propVal);
}

unsigned long CCGCtrl::GetCursorColor()
{
    unsigned long result;
    GetProperty(0x4, VT_I4, (void*)&result);
    return result;
}

void CCGCtrl::SetCursorColor(unsigned long propVal)
{
    SetProperty(0x4, VT_I4, propVal);
}

LPDISPATCH CCGCtrl::GetLabelFont()
{
    LPDISPATCH result;
    GetProperty(0x2b, VT_DISPATCH, (void*)&result);
    return result;
}

void CCGCtrl::SetLabelFont(LPDISPATCH propVal)
{
    SetProperty(0x2b, VT_DISPATCH, propVal);
}

LPDISPATCH CCGCtrl::GetTickFont()
{
    LPDISPATCH result;
    GetProperty(0x2c, VT_DISPATCH, (void*)&result);
    return result;
}

void CCGCtrl::SetTickFont(LPDISPATCH propVal)
{
    SetProperty(0x2c, VT_DISPATCH, propVal);
}

LPDISPATCH CCGCtrl::GetTitleFont()
{
    LPDISPATCH result;
    GetProperty(0x2d, VT_DISPATCH, (void*)&result);
    return result;
}

void CCGCtrl::SetTitleFont(LPDISPATCH propVal)
{
    SetProperty(0x2d, VT_DISPATCH, propVal);
}

LPDISPATCH CCGCtrl::GetIdentFont()
{
    LPDISPATCH result;
    GetProperty(0x2e, VT_DISPATCH, (void*)&result);
    return result;
}

void CCGCtrl::SetIdentFont(LPDISPATCH propVal)
{
    SetProperty(0x2e, VT_DISPATCH, propVal);
}

short CCGCtrl::GetXGridNumber()
{
    short result;
    GetProperty(0x5, VT_I2, (void*)&result);
    return result;
}

void CCGCtrl::SetXGridNumber(short propVal)
{
    SetProperty(0x5, VT_I2, propVal);
}

short CCGCtrl::GetYGridNumber()
{
    short result;
    GetProperty(0x6, VT_I2, (void*)&result);
    return result;
}

void CCGCtrl::SetYGridNumber(short propVal)
{
    SetProperty(0x6, VT_I2, propVal);
}

BOOL CCGCtrl::GetShowGrid()
{
    BOOL result;
    GetProperty(0x7, VT_BOOL, (void*)&result);
    return result;
}

void CCGCtrl::SetShowGrid(BOOL propVal)
{
    SetProperty(0x7, VT_BOOL, propVal);
}

CString CCGCtrl::GetXLabel()
{
    CString result;
    GetProperty(0x8, VT_BSTR, (void*)&result);
    return result;
}

void CCGCtrl::SetXLabel(LPCTSTR propVal)
{
    SetProperty(0x8, VT_BSTR, propVal);
}

CString CCGCtrl::GetYLabel()
{
    CString result;
    GetProperty(0x9, VT_BSTR, (void*)&result);
    return result;
}

void CCGCtrl::SetYLabel(LPCTSTR propVal)
{
    SetProperty(0x9, VT_BSTR, propVal);
}

unsigned long CCGCtrl::GetElementLineColor()
{
    unsigned long result;
    GetProperty(0xa, VT_I4, (void*)&result);
    return result;
}

void CCGCtrl::SetElementLineColor(unsigned long propVal)
{
    SetProperty(0xa, VT_I4, propVal);
}

unsigned long CCGCtrl::GetElementPointColor()
{
    unsigned long result;
    GetProperty(0xb, VT_I4, (void*)&result);
    return result;
}

void CCGCtrl::SetElementPointColor(unsigned long propVal)
{
    SetProperty(0xb, VT_I4, propVal);
}

long CCGCtrl::GetElementLinetype()
{
    long result;
    GetProperty(0xc, VT_I4, (void*)&result);
    return result;
}

void CCGCtrl::SetElementLinetype(long propVal)
{
    SetProperty(0xc, VT_I4, propVal);
}

long CCGCtrl::GetElementWidth()
{
    long result;
    GetProperty(0xd, VT_I4, (void*)&result);
    return result;
}

void CCGCtrl::SetElementWidth(long propVal)
{
    SetProperty(0xd, VT_I4, propVal);
}

long CCGCtrl::GetElementPointSymbol()
{
    long result;
    GetProperty(0xe, VT_I4, (void*)&result);
    return result;
}

void CCGCtrl::SetElementPointSymbol(long propVal)
{
    SetProperty(0xe, VT_I4, propVal);
}

BOOL CCGCtrl::GetElementSolidPoint()
{
    BOOL result;
    GetProperty(0xf, VT_BOOL, (void*)&result);
    return result;
}

void CCGCtrl::SetElementSolidPoint(BOOL propVal)
{
    SetProperty(0xf, VT_BOOL, propVal);
}

BOOL CCGCtrl::GetElementShow()
{
    BOOL result;
    GetProperty(0x10, VT_BOOL, (void*)&result);
    return result;
}

void CCGCtrl::SetElementShow(BOOL propVal)
{
    SetProperty(0x10, VT_BOOL, propVal);
}

long CCGCtrl::GetTrackMode()
{
    long result;
    GetProperty(0x2f, VT_I4, (void*)&result);
    return result;
}

void CCGCtrl::SetTrackMode(long propVal)
{
    SetProperty(0x2f, VT_I4, propVal);
}

CString CCGCtrl::GetElementName()
{
    CString result;
    GetProperty(0x11, VT_BSTR, (void*)&result);
    return result;
}

void CCGCtrl::SetElementName(LPCTSTR propVal)
{
    SetProperty(0x11, VT_BSTR, propVal);
}

BOOL CCGCtrl::GetElementIdentify()
{
    BOOL result;
    GetProperty(0x12, VT_BOOL, (void*)&result);
    return result;
}

void CCGCtrl::SetElementIdentify(BOOL propVal)
{
    SetProperty(0x12, VT_BOOL, propVal);
}

BOOL CCGCtrl::GetXLog()
{
    BOOL result;
    GetProperty(0x13, VT_BOOL, (void*)&result);
    return result;
}

void CCGCtrl::SetXLog(BOOL propVal)
{
    SetProperty(0x13, VT_BOOL, propVal);
}

BOOL CCGCtrl::GetYLog()
{
    BOOL result;
    GetProperty(0x14, VT_BOOL, (void*)&result);
    return result;
}

void CCGCtrl::SetYLog(BOOL propVal)
{
    SetProperty(0x14, VT_BOOL, propVal);
}

LPDISPATCH CCGCtrl::GetControlFramePicture()
{
    LPDISPATCH result;
    GetProperty(0x30, VT_DISPATCH, (void*)&result);
    return result;
}

void CCGCtrl::SetControlFramePicture(LPDISPATCH propVal)
{
    SetProperty(0x30, VT_DISPATCH, propVal);
}

LPDISPATCH CCGCtrl::GetPlotAreaPicture()
{
    LPDISPATCH result;
    GetProperty(0x31, VT_DISPATCH, (void*)&result);
    return result;
}

void CCGCtrl::SetPlotAreaPicture(LPDISPATCH propVal)
{
    SetProperty(0x31, VT_DISPATCH, propVal);
}

unsigned long CCGCtrl::GetControlFrameColor()
{
    unsigned long result;
    GetProperty(0x15, VT_I4, (void*)&result);
    return result;
}

void CCGCtrl::SetControlFrameColor(unsigned long propVal)
{
    SetProperty(0x15, VT_I4, propVal);
}

unsigned long CCGCtrl::GetPlotAreaColor()
{
    unsigned long result;
    GetProperty(0x16, VT_I4, (void*)&result);
    return result;
}

void CCGCtrl::SetPlotAreaColor(unsigned long propVal)
{
    SetProperty(0x16, VT_I4, propVal);
}

long CCGCtrl::GetFrameStyle()
{
    long result;
    GetProperty(0x17, VT_I4, (void*)&result);
    return result;
}

void CCGCtrl::SetFrameStyle(long propVal)
{
    SetProperty(0x17, VT_I4, propVal);
}

CString CCGCtrl::GetAnnoLabelCaption()
{
    CString result;
    GetProperty(0x18, VT_BSTR, (void*)&result);
    return result;
}

void CCGCtrl::SetAnnoLabelCaption(LPCTSTR propVal)
{
    SetProperty(0x18, VT_BSTR, propVal);
}

double CCGCtrl::GetAnnoLabelX()
{
    double result;
    GetProperty(0x19, VT_R8, (void*)&result);
    return result;
}

void CCGCtrl::SetAnnoLabelX(double propVal)
{
    SetProperty(0x19, VT_R8, propVal);
}

double CCGCtrl::GetAnnoLabelY()
{
    double result;
    GetProperty(0x1a, VT_R8, (void*)&result);
    return result;
}

void CCGCtrl::SetAnnoLabelY(double propVal)
{
    SetProperty(0x1a, VT_R8, propVal);
}

unsigned long CCGCtrl::GetAnnoLabelColor()
{
    unsigned long result;
    GetProperty(0x1b, VT_I4, (void*)&result);
    return result;
}

void CCGCtrl::SetAnnoLabelColor(unsigned long propVal)
{
    SetProperty(0x1b, VT_I4, propVal);
}

BOOL CCGCtrl::GetAnnoLabelHorizontal()
{
    BOOL result;
    GetProperty(0x1c, VT_BOOL, (void*)&result);
    return result;
}

void CCGCtrl::SetAnnoLabelHorizontal(BOOL propVal)
{
    SetProperty(0x1c, VT_BOOL, propVal);
}

short CCGCtrl::GetAnnotation()
{
    short result;
    GetProperty(0x1d, VT_I2, (void*)&result);
    return result;
}

void CCGCtrl::SetAnnotation(short propVal)
{
    SetProperty(0x1d, VT_I2, propVal);
}

BOOL CCGCtrl::GetAnnoVisible()
{
    BOOL result;
    GetProperty(0x1e, VT_BOOL, (void*)&result);
    return result;
}

void CCGCtrl::SetAnnoVisible(BOOL propVal)
{
    SetProperty(0x1e, VT_BOOL, propVal);
}

short CCGCtrl::GetAnnoCount()
{
    short result;
    GetProperty(0x32, VT_I2, (void*)&result);
    return result;
}

void CCGCtrl::SetAnnoCount(short propVal)
{
    SetProperty(0x32, VT_I2, propVal);
}

short CCGCtrl::GetElement()
{
    short result;
    GetProperty(0x1f, VT_I2, (void*)&result);
    return result;
}

void CCGCtrl::SetElement(short propVal)
{
    SetProperty(0x1f, VT_I2, propVal);
}

short CCGCtrl::GetElementCount()
{
    short result;
    GetProperty(0x33, VT_I2, (void*)&result);
    return result;
}

void CCGCtrl::SetElementCount(short propVal)
{
    SetProperty(0x33, VT_I2, propVal);
}

unsigned long CCGCtrl::GetAnnoLabelBkColor()
{
    unsigned long result;
    GetProperty(0x20, VT_I4, (void*)&result);
    return result;
}

void CCGCtrl::SetAnnoLabelBkColor(unsigned long propVal)
{
    SetProperty(0x20, VT_I4, propVal);
}

short CCGCtrl::GetCursorCount()
{
    short result;
    GetProperty(0x34, VT_I2, (void*)&result);
    return result;
}

void CCGCtrl::SetCursorCount(short propVal)
{
    SetProperty(0x34, VT_I2, propVal);
}

short CCGCtrl::GetCursor()
{
    short result;
    GetProperty(0x21, VT_I2, (void*)&result);
    return result;
}

void CCGCtrl::SetCursor(short propVal)
{
    SetProperty(0x21, VT_I2, propVal);
}

double CCGCtrl::GetCursorX()
{
    double result;
    GetProperty(0x22, VT_R8, (void*)&result);
    return result;
}

void CCGCtrl::SetCursorX(double propVal)
{
    SetProperty(0x22, VT_R8, propVal);
}

double CCGCtrl::GetCursorY()
{
    double result;
    GetProperty(0x23, VT_R8, (void*)&result);
    return result;
}

void CCGCtrl::SetCursorY(double propVal)
{
    SetProperty(0x23, VT_R8, propVal);
}

short CCGCtrl::GetCursorStyle()
{
    short result;
    GetProperty(0x24, VT_I2, (void*)&result);
    return result;
}

void CCGCtrl::SetCursorStyle(short propVal)
{
    SetProperty(0x24, VT_I2, propVal);
}

BOOL CCGCtrl::GetCursorVisible()
{
    BOOL result;
    GetProperty(0x25, VT_BOOL, (void*)&result);
    return result;
}

void CCGCtrl::SetCursorVisible(BOOL propVal)
{
    SetProperty(0x25, VT_BOOL, propVal);
}

short CCGCtrl::GetCursorMode()
{
    short result;
    GetProperty(0x26, VT_I2, (void*)&result);
    return result;
}

void CCGCtrl::SetCursorMode(short propVal)
{
    SetProperty(0x26, VT_I2, propVal);
}

CString CCGCtrl::GetFormatAxisBottom()
{
    CString result;
    GetProperty(0x27, VT_BSTR, (void*)&result);
    return result;
}

void CCGCtrl::SetFormatAxisBottom(LPCTSTR propVal)
{
    SetProperty(0x27, VT_BSTR, propVal);
}

CString CCGCtrl::GetFormatAxisLeft()
{
    CString result;
    GetProperty(0x28, VT_BSTR, (void*)&result);
    return result;
}

void CCGCtrl::SetFormatAxisLeft(LPCTSTR propVal)
{
    SetProperty(0x28, VT_BSTR, propVal);
}

BOOL CCGCtrl::GetYTime()
{
    BOOL result;
    GetProperty(0x29, VT_BOOL, (void*)&result);
    return result;
}

void CCGCtrl::SetYTime(BOOL propVal)
{
    SetProperty(0x29, VT_BOOL, propVal);
}

BOOL CCGCtrl::GetXTime()
{
    BOOL result;
    GetProperty(0x2a, VT_BOOL, (void*)&result);
    return result;
}

void CCGCtrl::SetXTime(BOOL propVal)
{
    SetProperty(0x2a, VT_BOOL, propVal);
}

short CCGCtrl::GetLineDisplay()
{
    short result;
    GetProperty(0x53, VT_I2, (void*)&result);
    return result;
}

void CCGCtrl::SetLineDisplay(short propVal)
{
    SetProperty(0x53, VT_I2, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CCGCtrl operations

void CCGCtrl::SetRange(double xmin, double xmax, double ymin, double ymax)
{
    static BYTE parms[] =
        VTS_R8 VTS_R8 VTS_R8 VTS_R8;
    InvokeHelper(0x35, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
                 xmin, xmax, ymin, ymax);
}

void CCGCtrl::AutoRange()
{
    InvokeHelper(0x36, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCGCtrl::CopyToClipboard()
{
    InvokeHelper(0x37, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCGCtrl::PrintGraph()
{
    InvokeHelper(0x38, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCGCtrl::AddElement(long index)
{
    static BYTE parms[] =
        VTS_I4;
    InvokeHelper(0x39, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
                 index);
}

void CCGCtrl::DeleteElement(short ElementID)
{
    static BYTE parms[] =
        VTS_I2;
    InvokeHelper(0x3a, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
                 ElementID);
}

void CCGCtrl::ClearGraph()
{
    InvokeHelper(0x3b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

double CCGCtrl::GetElementXValue(long index, short ElementID)
{
    double result;
    static BYTE parms[] =
        VTS_I4 VTS_I2;
    InvokeHelper(0x47, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, parms,
                 index, ElementID);
    return result;
}

void CCGCtrl::SetElementXValue(long index, short ElementID, double newValue)
{
    static BYTE parms[] =
        VTS_I4 VTS_I2 VTS_R8;
    InvokeHelper(0x47, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 index, ElementID, newValue);
}

double CCGCtrl::GetElementYValue(long index, short ElementID)
{
    double result;
    static BYTE parms[] =
        VTS_I4 VTS_I2;
    InvokeHelper(0x48, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, parms,
                 index, ElementID);
    return result;
}

void CCGCtrl::SetElementYValue(long index, short ElementID, double newValue)
{
    static BYTE parms[] =
        VTS_I4 VTS_I2 VTS_R8;
    InvokeHelper(0x48, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 index, ElementID, newValue);
}

void CCGCtrl::PlotXY(double X, double Y, short ElementID)
{
    static BYTE parms[] =
        VTS_R8 VTS_R8 VTS_I2;
    InvokeHelper(0x3c, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
                 X, Y, ElementID);
}

void CCGCtrl::PlotY(double Y, short ElementID)
{
    static BYTE parms[] =
        VTS_R8 VTS_I2;
    InvokeHelper(0x3d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
                 Y, ElementID);
}

void CCGCtrl::ShowProperties()
{
    InvokeHelper(0x3e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCGCtrl::SaveAs(LPCTSTR szFilename)
{
    static BYTE parms[] =
        VTS_BSTR;
    InvokeHelper(0x3f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
                 szFilename);
}

void CCGCtrl::AddAnnotation()
{
    InvokeHelper(0x40, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCGCtrl::DeleteAnnotation(short annoID)
{
    static BYTE parms[] =
        VTS_I2;
    InvokeHelper(0x41, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
                 annoID);
}

void CCGCtrl::AddCursor()
{
    InvokeHelper(0x42, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCGCtrl::DeleteCursor(short cursorID)
{
    static BYTE parms[] =
        VTS_I2;
    InvokeHelper(0x43, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
                 cursorID);
}

void CCGCtrl::UpdateDisplay()
{
    InvokeHelper(0x44, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCGCtrl::GoToRunMode()
{
    InvokeHelper(0x45, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCGCtrl::GoToNormalMode()
{
    InvokeHelper(0x46, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

short CCGCtrl::GetZoomMode()
{
    short result;
    InvokeHelper(0x49, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
    return result;
}

void CCGCtrl::SetZoomMode(short nNewValue)
{
    static BYTE parms[] =
        VTS_I2;
    InvokeHelper(0x49, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
                 nNewValue);
}

void CCGCtrl::SetXAxisRange(double xmin, double xmax)
{
    static BYTE parms[] =
        VTS_R8 VTS_R8;
    InvokeHelper(0x4a, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
                 xmin, xmax);
}

void CCGCtrl::FitAll()
{
    InvokeHelper(0x4b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

short CCGCtrl::GetElementRange(short ElementID, double* xmin, double* xmax, double* ymin, double* ymax)
{
    short result;
    static BYTE parms[] =
        VTS_I2 VTS_PR8 VTS_PR8 VTS_PR8 VTS_PR8;
    InvokeHelper(0x4c, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
                 ElementID, xmin, xmax, ymin, ymax);
    return result;
}

void CCGCtrl::GenerateCSVReport(LPCTSTR szFilename)
{
    static BYTE parms[] =
        VTS_BSTR;
    InvokeHelper(0x4d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
                 szFilename);
}

short CCGCtrl::GenerateHTMLReport(LPCTSTR szFilename, LPUNKNOWN* pParams)
{
    short result;
    static BYTE parms[] =
        VTS_BSTR VTS_PUNKNOWN;
    InvokeHelper(0x4e, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
                 szFilename, pParams);
    return result;
}

void CCGCtrl::ShiftDisplay(short xShift, short yShift)
{
    static BYTE parms[] =
        VTS_I2 VTS_I2;
    InvokeHelper(0x4f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
                 xShift, yShift);
}

void CCGCtrl::SetGridLines(short xGrids, short yGrids)
{
    static BYTE parms[] =
        VTS_I2 VTS_I2;
    InvokeHelper(0x50, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
                 xGrids, yGrids);
}

void CCGCtrl::SetElementUnit(LPCTSTR lpszUnit)
{
    static BYTE parms[] =
        VTS_BSTR;
    InvokeHelper(0x51, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
                 lpszUnit);
}

void CCGCtrl::GetXAxisRange(double FAR* pXMin, double FAR* pXMax)
{
    static BYTE parms[] =
        VTS_PR8 VTS_PR8;
    InvokeHelper(0x52, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
                 pXMin, pXMax);
}

void CCGCtrl::GetElementValueAtCursor(short ElementID, double dblCursorVal, double* dblElemVal)
{
    static BYTE parms[] = VTS_I2 VTS_R8 VTS_PR8 ;
    InvokeHelper(0x54, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ElementID, dblCursorVal, dblElemVal);
}

void CCGCtrl::AboutBox()
{
    InvokeHelper(0xfffffdd8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}