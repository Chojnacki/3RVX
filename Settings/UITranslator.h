// Copyright (c) 2015, Matthew Malensek.
// Distributed under the BSD 2-Clause License (see LICENSE.txt for details)

#pragma once

#include <Windows.h>
#include <string>

/// <summary>
/// Handles translation of UI elements defined as Win32 controls.
/// </summary>
class UITranslator {
public:
    /// <summary>
    /// Reads a control's text, translates it, and updates the text.
    /// </summary>
    static void TranslateControlText(HWND hWnd, int dlgItem);

    /// <summary>
    /// Sets a control's text to the translation of the provided string.
    /// </summary>
    static void TranslateControlText(HWND hWnd, int dlgItem, std::wstring &str);

    /// <summary>
    /// Retrieves a window's text, translates, and then updates the text with
    /// the translated string.
    /// </summary>
    static void TranslateWindowText(HWND hWnd);
};