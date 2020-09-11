#include <iostream>
#include <stdio.h>

int ruler( int height ) {
  if(height == 1) {
    printf("-\n");
  } else {
    ruler(height - 1);
    for(int i = 0; i < height; i ++) {
      printf("-");
    }
    printf("\n");
    ruler(height - 1);
  }
  return height;
}

int main() {
  ruler(5);
}
