#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main (int argc, const char * argv[]) {
//declaro la matriz de 3 dimensiones
int automata[2][6][5] =
{ { {0, 1, 0, 0, 0},
    {1, 1, 0, 1, 1},
    {0, 1, 0, 0, 1},
    {1, 1, 0, 1, 2},
    {2, 2, 0, 2, 2},
    {2, 2, 0, 2, 2},
},
{
    {'$', '$', '$', '$', "R$"},
    {'$', '$', '$', '$',  '$'},
    {'R', 'R', 'R', "RR", 'R'},
    {'R', 'R', 'R', 'R', "epsilon"},
    {'R', 'R', 'R', 'R', "epsilon"},
    {'$', '$', '$', '$', '$'}

}

};






return 0;
}