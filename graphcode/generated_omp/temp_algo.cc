#include"temp_algo.h"

void count_nodes(graph& g)
{
  int* prop=new int[g.num_nodes()];
  int* prop1=new int[g.num_nodes()];
  int* prop2=new int[g.num_nodes()];
  int* prop3=new int[g.num_nodes()];
  int* prop4=new int[g.num_nodes()];
  int result = 0;
  int x = 0 ;
  int y = 0 ;
  int z = 0 ;
  x = 10 + 13;
  #pragma omp parallel for
  for (int t = 0; t < g.num_nodes(); t ++) 
  {
    prop[t] = y;
    prop1[t] = x;
  }
  y = x;

}