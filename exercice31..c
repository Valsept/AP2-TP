#define ELEMENT_MAX 1000

typedef int TElement

typedef struct {
    int Card;
    bool TB[ELEMENT_MAX]
} TEnsemble;

int Cardinal(TEnsemble E){
    return E.Card;
}

bool Appartient(TElement x, TEnsemble E){
    return E.TB[x];
}