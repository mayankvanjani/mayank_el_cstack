#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main( int argc, char** argv ) {

  screen s;
  struct matrix *edges;
  struct matrix *transform;
  //  struct stack *origin;

  edges = new_matrix(4, 4);
  transform = new_matrix(4, 4);
  //  origin = new_stack();

  if ( argc == 2 )
    parse_file( argv[1], transform, edges, s );
  else
    parse_file( "stdin", transform, edges, s );

  //  free_stack( origin );
  free_matrix( edges );
  free_matrix( transform );
}  
