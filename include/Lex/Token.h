enum class Tok {
    start = 0,
    add,
    sub,
    mul,
    div,
    lt,
    gt,
    le,
    ge,
    IF,
    FOR,
    INT,
    lparentheses,
    rparentheses,
    lbraces,
    rbraces,
    semicolon,
    constant,
    comma,
    id,
    end
};

class Token {
private:
    Tok tok;
    std::string name;
public:
    Token() {}

    Token(Tok t, std::string n) {
        tok = t;
        name = n;
    }

    Tok getTok() {
        return tok;
    }

    std::string &getName() {
        return &name;
    }
};