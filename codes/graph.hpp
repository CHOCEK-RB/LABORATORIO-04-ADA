#pragma once

#include <stdlib.h>

#define vertex int

typedef struct node *link;
struct node {
  vertex w;
  link next;
};

struct graph {
  int V;
  int A;
  link *adj;
};
typedef struct graph *Graph;

static link NEWnode(vertex w, link next);
Graph GRAPHinit(int V);
void GRAPHinsertArc(Graph G, vertex v, vertex w);
