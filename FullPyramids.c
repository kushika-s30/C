puts("\nFull pyramid of * :\n");
    int i, space, rows, k = 0;
    for (i = 1; i <= 6; i++, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
    }

puts("\nFull pyramid of numbers :\n");
    k = 0;
    int count = 0, count1 = 0;
    for (int i = 1; i <= 6; ++i) {
      for (int space = 1; space <= 6 - i; ++space) {
         printf("  ");
         ++count;
        }
      while (k != 2 * i - 1) {
         if (count <= 5) {
            printf("%d ", i + k);
            ++count;
         } else {
            ++count1;
            printf("%d ", (i + k - 2 * count1));
         }
         ++k;
      }
      count1 = count = k = 0;
      printf("\n");
   }
    return 0;
