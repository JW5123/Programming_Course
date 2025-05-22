#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LEN 105

typedef struct {
    const char *expr;
    int pos;
} Parser;

char peek(Parser *p) {
    return p->expr[p->pos];
}

char get(Parser *p) {
    return p->expr[p->pos++];
}

void skipSpaces(Parser *p) {
    while (isspace(peek(p))) p->pos++;
}

long long parseNumber(Parser *p) {
    skipSpaces(p);
    long long value = 0;
    while (isdigit(peek(p))) {
        value = value * 10 + (get(p) - '0');
    }
    return value;
}

long long parseExpr(Parser *p);

long long parseFactor(Parser *p) {
    skipSpaces(p);
    if (peek(p) == '(') {
        get(p);
        long long val = parseExpr(p);
        get(p);
        return val;
    } else {
        return parseNumber(p);
    }
}

long long parseTerm(Parser *p) {
    long long val = parseFactor(p);
    while (1) {
        skipSpaces(p);
        char op = peek(p);
        if (op == '*' || op == '/') {
            get(p);
            long long next = parseFactor(p);
            if (op == '*') val *= next;
            else val /= next;
        } else {
            break;
        }
    }
    return val;
}

long long parseExpr(Parser *p) {
    long long val = parseTerm(p);
    while (1) {
        skipSpaces(p);
        char op = peek(p);
        if (op == '+' || op == '-') {
            get(p);
            long long next = parseTerm(p);
            if (op == '+') val += next;
            else val -= next;
        } else {
            break;
        }
    }
    return val;
}

int main() {
    int n;
    scanf("%d\n", &n);

    char line[MAX_LEN];
    for (int i = 0; i < n; i++) {
        fgets(line, sizeof(line), stdin);
        Parser parser = {line, 0};
        long long result = parseExpr(&parser);
        printf("%lld\n", result);
    }

    return 0;
}
