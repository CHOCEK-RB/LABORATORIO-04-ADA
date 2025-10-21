#include <stdio.h>
#include <stdlib.h>

// #include "ejercicio2.cpp" -> include in ejercicio10
#include "ejercicio4.cpp"
#include "ejercicio5.cpp"
// #include "ejercicio6.cpp" -> include in ejercicio9
#include "ejercicio10.cpp"
#include "ejercicio7.cpp"
#include "ejercicio8.cpp"
#include "ejercicio9.cpp"

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

  printf("\nEs G1 no-dirigido?: %s\n", GRAPHundir(G1) ? "Si" : "No");

  Graph G2 = GRAPHinit(4);
  UGRAPHinsertEdge(G2, 0, 1);
  UGRAPHinsertEdge(G2, 1, 2);
  UGRAPHinsertEdge(G2, 2, 3);
  UGRAPHinsertEdge(G2, 3, 0);
  UGRAPHinsertEdge(G2, 0, 2);

  printf("\nEstado inicial de G2:\n");
  GRAPHshow(G2);

  printf("\nEs G2 no-dirigido?: %s\n", GRAPHundir(G2) ? "Si" : "No");

  printf("\nGrado maximo en G2: %d\n", UGRAPHmaxDegree(G2));

  printf("\nEliminar arista 0-2 de G2:\n");
  UGRAPHremoveEdge(G2, 0, 2);
  GRAPHshow(G2);

  printf("\nGrado maximo en G2: %d\n", UGRAPHmaxDegree(G2));

  GRAPHdestroy(G1);
  GRAPHdestroy(G2);
  printf("Memoria liberada.\n");
  return 0;
}
