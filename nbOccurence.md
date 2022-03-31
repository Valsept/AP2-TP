mbOccurence[v, ()] = 0
mbOccurence[v, (a, R)] =    si v = a retourner 1 + mbOccurence[v, R] 
                            sinon retourner nbOccurence[v, R]

a = Tete(L)
R = Reste(L)