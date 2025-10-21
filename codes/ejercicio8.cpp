#include "graph.hpp"

void UGRAPHinsertEdge(Graph G, vertex v, vertex w) {
  GRAPHinsertArc(G, v, w);
  GRAPHinsertArc(G, w, v);
}
