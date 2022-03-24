#include <string>
using namespace std;

// Une petite classe pour toutes les exceptions levées par les listes
class ExceptionListesChainees {
public:
	ExceptionListesChainees(const char mess[]) :msg (mess) {}
	
	ExceptionListesChainees(const ExceptionListesChainees &m)
		:msg(m.msg)
	{}

	const char *what() { return msg.c_str(); }

private:
	string msg;
	};


typedef int TElement ;

/////////////////////////////////////////////////////////
// Type liste chaînée de TElement. En plus du pointeur de départ,
// il y a un booléen pour savoir si la liste est initialisée
/////////////////////////////////////////////////////////

typedef	struct Maillon {	TElement		Valeur ;
							struct Maillon	*Suivant ;
} TMaillon;

class TListe {
public :
	TListe()
		:EstInitialise(false), Prem(NULL)
	{}

private:
	bool EstInitialise;
	TMaillon *Prem;

	friend bool EstVide(TListe L);
	friend TElement Tete(TListe L);
	friend TListe	Reste(TListe L);
	friend TListe	ConsVide();
	friend TListe	Cons(TElement X, TListe L);
};



/////////////////////////////////////////////////////////
// Primitives d'accès aux listes chaînées
/////////////////////////////////////////////////////////


// Consultations
bool EstVide(TListe L)
{
	if (!L.EstInitialise)
		throw ExceptionListesChainees("La liste n'est pas initialisee dans EstVide");

	return L.Prem == NULL;
}

TElement Tete(TListe L)
{
	if (!L.EstInitialise)
		throw ExceptionListesChainees("La liste n'est pas initialisee dans Tete");
	if (!L.Prem)
		throw ExceptionListesChainees("La liste est vide dans Tete");

	return L.Prem->Valeur;
}

TListe	Reste(TListe L)
{
	if (!L.EstInitialise)
		throw ExceptionListesChainees("La liste n'est pas initialisee dans Reste");
	if (!L.Prem)
		throw ExceptionListesChainees("La liste est vide dans Reste");

	TListe Res; Res.EstInitialise = true; Res.Prem = L.Prem->Suivant;
	return Res;
}


// Constructions
TListe	ConsVide()
{
	TListe L; L.EstInitialise = true; L.Prem = NULL;

	return L;
}

TListe	Cons(TElement X, TListe L)
{
	if (!L.EstInitialise)
		throw ExceptionListesChainees("La liste recue n'est pas initialisee dans Cons");

	TMaillon *Nouv = new TMaillon;
	if (!Nouv)
		throw ExceptionListesChainees("Memoire saturee dans Cons");


	Nouv->Valeur = X;
	Nouv->Suivant = L.Prem;
	TListe Res; Res.EstInitialise = true; Res.Prem = Nouv;

	return Res;
}

bool EgaliteListes(TListe L1, TListe L2)
{
	if (EstVide(L1))
		return EstVide(L2);
	else if (EstVide(L2))
		return false;
	else if (Tete(L1) != Tete(L2))
		return false;
	else
		return EgaliteListes(Reste(L1), Reste(L2));
}

TListe Copie(TListe L)
{
	if (EstVide(L))
		return ConsVide();
	else
		return Cons(Tete(L), Copie(Reste(L)));
}
