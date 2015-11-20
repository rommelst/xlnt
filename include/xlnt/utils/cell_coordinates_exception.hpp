// Copyright (c) 2014-2015 Thomas Fussell
// Copyright (c) 2010-2015 openpyxl
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, WRISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE
//
// @license: http://www.opensource.org/licenses/mit-license.php
// @author: see AUTHORS file
#pragma once

#include <stdexcept>
#include <string>

#include <xlnt/xlnt_config.hpp>
#include <xlnt/cell/types.hpp>

namespace xlnt {

/// <summary>
/// Error for converting between numeric and A1-style cell references.
/// </summary>
class XLNT_CLASS cell_coordinates_exception : public std::runtime_error
{
  public:
    cell_coordinates_exception(column_t column, row_t row);
    cell_coordinates_exception(const std::string &coord_string);
};

} // namespace xlnt