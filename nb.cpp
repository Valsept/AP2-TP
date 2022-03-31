int NombreOccurrencesI(TElement valeurCherchee, TListe L)
// Donne le nombre d'occurrences de valeurCherchee dans L.
// Version itérative.
{
	TElement valeurCherchee = 3;
	TListe p = L;
	int nbocc = 0;

	while (!EstVide(p)) {
		if (Tete(p) == valeurCherchee) {
			nbocc += 1;
			p = Reste(p);
		}
	}
	return nbocc;
}

int NombreOccurrencesR(TElement valeurCherchee, TListe L)
// Donne le nombre d'occurrences de valeurCherchee dans L.
// Version récursive.
{
	if(EstVide(p){
        return 0;
    }
    if (Tete(L) == valeurCherchee){
        return valeurCherchee;
    } else {
        return 1 + NombreOccurrencesR(Tete(L), Reste(L));
    }
}
