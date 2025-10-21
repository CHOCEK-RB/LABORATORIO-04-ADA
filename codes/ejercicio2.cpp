#include "graph.hpp"

int GRAPHoutdeg(Graph G, vertex v) {
  int count = 0;
  for (link a = G->adj[v]; a != NULL; a = a->next) {
    count++;
  }
  return count;
}

int GRAPHindeg(Graph G, vertex v) {
  int count = 0;
  for (vertex i = 0; i < G->V; ++i) {
    for (link a = G->adj[i]; a != NULL; a = a->next) {
      if (a->w == v) {
        count++;
      }
    }
  }
  return count;
}
