/**
Copyright (C) 2012-2015 Laurent Zubiaur - voodoocactus.com

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
 **/

#ifndef PIX2D_DRAWNODE_H
#define PIX2D_DRAWNODE_H

#include "forwards.h"

NS_PIX2D_BEGIN

class DrawNode : public CCDrawNode {
public:
    CREATE_FUNC(DrawNode);
    void drawPolygon(std::vector<CCPoint> &points, const ccColor4F &fillColor, float borderWidth, const ccColor4F &borderColor);
    void drawCircle(const CCPoint &center, float radius, float precision, float borderWidth, const ccColor4F &fillColor, const ccColor4F &pathColor);
};

NS_PIX2D_END

#endif /* PIX2D_DRAWNODE_H */