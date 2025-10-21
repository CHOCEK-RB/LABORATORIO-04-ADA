#include "graph.hpp"

void GRAPHremoveArc(Graph G, vertex v, vertex w) {
  link current = G->adj[v];
  link prev = NULL;

  while (current != NULL && current->w != w) {
    prev = current;
    current = current->next;
  }

  if (current == NULL)
    return;

  if (prev == NULL) {
    G->adj[v] = current->next;
  } else {
    prev->next = current->next;
  }
  free(current);
  G->A--;
}
