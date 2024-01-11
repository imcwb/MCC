#ifndef _LEXER_H
#define _LEXER_H
#include "Token.h"
#include <ctype.h>
class Lexer {
private:
    std::string& srcCtx;
    size_t pos;
    Token curToken;
    Token PreToken;
public:
    Token getCurToken() {
        for (; srcCtx[pos] == ' ' ||
               srcCtx[pos] == '\t' ||
               srcCtx[pos] == '\n'; pos++) {
            // Do nothing.
        }

        if (isalpha(srcCtx[pos] || srcCtx[pos] == '_')) {
            std::string s = srcCtx[pos];
            while (isalpha(srcCtx[pos]) || srcCtx[pos] == '_') {
                s.push_back(srcCtx[pos]);
            }
            
        }

    }
}
#endif