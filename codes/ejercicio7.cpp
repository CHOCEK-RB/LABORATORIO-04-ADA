#include "graph.hpp"

int GRAPHundir(Graph G) {
  for (vertex v = 0; v < G->V; ++v) {
    for (link a = G->adj[v]; a != NULL; a = a->next) {
      vertex w = a->w;
      int found = 0;

      for (link b = G->adj[w]; b != NULL; b = b->next) {
        if (b->w == v) {
          found = 1;
          break;
        }
      }
      if (!found) {
        return 0;
      }
    }
  }
  return 1;
}
