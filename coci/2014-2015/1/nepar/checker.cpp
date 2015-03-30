#include <cstdio>
#include <cstdlib>

int main(int argc, char **argv) {

  int nemoguce = 0;
  FILE *official_output;
  official_output = fopen(argv[2], "r");
  if (official_output == NULL) {
    printf("Ne mogu ucitati %s\n", argv[2]);
  }
  // NE odgovor
  int test_num;
  if (fscanf(official_output, "%d", &test_num) <= 0) {
    nemoguce = 1;
  }
  fclose(official_output);

  FILE *program_output;
  program_output = fopen(argv[3], "r");
  if (program_output == NULL) {
    printf("Ne mogu ucitati %s\n", argv[3]);
  }
  int a, b, c, d;
  int ucito_brojeve = fscanf(program_output, "%d %d %d %d", &a, &b, &c, &d);
  fclose(program_output);
  if (((a + b) % 2 == 0 && (c + d) % 2 == 1) || (nemoguce == 1 && ucito_brojeve <= 0)) {
    printf("OK");
  } else {
    printf("WA");
  }
  printf("\n");

  return 0;
}
