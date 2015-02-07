#include <cstdio>
#include <cstdlib>
#define EPS 0.0001

FILE *correct_output;
FILE *program_output;

void close() {
  if (correct_output) fclose(correct_output);
  if (program_output) fclose(program_output);
}

void wa() {
  printf("×\nWrong answer\n");
  close();
  exit(0);
}

void ac() {
  printf("✓\nCorrect\n");
  close();
  exit(0);
}

int eq(double a, double b) {
  if (b - a < EPS || a - b < EPS) return 1;
  return 0;
}

int main(int argc, char **argv) {

  correct_output = fopen(argv[2], "r");
  program_output = fopen(argv[3], "r");

  double a, b;
  while (fscanf(correct_output, "%lf", &a) > 0) {
    if (fscanf(program_output, "%lf", &b) <= 0) {
      wa();
      break;
    }
    if (!eq(a, b)) {
      wa();
      break;
    }
  }

  ac();
}
