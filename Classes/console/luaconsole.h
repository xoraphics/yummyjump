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
 
/**
 * @file:   luaconsole.h
 * @author: Laurent Zubiaur
 * @brief:
 */

#ifndef PIX2D_CONSOLE_LUACONSOLE_H
#define PIX2D_CONSOLE_LUACONSOLE_H

#include "console/forwards.h"
#include "console/console.h"

/// Forward declaration
struct lua_State;

NS_PIX2D_CONSOLE_BEGIN

class LuaConsole : public Console {
public:
    explicit LuaConsole();
    LuaConsole(const char *ip, int port);
    virtual ~LuaConsole();

    virtual bool init();

    CREATE_FUNC(LuaConsole);
    static LuaConsole *create(const char *ip, int port);

    /// Implement ServerSocket::handleRequest
    virtual void handleRequest(const std::string &input, std::string &output);

    static void stackDump(lua_State *L);

protected:
    lua_State *mState;
};

NS_PIX2D_CONSOLE_END
#endif // PIX2D_CONSOLE_LUACONSOLE_H
