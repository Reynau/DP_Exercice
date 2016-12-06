# DP_Exercice

Un grup d’amics del departament d’astronomia vol observar el cel aquesta nit (que ´es un dia amb cel ras). Suposem el següent:
- Hi ha n esdeveniments que ocórren en una seqüència de n minuts, on l’esdeveniment j ocorre al minut j. Si no observem el esdeveniment j al minut j, no l’observem mai.
- Suposem que utilitzem un sistema 1-dimensional per modelitzar el cel (que correspon el grau de l’angle del telescopi); és a dir, l’esdeveniment j t´e coordenada dj per dj ∈ Z. Al minut 0, la posició del telescopi és 0.
- L’últim esdeveniment n és més important que els altres; per tant estem obligats a observar l’esdeveniment n. El telescopi del departament ´es molt gran i només es pot moure un grau cada minut. Per tant, és possible que no es pugui observar tots els esdeveniments. Un conjunt d’esdeveniments S es diu observable, si per a cada j ∈ S, es pot observar l’esdeveniment j al minut j i entre dos elements consecutius j, k de S el telescopi té el temps necessari per bellugar-se (amb velocitat com a màxim 1 per minut) de dj a dk. Donats n esdeveniments, i una seqüència {dj} n j=1 que correspon a les coordenades dels esdeveniments, volem trobar el conjunt més gran de tots els esdeveniments observables S amb la condició que n ∈ S.
Exemple: Si tenim n = 9 i d1 = 1, d2 = −4, d3 = −1, d4 = 4, d5 = 5, d6 = −4, d7 = 6, d8 = 7, d9 = −2, llavors la solució òptima és S = {1, 3, 6, 9} (Notem que sense la restricció de que l’esdeveniment 9 ha de ser a S la solució seria {1, 4, 5, 7, 8}.
- Donada una seqüència d’enters d1, . . . , dn, doneu un algorisme correcte i polinòmic en n per calcular el conjunt observable S més gran
(amb la condició que n ∈ S).
