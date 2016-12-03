#include <stdio.h>

int main() {
   FILE * fp_data;
   fp_data = fopen("data", "r");

   int v1, v2, v3, lines_parsed = 0, possible = 0;

   while(!feof(fp_data)){
      fscanf(fp_data, "%d%d%d\n", &v1, &v2, &v3);

      if( (v1 + v2 > v3) && (v1 + v3 > v2) && (v2 + v3 > v1) ){
         possible++;
      }
      lines_parsed++;
   }

   printf("answer=%d (parsed=%d)\n", possible, lines_parsed);
   return 0;
}
