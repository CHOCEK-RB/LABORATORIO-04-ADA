#include "graph.hpp"

void GRAPHdestroy(Graph G) {
  if (G == NULL)
    return;
  for (vertex v = 0; v < G->V; ++v) {
    link current = G->adj[v];
    while (current != NULL) {
      link temp = current;
      current = current->next;
      free(temp);
    }
  }
  free(G->adj);
  free(G);
}
