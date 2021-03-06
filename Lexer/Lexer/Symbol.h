#ifndef SYMBOL_H
#define SYMBOL_H
#include"token.h"
using namespace token;

class Symbol: public Token
{
public:
    Symbol(TokenType symbolType,std::string symbol)
        :Token(symbolType, symbol), symbol(symbol){}
    ~Symbol(){}
    std::ostream& operator<<(std::ostream &out)
    {
        out << this->symbol;
        return out;
    }
    std::string symbol;
};

#endif // SYMBOL_H
