#include <stdio.h>
#include <stdlib.h>

#include "ejercicio2.cpp"
#include "ejercicio4.cpp"
#include "ejercicio5.cpp"
#include "ejercicio6.cpp"

int main() {
  Graph G1 = GRAPHinit(6);
  GRAPHinsertArc(G1, 0, 1);
  GRAPHinsertArc(G1, 0, 5);
  GRAPHinsertArc(G1, 1, 0);
  GRAPHinsertArc(G1, 1, 5);
  GRAPHinsertArc(G1, 2, 4);
  GRAPHinsertArc(G1, 3, 1);
  GRAPHinsertArc(G1, 5, 3);

  printf("Estado inicial de G1:\n");
  GRAPHshow(G1);

  printf("Grado de salida del vertice 0: %d\n", GRAPHoutdeg(G1, 0));
  printf("Grado de entrada del vertice 1: %d\n", GRAPHindeg(G1, 1));
  printf("Grado de entrada del vertice 5: %d\n", GRAPHindeg(G1, 5));

  printf("\nEliminar arco 1->5 de G1:\n");
  GRAPHremoveArc(G1, 1, 5);
  GRAPHshow(G1);

  GRAPHdestroy(G1);
  printf("Memoria liberada.\n");

  return 0;
}
