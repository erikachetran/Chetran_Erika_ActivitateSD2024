//#include <stdio.h>
//#include <stdlib.h>
//
//struct Carte {
//    char* titlu;
//    char* autor;
//    int anPublicare;
//};
//
//// Functie pentru citirea unei carti de la tastatura
//struct Carte citesteCarte() {
//    struct Carte carte;
//
//    printf("Introduceti titlul cartii: ");
//    carte.titlu = (char*)malloc(100 * sizeof(char));
//    scanf("%s", carte.titlu);
//
//    printf("Introduceti autorul cartii: ");
//    carte.autor = (char*)malloc(100 * sizeof(char));
//    scanf("%s", carte.autor);
//
//    printf("Introduceti anul publicarii: ");
//    scanf("%d", &carte.anPublicare);
//
//    return carte;
//}
//
//// Functie pentru calcularea anului maxim dintre doua carti
//int anMaxim(struct Carte carte1, struct Carte carte2) {
//    return (carte1.anPublicare > carte2.anPublicare) ? carte1.anPublicare : carte2.anPublicare;
//}
//
//// Functie pentru afisarea informatiilor despre o carte
//void afiseazaCarte(struct Carte carte) {
//    printf("Titlu: %s\n", carte.titlu);
//    printf("Autor: %s\n", carte.autor);
//    printf("Anul publicarii: %d\n", carte.anPublicare);
//}
//
//// Functie pentru eliberarea memoriei alocate dinamic pentru o carte
//void elibereazaMemorie(struct Carte* carte) {
//    free(carte->titlu);
//    free(carte->autor);
//}
//
//int main() {
//    struct Carte carte1, carte2;
//
//    printf("Introduceti informatii pentru prima carte:\n");
//    carte1 = citesteCarte();
//
//    printf("\nIntroduceti informatii pentru a doua carte:\n");
//    carte2 = citesteCarte();
//
//    printf("\nInformatii despre prima carte:\n");
//    afiseazaCarte(carte1);
//
//    printf("\nInformatii despre a doua carte:\n");
//    afiseazaCarte(carte2);
//
//    printf("\nAnul maxim dintre cele doua carti este: %d\n", anMaxim(carte1, carte2));
//
//    // Eliberare memorie
//    elibereazaMemorie(&carte1);
//    elibereazaMemorie(&carte2);
//
//    return 0;
//}
