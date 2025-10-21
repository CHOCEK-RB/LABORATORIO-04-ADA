#include "ejercicio6.cpp"
#include "graph.hpp"

void UGRAPHremoveEdge(Graph G, vertex v, vertex w) {
  GRAPHremoveArc(G, v, w);
  GRAPHremoveArc(G, w, v);
}
