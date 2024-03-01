//#include <stdio.h>
//#include <stdlib.h>
//
//struct Carte {
//    char* titlu;
//    char* autor;
//    int anPublicare;
//};
//
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
//struct Carte* creazaVector(int dimensiune) {
//    struct Carte* vector = (struct Carte*)malloc(dimensiune * sizeof(struct Carte));
//    return vector;
//}
//
//void copiazaObiecte(struct Carte* vectorSursa, int dimensiuneSursa, struct Carte** vectorDest, int* dimensiuneDest, int conditie) {
//    *dimensiuneDest = 0;
//    *vectorDest = creazaVector(dimensiuneSursa);
//
//    for (int i = 0; i < dimensiuneSursa; i++) {
//        if (vectorSursa[i].anPublicare > conditie) {
//            (*vectorDest)[*dimensiuneDest] = vectorSursa[i];
//            (*dimensiuneDest)++;
//        }
//    }
//}
//
//void mutaObiecte(struct Carte* vectorSursa, int dimensiuneSursa, struct Carte** vectorDest, int* dimensiuneDest, int conditie) {
//    *dimensiuneDest = 0;
//    *vectorDest = creazaVector(dimensiuneSursa);
//
//    for (int i = 0; i < dimensiuneSursa; i++) {
//        if (vectorSursa[i].anPublicare < conditie) {
//            (*vectorDest)[*dimensiuneDest] = vectorSursa[i];
//            (*dimensiuneDest)++;
//        }
//    }
//}
//
//void concateneazaVectori(struct Carte* vector1, int dimensiune1, struct Carte* vector2, int dimensiune2, struct Carte** vectorConcatenat, int* dimensiuneConcatenat) {
//    *dimensiuneConcatenat = dimensiune1 + dimensiune2;
//    *vectorConcatenat = creazaVector(*dimensiuneConcatenat);
//
//    for (int i = 0; i < dimensiune1; i++) {
//        (*vectorConcatenat)[i] = vector1[i];
//    }
//
//    for (int i = 0; i < dimensiune2; i++) {
//        (*vectorConcatenat)[dimensiune1 + i] = vector2[i];
//    }
//}
//
//void afiseazaVector(struct Carte* vector, int dimensiune) {
//    for (int i = 0; i < dimensiune; i++) {
//        printf("Titlu: %s, Autor: %s, Anul publicarii: %d\n", vector[i].titlu, vector[i].autor, vector[i].anPublicare);
//    }
//}
//
//int main() {
//    struct Carte* vectorCarti;
//    int dimensiuneVector = 5;
//
//    vectorCarti = creazaVector(dimensiuneVector);
//
//    // Citirea datelor pentru fiecare carte
//    for (int i = 0; i < dimensiuneVector; i++) {
//        printf("Introduceti informatii pentru carte %d:\n", i + 1);
//        vectorCarti[i] = citesteCarte();
//    }
//
//    // Afisarea vectorului initial
//    printf("\nVectorul initial de carti:\n");
//    afiseazaVector(vectorCarti, dimensiuneVector);
//
//    // Copierea obiectelor care indeplinesc o anumita conditie intr-un nou vector
//    int dimensiuneVectorCopiaza;
//    struct Carte* vectorCopiaza;
//    copiazaObiecte(vectorCarti, dimensiuneVector, &vectorCopiaza, &dimensiuneVectorCopiaza, 2000);
//
//    printf("\nVectorul de carti cu anul publicarii mai mare de 2000:\n");
//    afiseazaVector(vectorCopiaza, dimensiuneVectorCopiaza);
//
//    // Muta obiectele care indeplinesc o alta conditie intr-un nou vector
//    int dimensiuneVectorMuta;
//    struct Carte* vectorMuta;
//    mutaObiecte(vectorCarti, dimensiuneVector, &vectorMuta, &dimensiuneVectorMuta, 1990);
//
//    printf("\nVectorul de carti cu anul publicarii mai mic de 1990:\n");
//    afiseazaVector(vectorMuta, dimensiuneVectorMuta);
//
//    // Concatenarea a doi vectori
//    int dimensiuneVectorConcatenat;
//    struct Carte* vectorConcatenat;
//    concateneazaVectori(vectorCopiaza, dimensiuneVectorCopiaza, vectorMuta, dimensiuneVectorMuta, &vectorConcatenat, &dimensiuneVectorConcatenat);
//
//    printf("\nVectorul rezultat dupa concatenarea celor doua vectori:\n");
//    afiseazaVector(vectorConcatenat, dimensiuneVectorConcatenat);
//
//    // Eliberare memorie
//    for (int i = 0; i < dimensiuneVector; i++) {
//        elibereazaMemorie(&vectorCarti[i]);
//    }
//    free(vectorCarti);
//    free(vectorCopiaza);
//    free(vectorMuta);
//    free(vectorConcatenat);
//
//    return 0;
//}
