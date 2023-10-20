int main() {
  // Declare variables of different data types
  int i;
  float f;
  char c;
  char str[100];

  // Read values from the user
   printf("Enter an integer: ");
   scanf("%d", &i);

  printf("Enter a floating point number: ");
  scanf("%f", &f);

  printf("Enter a character: ");
  scanf("%c", &c);

  printf("Enter a string: ");
  scanf("%s", str);

  // Print the values
  printf("The integer is: %d\n", i);
  printf("The floating point number is: %f\n", f);
  printf("The character is: %c\n", c);
  printf("The string is: %s\n", str);

  return 0;
}