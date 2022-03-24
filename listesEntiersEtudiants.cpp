//////////////////////////////////////////////////////////////////////////////////////
//
// Ce programme dispose du type "Liste d'entiers" et des primitives associées.
//
// Le nom du type est TListe.
//
// Complétez tous les sous-programmes qui suivent dans l'ordre où
// ils apparaissent. Ils contiennent des instructions bidons qui ne sont 
// là que pour utiliser les paramètres et éviter des messages d'avertissement.
// Remplacez les par les vôtres.
// A chaque progression, faites une exécution.
//
// Le main contient déjà des tests de ces sous-programmes.
//
// Les sous-programmes dont le nom termine par R doivent être faits récursivement.
// Les sous-programmes dont le nom termine par I doivent être faits itérativement.
// 
// SOUVENEZ-VOUS QUE, EN TP NOTE, SEUL LE FAIT D'OBTENIR LE RESULTAT ATTENDU APPORTE DES POINTS.
// Ce programme informe de la note maximum possible au vu de ce que vous avez programmé.
//
//////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>
#include "Listes.h"


int TailleI(TListe L)
// Donne le nombre d'éléments de la liste. Version itérative
{
	int compteur = 0;
	while (!EstVide(L)) {
		compteur += 1;
		L = Reste(L);
	}
	return compteur;
}

int TailleR(TListe L)
// Donne le nombre d'éléments de la liste. Version récursive
{
	//Taille[0] = 0
	//Taille[(V,R)] = 1 + Taille[R]

	if (EstVide(L)) {
		return 0;
	} else {
		return 1 + TailleR(Reste(L));
	}
}

TElement SommeI(TListe L)
// Donne la somme des éléments de la liste. Version itérative
{
	int somme = 0;
	while (!EstVide(L)) {
		somme += Tete(L);
		L = Reste(L);
	}
	return somme;
}

TElement SommeR(TListe L)
// Donne la somme des éléments de la liste. Version récursive
{
	int somme = 0;
	if (EstVide(L)) {
		return 0;
	}else {
		somme = Tete(L);
		L = Reste(L);
		return somme + SommeR(L);
		
	}
}

void MinEtMaxI(TListe L, TElement *pointeurSurMin, TElement *pointeurSurMax)
// L est supposée non vide
// Cette procédure donne la plus petite et la plus grande valeurs de L.
// Version itérative.
{	
	*pointeurSurMin = *pointeurSurMax = Tete(L);
	L = Reste(L);
	while (!EstVide(L)) {
		if (Tete(L) > *pointeurSurMax)
			*pointeurSurMax = Tete(L);

		if (Tete(L) < *pointeurSurMin)
			*pointeurSurMin = Tete(L);

		L = Reste(L);
	}
}

void MinEtMaxR(TListe L, TElement *pointeurSurMin, TElement *pointeurSurMax)
// L est supposée non vide
// Cette procédure donne la plus petite et la plus grande valeurs de L.
// Version itérative.
{
	*pointeurSurMin = *pointeurSurMax = (int)sizeof(L);	// Instruction bidon, à remplacer !
}

int NombreOccurrencesI(TElement valeurCherchee, TListe L)
// Donne le nombre d'occurrences de valeurCherchee dans L.
// Version itérative.
{
	return valeurCherchee+(int)sizeof(L);	// Instruction bidon, à remplacer !
}

int NombreOccurrencesR(TElement valeurCherchee, TListe L)
// Donne le nombre d'occurrences de valeurCherchee dans L.
// Version récursive.
{
	return valeurCherchee+(int)sizeof(L);	// Instruction bidon, à remplacer !
}

bool PresenceI(TElement valeurCherchee, TListe L)
// Vérifie la présence de valeurCherchee dans L. Version itérative !
{
	return 	valeurCherchee == (int)sizeof(L);	// Instruction bidon, à remplacer !
}

bool PresenceR(TElement valeurCherchee, TListe L)
// Vérifie la présence de valeurCherchee dans L. Version itérative !
{
	return 	valeurCherchee == (int)sizeof(L);	// Instruction bidon, à remplacer !
}

void AfficherListeI(TListe L)
// Affiche la liste entre parenthèses sans passer à la ligne.
// Exemple : (1, 2, 3)
{
	printf ("%d\n", (int)sizeof(L));	// Instruction bidon, à remplacer !
}

TListe InsertionEnQueueI(TElement v, TListe L)
// Donne une ^liste égale à L mais avec une valeur en plus à la fin : v. Version itérative !
{
	return Cons (v+(int)sizeof (L), ConsVide ());	// Instruction bidon, à remplacer !
}

TListe InsertionEnQueueR(TElement v, TListe L)
// Donne une ^liste égale à L mais avec une valeur en plus à la fin : v. Version récursive !
{
	return Cons(v + (int)sizeof(L), ConsVide());	// Instruction bidon, à remplacer !
}

void RemplacementsR(TElement v1, TElement v2, TListe *pointeurSurL)
// Remplace les occurrences de v1 par v2 dans *pointeurSurL
{
	v1 = v2 + (int)sizeof(*pointeurSurL);	// Instruction bidon, à remplacer !
}

TListe InversionR(TListe L)
// Donne une liste contenant les mêmes éléments que L mais dans l'ordre inverse. 
// Version itérative !
{
	return Cons((int)sizeof(L), ConsVide());	// Instruction bidon, à remplacer !
}

TListe InversionI(TListe L)
// Donne une liste contenant les mêmes éléments que L mais dans l'ordre inverse. 
// Version récursive !
{
	return Cons((int)sizeof(L), ConsVide());	// Instruction bidon, à remplacer !
}

int main(int, char **)
{
	/////////////////////////////////////////////////////////////////////////////
	//
	// NE RIEN MODIFIER DANS CETTE FONCTION
	//
	/////////////////////////////////////////////////////////////////////////////

	int NombrePoints = 0;

	// Les listes qui seront utilisées dans les tests (de tailles 0, 1, 2, 5 et 8)
	TListe	L0, L1, L2, L5, L8;

	try {
		////////////////////////////////////////////////////
		//
		// Création de listes de Tailles 0, 1, 2, 5 et 8
		//
		////////////////////////////////////////////////////
		L0 = ConsVide();
		L1 = Cons(1, ConsVide());
		L2 = Cons(1, Cons(2, ConsVide()));
		L5 = Cons(1, Cons(2, Cons(3, Cons(4, Cons(5, ConsVide())))));
		L8 = Cons(6, Cons(4, Cons(4, Cons(3, Cons(9, Cons(6, Cons(4, Cons(5, ConsVide()))))))));
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". La creation des listes a echoue, on arrete tout\n");
		printf("\n");
		system("pause");
		return 0;
	}
	catch (...) {
		printf("La creation des listes a echoue, on arrete tout\n");
		printf("\n");
		system("pause");
		return 0;
	}

	try {
		////////////////////////////////////////////////////
		//
		// Tests de la fonction TailleI
		//
		////////////////////////////////////////////////////
		if ((TailleI(L0) == 0) && (TailleI(L1) == 1) && (TailleI(L2) == 2) && (TailleI(L5) == 5)) {
			printf("La taille (version iterative) est EXACTE\n");
			NombrePoints++;
		}
		else
			printf("La taille (version iterative) est FAUSSE\n");
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". TailleI a echoue\n");
	}
	catch (...) {
		printf("TailleI a echoue\n");
	}


	try {
		////////////////////////////////////////////////////
		//
		// Tests de la fonction TailleR
		//
		////////////////////////////////////////////////////
		if ((TailleR(L0) == 0) && (TailleR(L1) == 1) && (TailleR(L2) == 2) && (TailleR(L5) == 5)) {
			printf("La taille (version recursive) est EXACTE\n");
			NombrePoints++;
		}
		else
			printf("La taille (version recursive) est FAUSSE\n");
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". TailleR a echoue\n");
	}
	catch (...) {
		printf("TailleR a echoue\n");
	}

	try {
		////////////////////////////////////////////////////
		//
		// Tests de la fonction SommeI
		//
		////////////////////////////////////////////////////
		if ((SommeI(L0) == 0) && (SommeI(L1) == 1) && (SommeI(L2) == 3) && (SommeI(L5) == 15)) {
			printf("\nLa Somme (version iterative) est EXACTE\n");
			NombrePoints++;
		}
		else
			printf("\nLa Somme (version iterative) est FAUSSE\n");
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". SommeI a echoue\n");
	}
	catch (...) {
		printf("SommeI a echoue\n");
	}

	try {
		////////////////////////////////////////////////////
		//
		// Tests de la fonction SommeR
		//
		////////////////////////////////////////////////////
		if ((SommeR(L0) == 0) && (SommeR(L1) == 1) && (SommeR(L2) == 3) && (SommeR(L5) == 15)) {
			printf("La Somme (version recursive) est EXACTE\n");
			NombrePoints++;
		}
		else
			printf("La Somme (version recursive) est FAUSSE\n");
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". SommeI a echoue\n");
	}
	catch (...) {
		printf("SommeI a echoue\n");
	}

	try {
		////////////////////////////////////////////////////
		//
		// Tests de la fonction MinEtMaxI
		//
		////////////////////////////////////////////////////
		TElement	max1, min1, max2, min2, max5, min5;
		MinEtMaxI(L1, &min1, &max1);
		MinEtMaxI(L2, &min2, &max2);
		MinEtMaxI(L5, &min5, &max5);
		if ((min1 == 1) && (max1 == 1) && (min2 == 1) && (max2 == 2) && (min5 == 1) && (max5 == 5)) {
			printf("\nLes min et max d'une liste (version iterative) sont BIEN calcules\n");
			NombrePoints++;
		}
		else
			printf("\nLes min et max d'une liste (version iterative) sont MAL calcules\n");
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". MinEtMaxI a echoue\n");
	}
	catch (...) {
		printf("MinEtMaxI a echoue\n");
	}

	try {
		////////////////////////////////////////////////////
		//
		// Tests de la fonction MaxEtMinR
		//
		////////////////////////////////////////////////////
		TElement	max1, min1, max2, min2, max5, min5;
		MinEtMaxR(L1, &min1, &max1);
		MinEtMaxR(L2, &min2, &max2);
		MinEtMaxR(L5, &min5, &max5);
		if ((min1 == 1) && (max1 == 1) && (min2 == 1) && (max2 == 2) && (min5 == 1) && (max5 == 5)) {
			printf("Les min et max d'une liste (version recursive) sont BIEN calcules\n");
			NombrePoints++;
		}
		else
			printf("Les min et max d'une liste (version recursive) sont MAL calcules\n");
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". MaxEtMinR a echoue\n");
	}
	catch (...) {
		printf("MaxEtMinR a echoue\n");
	}

	try {
		////////////////////////////////////////////////////
		//
		// Tests de la fonction NombreOccurrencesI
		//
		////////////////////////////////////////////////////
		if ((NombreOccurrencesI(1, L0) == 0) && (NombreOccurrencesI(1, L1) == 1) && (NombreOccurrencesI(0, L1) == 0) &&
			(NombreOccurrencesI(1, L2) == 1) && (NombreOccurrencesI(2, L2) == 1) && (NombreOccurrencesI(3, L2) == 0) &&
			(NombreOccurrencesI(4, L8) == 3) && (NombreOccurrencesI(6, L8) == 2) && (NombreOccurrencesI(5, L8) == 1) &&
			(NombreOccurrencesI(0, L8) == 0)) {
			printf("\nLe nombre d'occurrences (version iterative) est EXACT\n");
			NombrePoints++;
		}
		else
			printf("\nLe nombre d'occurrences (version iterative) est FAUX\n");
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". NombreOccurrencesI a echoue\n");
	}
	catch (...) {
		printf("NombreOccurrencesI a echoue\n");
	}

	try {
		////////////////////////////////////////////////////
		//
		// Tests de la fonction NombreOccurrencesR
		//
		////////////////////////////////////////////////////
		if ((NombreOccurrencesR(1, L0) == 0) && (NombreOccurrencesR(1, L1) == 1) && (NombreOccurrencesR(0, L1) == 0) &&
			(NombreOccurrencesR(1, L2) == 1) && (NombreOccurrencesR(2, L2) == 1) && (NombreOccurrencesR(3, L2) == 0) &&
			(NombreOccurrencesR(4, L8) == 3) && (NombreOccurrencesR(6, L8) == 2) && (NombreOccurrencesR(5, L8) == 1) &&
			(NombreOccurrencesR(0, L8) == 0)) {
			printf("Le nombre d'occurrences (version recursive) est EXACT\n");
			NombrePoints++;
		}
		else
			printf("Le nombre d'occurrences (version recursive) est FAUX\n");
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". NombreOccurrencesR a echoue\n");
	}
	catch (...) {
		printf("NombreOccurrencesR a echoue\n");
	}

	try{
		////////////////////////////////////////////////////
		//
		// Tests de la fonction PresenceI
		//
		////////////////////////////////////////////////////
		if (!PresenceI(1, L0) && PresenceI(1, L1) && !PresenceI(0, L1) && PresenceI(1, L2) && PresenceI(2, L2) &&
			!PresenceI(3, L2) && PresenceI(5, L8) && !PresenceI(-1, L8)) {
			printf("\nLe test de presence (version iterative) est EXACT\n");
			NombrePoints++;
		}
		else
			printf("\nLe test de presence (version iterative) est FAUX\n");
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". PresenceI a echoue\n");
	}
	catch (...) {
		printf("PresenceI a echoue\n");
	}

	try {
		////////////////////////////////////////////////////
		//
		// Tests de la fonction PresenceR
		//
		////////////////////////////////////////////////////
		if (!PresenceR(1, L0) && PresenceR(1, L1) && !PresenceR(0, L1) && PresenceR(1, L2) && PresenceR(2, L2) &&
			!PresenceR(3, L2) && PresenceR(5, L8) && !PresenceR(-1, L8)) {
			printf("Le test de presence (version recursive) est EXACT\n");
			NombrePoints++;
		}
		else
			printf("Le test de presence (version recursive) est FAUX\n");
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". PresenceR a echoue\n");
	}
	catch (...) {
		printf("PresenceR a echoue\n");
	}

	////////////////////////////////////////////////////
	//
	// Tests de la fonction AfficherListe
	//
	////////////////////////////////////////////////////
	try {
		printf("\nOn devrait lire (1, 2, 3, 4, 5) : ");
		AfficherListeI(L5);
		printf("SI CE N'EST PAS LE CAS, les prochains affichages de listes sont faux\n");
	}
	catch (ExceptionListesChainees& e) {
		printf_s("%s", e.what());
		printf(". AfficherListe echoue\n");
	}
	catch (...) {
		printf("AfficherListe echoue\n");
	}


	////////////////////////////////////////////////////
	//
	// Tests de la fonction InsertionEnQueueI
	//
	////////////////////////////////////////////////////

	bool bon = true;
	TElement		v;
	TListe	L;

	try {
		v = 1; L = L0;
		printf("\nLe resultat de l'insertion iterative de %d en queue de ", v);
		AfficherListeI(L);
		printf(" est ");
		AfficherListeI(InsertionEnQueueI(v, L));

		TListe Res = Cons(1, ConsVide());
		if (!EgaliteListes(InsertionEnQueueI(v, L), Res)) {
			printf("\nC'EST PAS bon\n");
			bon = false;
		}
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". Le premier test de InsertionEnQueueI a echoue\n");
		bon = false;
	}
	catch (...) {
		printf("Le premier test de InsertionEnQueueI a echoue\n");
		bon = false;
	}

	try {
		v = 2; L = L1;
		printf("\nLe resultat de l'insertion iterative de %d en queue de ", v);
		AfficherListeI(L);
		printf(" est ");
		AfficherListeI(InsertionEnQueueI(v, L));
		if (!EgaliteListes(InsertionEnQueueI(v, L), Cons(1, Cons(2, ConsVide())))) {
			printf("\nC'EST PAS bon\n");
			bon = false;
		}
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". Le deuxieme test de InsertionEnQueueI a echoue\n");
		bon = false;
	}
	catch (...) {
		printf("Le deuxieme test de InsertionEnQueueI a echoue\n");
		bon = false;
	}

	try {
		v = -1; L = L8;
		printf("\nLe resultat de l'insertion iterative de %d en queue de ", v);
		AfficherListeI(L);
		printf(" est ");
		AfficherListeI(InsertionEnQueueI(v, L));
		if (!EgaliteListes(InsertionEnQueueI(v, L), Cons(6, Cons(4, Cons(4, Cons(3, Cons(9, Cons(6, Cons(4, Cons(5, Cons(-1, ConsVide()))))))))))) {
			printf("\nC'EST PAS bon\n");
			bon = false;
		}
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". Le troisieme test de InsertionEnQueueI a echoue\n");
		bon = false;
	}
	catch (...) {
		printf("Le troisieme test de InsertionEnQueueI a echoue\n");
		bon = false;
	}

	if (bon)
		NombrePoints++;

	////////////////////////////////////////////////////
	//
	// Tests de la fonction InsertionEnQueueR
	//
	////////////////////////////////////////////////////
	bon = true;

	try  {
		v = 1; L = L0;
		printf("\nLe resultat de l'insertion recursive de %d en queue de ", v);
		AfficherListeI(L);
		printf(" est ");
		AfficherListeI(InsertionEnQueueR(v, L));
		if (!EgaliteListes(InsertionEnQueueR(v, L), Cons(1, ConsVide()))) {
			printf("\nC'EST PAS bon\n");
			bon = false;
		}
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". Le premier test de InsertionEnQueueR a echoue\n");
		bon = false;
	}
	catch (...) {
		printf("Le premier test de InsertionEnQueueR a echoue\n");
		bon = false;
	}

	try {
		v = 2; L = L1;
		printf("\nLe resultat de l'insertion recursive de %d en queue de ", v);
		AfficherListeI(L);
		printf(" est ");
		AfficherListeI(InsertionEnQueueR(v, L));
		if (!EgaliteListes(InsertionEnQueueR(v, L), Cons(1, Cons(2, ConsVide())))) {
			printf("\nC'EST PAS bon\n");
			bon = false;
		}
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". Le deuxieme test de InsertionEnQueueR a echoue\n");
		bon = false;
	}
	catch (...) {
		printf("Le deuxieme test de InsertionEnQueueR a echoue\n");
		bon = false;
	}

	try {
		v = -1; L = L8;
		printf("\nLe resultat de l'insertion recursive de %d en queue de ", v);
		AfficherListeI(L);
		printf(" est ");
		AfficherListeI(InsertionEnQueueR(v, L));
		if (!EgaliteListes(InsertionEnQueueR(v, L), Cons(6, Cons(4, Cons(4, Cons(3, Cons(9, Cons(6, Cons(4, Cons(5, Cons(-1, ConsVide()))))))))))) {
			printf("\nC'EST PAS bon\n");
			bon = false;
		}
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". Le troisieme test de InsertionEnQueueR a echoue\n");
		bon = false;
	}
	catch (...) {
		printf("Le troisieme test de InsertionEnQueueR a echoue\n");
		bon = false;
	}

	if (bon)
		NombrePoints++;

	////////////////////////////////////////////////////
	//
	// Tests de la fonction RemplacementsR
	//
	////////////////////////////////////////////////////
	bon = true;

	TElement v1, v2;
	try {
		v1 = 1; v2 = 2; L = L0;
		TListe CopL = Copie(L);
		printf("\nApres remplacement des %d par des %d, la liste ", v1, v2);
		AfficherListeI(L);
		printf(" devient ");
		RemplacementsR(v1, v2, &L);
		AfficherListeI(L);

		if (!EgaliteListes(L, ConsVide())) {
			printf("\nC'EST PAS bon\n");
			bon = false;
		}
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". Le premier test de RemplacementsR a echoue\n");
		bon = false;
	}
	catch (...) {
		printf("Le premier test de RemplacementsR a echoue\n");
		bon = false;
	}

	try {
		v1 = 1; v2 = 2; L = L1;
		printf("\nApres remplacement des %d par des %d, la liste ", v1, v2);
		AfficherListeI(L);
		printf(" devient ");
		RemplacementsR(v1, v2, &L);
		AfficherListeI(L);

		if (!EgaliteListes(L, Cons(2, ConsVide()))) {
			printf("\nC'EST PAS bon\n");
			bon = false;
		}
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". Le deuxieme test de RemplacementsR a echoue\n");
		bon = false;
	}
	catch (...) {
		printf("Le deuxieme test de RemplacementsR a echoue\n");
		bon = false;
	}

	try {
		v1 = 4; v2 = -4; L = L8;
		printf("\nApres remplacement des %d par des %d, la liste ", v1, v2);
		AfficherListeI(L);
		printf(" devient ");
		RemplacementsR(v1, v2, &L);
		AfficherListeI(L);
		printf("\n");

		if (!EgaliteListes(L, Cons(6, Cons(-4, Cons(-4, Cons(3, Cons(9, Cons(6, Cons(-4, Cons(5, ConsVide())))))))))) {
			printf("\nC'EST PAS bon\n");
			bon = false;
		}
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". Le troisieme test de RemplacementsR a echoue\n");
		bon = false;
	}
	catch (...) {
		printf("Le troisieme test de RemplacementsR a echoue\n");
		bon = false;
	}

	if (bon)
		NombrePoints++;

	////////////////////////////////////////////////////
	//
	// Tests de la fonction InversionI
	//
	////////////////////////////////////////////////////
	bon = true;

	try {
		L = L0;
		printf("\nApres inversion iterative, la liste ");
		AfficherListeI(L);
		printf(" devient ");
		L = InversionI(L);
		AfficherListeI(L);

		if (!EgaliteListes(L, ConsVide())) {
			printf("\nC'EST PAS bon\n");
			bon = false;
		}
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". Le premier test de InversionI a echoue\n");
		bon = false;
	}
	catch (...) {
		printf("Le premier test de InversionI a echoue\n");
		bon = false;
	}

	try {
		L = L8;
		printf("\nApres inversion iterative, la liste ");
		AfficherListeI(L);
		printf(" devient ");
		L = InversionI(L);
		AfficherListeI(L);
		printf("\n");

		if (!EgaliteListes(L, Cons(5, Cons(4, Cons(6, Cons(9, Cons(3, Cons(4, Cons(4, Cons(6, ConsVide())))))))))) {
			printf("\nC'EST PAS bon\n");
			bon = false;
		}
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". Le deuxieme test de InversionI a echoue\n");
		bon = false;
	}
	catch (...) {
		printf("Le deuxieme test de InversionI a echoue\n");
		bon = false;
	}

	if (bon)
		NombrePoints++;

	////////////////////////////////////////////////////
	//
	// Tests de la fonction InversionR
	//
	////////////////////////////////////////////////////
	bon = true;

	try {
		L = L0;
		printf("\nApres inversion recursive, la liste ");
		AfficherListeI(L);
		printf(" devient ");
		L = InversionR(L);
		AfficherListeI(L);

		if (!EgaliteListes(L, ConsVide())) {
			printf("\nC'EST PAS bon\n");
			bon = false;
		}
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". Le premier test de InversionR a echoue\n");
		bon = false;
	}
	catch (...) {
		printf("Le premier test de InversionR a echoue\n");
		bon = false;
	}

	try {
		L = L8;
		printf("\nApres inversion recursive, la liste ");
		AfficherListeI(L);
		printf(" devient ");
		L = InversionR(L);
		AfficherListeI(L);
		printf("\n");

		if (!EgaliteListes(L, Cons(5, Cons(4, Cons(6, Cons(9, Cons(3, Cons(4, Cons(4, Cons(6, ConsVide())))))))))) {
			printf("\nC'EST PAS bon\n");
			bon = false;
		}
	}
	catch (ExceptionListesChainees &e) {
		printf_s("%s", e.what());
		printf(". Le deuxieme test de InversionR a echoue\n");
		bon = false;
	}
	catch (...) {
		printf("Le deuxieme test de InversionR a echoue\n");
		bon = false;
	}

	if (bon)
		NombrePoints++;

	printf("\n************************************************\n");
	printf("* NOTE MAX : %3.1lf / 20\n", 4.*NombrePoints / 3.);
	printf("************************************************\n");

	printf("\n");
	system("pause");
	return 0;
}
