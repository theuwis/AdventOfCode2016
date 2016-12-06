#include <stdio.h>

int main() {
   FILE * fp_data;
   fp_data = fopen("data", "r");

   int v11, v21, v31, v12, v22, v32, v13, v23, v33;
   int nrparsed = 0, possible = 0;

   while(!feof(fp_data)){
      fscanf(fp_data, "%d %d %d\n", &v11, &v21, &v31); nrparsed++;
      fscanf(fp_data, "%d %d %d\n", &v12, &v22, &v32); nrparsed++;
      fscanf(fp_data, "%d %d %d\n", &v13, &v23, &v33); nrparsed++;

      if( (v11 + v12 > v13) && (v11 + v13 > v12) && (v12 + v13 > v11) ){
         possible++;
      }
      if( (v21 + v22 > v23) && (v21 + v23 > v22) && (v22 + v23 > v21) ){
         possible++;
      }
      if( (v31 + v32 > v33) && (v31 + v33 > v32) && (v32 + v33 > v31) ){
         possible++;
      }
   }

   printf("answer=%d (parsed=%d)\n", possible, nrparsed);
   return 0;
}
