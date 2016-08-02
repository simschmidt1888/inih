#include "../ini.h"

int main(int argc, char const *argv[]) {
  /* code */


  char** sections = ini_get_sections("test.ini");

  for(int i = 0; sections[i] != NULL; i++){
    printf("%s\n", sections[i]);
  }

  return 0;
}
