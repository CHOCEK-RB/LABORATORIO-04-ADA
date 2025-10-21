#include <stdio.h>

#include "graph.hpp"

void GRAPHshow(Graph G) {
  printf("Grafo con %d vertices y %d arcos\n", G->V, G->A);
  for (vertex v = 0; v < G->V; ++v) {
    printf("%2d:", v);
    for (link a = G->adj[v]; a != NULL; a = a->next) {
      printf(" %2d", a->w);
    }
    printf("\n");
  }
}
