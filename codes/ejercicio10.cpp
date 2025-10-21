#include "ejercicio2.cpp"
#include "graph.hpp"

int UGRAPHmaxDegree(Graph G) {
  int max_deg = 0;
  for (vertex v = 0; v < G->V; ++v) {
    int deg = GRAPHoutdeg(G, v);
    if (deg > max_deg) {
      max_deg = deg;
    }
  }
  return max_deg;
}
