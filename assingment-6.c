 #include <stdio.h>
int main(){
  float s, u, t, a;

  printf("Enter initial velocity: ");
  scanf("%f", &u);

  printf("Enter time: ");
  scanf("%f", &t);

  printf("Enter acceleration: ");
  scanf("%f", &a);

  s = (u * t) + (0.5 * a * t * t);

  printf("The displacement is: %f", s);
  
  return 0;  
}