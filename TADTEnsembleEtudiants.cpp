#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////
//
// Un module pour afficher un message et, �ventuellement, arr�ter l'ex�cution
//
///////////////////////////////////////////////////////////////////////////////
void Message(const char msg[], bool IlFautArreter)
{
	printf("%s\n", msg);
	if (IlFautArreter)
		printf("Le programme va etre arrete\n");

	system("pause");

	if (IlFautArreter)
		exit(1);
}

///////////////////////////////////////////////////////////////////////////////
//
// Choix al�atoire d'un entier dans [min, max]
//
///////////////////////////////////////////////////////////////////////////////
int AleaEntier(int min, int max)
{
	return min + rand() % (max - min + 1);
}


///////////////////////////////////////////////////////////////////////////////
//
// Le premier TAD TEnsemble : constante, type et primitives
//
///////////////////////////////////////////////////////////////////////////////

// D�finissez ici les types TElement et TEnsemble puis programmez les corps des primitives
#define ELEMENT_MAX 1000

typedef int TElement

typedef struct {
    int Card;
    bool TB[ELEMENT_MAX]
} TEnsemble;


// Nombre d'�l�ments de l'ensemble
int Cardinal(TEnsemble E)
{
	return E.Card;
}


// V�rifie l'appartenance d'un �l�ment � un ensemble
bool Appartient(TElement x, TEnsemble E)
{
	return E.TB[x];
}

// Choisit al�atoirement un �l�ment de E sans le sortir de E
// E ne doit pas �tre vide
TElement Choisir(TEnsemble E)
{
}

// Cr�ation d'un ensemble vide
TEnsemble EnsembleVide()
{
}

// Ajout du TElement x � l'ensemble E
// Si x est d�j� pr�sent, ne fait rien
void  Mettre(TElement x, TEnsemble* PtE)
{
}

// Retrait de x de E
// Si x est absent, ne fait rien
void Oter(TElement x, TEnsemble* PtE)
{
}

// Choisit al�atoirement un �l�ment de E et le sort de E
// E ne doit pas �tre vide
void ChoisirEtOter(TEnsemble* PtE, TElement* Ptx)
{
}

// R�alise la saisie d'un ensemble
void SaisirEnsemble(TEnsemble* PtE)
{
}

// Affiche un ensemble sous la syntaxe :
// 	{ ..., ..., ... }
// SANS passer � la ligne apr�s l'affichage
void AfficherEnsemble(TEnsemble E)
{
}


///////////////////////////////////////////////////////////////////////////////
//
// Apr�s avoir programm� et test� le premier TAD, mettez le en commentaire
// (types et primitives), d�commentez le deuxi�me TAD ci-dessous, compl�tez le
// et testez le.
//
///////////////////////////////////////////////////////////////////////////////

/*
///////////////////////////////////////////////////////////////////////////////
//
// Le deuxi�me TAD TEnsemble : constante, type et primitives
//
///////////////////////////////////////////////////////////////////////////////

// Nombre d'�l�ments de l'ensemble
int Cardinal(TEnsemble E)
{
}


// V�rifie l'appartenance d'un �l�ment � un ensemble
bool Appartient(TElement x, TEnsemble E)
{
}

// Choisit al�atoirement un �l�ment de E sans le sortir de E
// E ne doit pas �tre vide
TElement Choisir(TEnsemble E)
{
}

// Cr�ation d'un ensemble vide
TEnsemble EnsembleVide()
{
}

// Ajout du TElement x � l'ensemble E
// Si x est d�j� pr�sent, ne fait rien
void  Mettre(TElement x, TEnsemble* PtE)
{
}

// Retrait de x de E
// Si x est absent, ne fait rien
void Oter(TElement x, TEnsemble* PtE)
{
}

// Choisit al�atoirement un �l�ment de E et le sort de E
// E ne doit pas �tre vide
void ChoisirEtOter(TEnsemble* PtE, TElement* Ptx)
{
}

// R�alise la saisie d'un ensemble
void SaisirEnsemble(TEnsemble* PtE)
{
}

// Affiche un ensemble sous la syntaxe :
// 	{ ..., ..., ... }
// SANS passer � la ligne apr�s l'affichage
void AfficherEnsemble(TEnsemble E)
{
}
*/

int main(int, char* [])
{
	printf("CREATIONS D'ENSEMBLES : \n");
	TEnsemble E0, E1, E3, E12;
	E0 = EnsembleVide();
	printf("Ensemble vide : "); AfficherEnsemble(E0); printf("\n");

	E1 = EnsembleVide(); Mettre(77, &E1);
	printf("On doit voir { 77 } : "); AfficherEnsemble(E1); printf("\n");

	E3 = EnsembleVide(); Mettre(82, &E3); Mettre(36, &E3); Mettre(55, &E3);
	printf("On doit voir {82, 36, 55} dans un ordre quelconque : "); AfficherEnsemble(E3); printf("\n");

	E12 = EnsembleVide();
	int i;
	for (i = 11; i <= 22; i++)
		Mettre(i, &E12);
	printf("On doit voir {11..22} dans un ordre quelconque : "); AfficherEnsemble(E12); printf("\n\n");

	printf("SAISIE D'UN ENSEMBLE : \n");
	TEnsemble EnsembleSaisi;
	SaisirEnsemble(&EnsembleSaisi);
	printf("Affichage de l'ensemble saisi : "); AfficherEnsemble(EnsembleSaisi); printf("\n\n");

	printf("TEST DE L'EGALITE DE DEUX ENSEMBLES (ils doivent etre declares egaux)\n");
	// Cr�ation de deux ensembles avec des valeurs identiques mais 
	// ajout�es dans un ordre diff�rent puis v�rification de l'�galit� 
	// de ces deux ensembles.
	// Pour cela on ajoute les entiers dans l'ordre 0, 1, 2 ... dans le 
	// premier ensemble ET dans un tableau.
	// Puis on m�lange le tableau et on ajoute ses �l�ments dans le deuxi�me
	// ensemble.
	// Enfin, on v�rifie l'�galit� des 2 ensembles.


#ifdef TAILLE_MAX_ENSEMBLE
#define MAX TAILLE_MAX_ENSEMBLE
#else
#define MAX 1+ELEMENT_MAX
#endif

	int TabDesValeurs[MAX];
	TEnsemble Ensemble1 = EnsembleVide();

	// Ajout des entiers � Ensemble1 et au tableau
	for (i = 0; i < MAX; i++) {
		TabDesValeurs[i] = i;
		Mettre(i, &Ensemble1);
	}

	// M�lange du tableau
	for (i = 0; i < 2 * MAX; i++) {
		// Choix al�atoire de 2 �l�ments
		int Indice1 = AleaEntier(0, MAX - 1),
			Indice2 = AleaEntier(0, MAX - 1);

		// Echange des 2 �l�ments choisis
		TElement E = TabDesValeurs[Indice1];
		TabDesValeurs[Indice1] = TabDesValeurs[Indice2];
		TabDesValeurs[Indice2] = E;
	}

	// Ajout des entiers du tableau � Ensemble2
	TEnsemble Ensemble2;
	Ensemble2 = EnsembleVide();
	for (i = 0; i < MAX; i++)
		Mettre(TabDesValeurs[i], &Ensemble2);

	// V�rification de l'�galit� des deux ensembles
	bool EnsemblesSontEgaux = (Cardinal(Ensemble1) == Cardinal(Ensemble2));

	while (EnsemblesSontEgaux && (Cardinal(Ensemble1) > 0)) {
		TElement v;
		ChoisirEtOter(&Ensemble1, &v);

		if (!Appartient(v, Ensemble2))
			EnsemblesSontEgaux = false;
	}

	if (EnsemblesSontEgaux)
		printf("Le test sur l'egalite de deux ensembles est bien passe\n\n");
	else
		printf("Le test sur l'egalite de deux ensembles A ECHOUE !!!\n\n");

	return 0;
}