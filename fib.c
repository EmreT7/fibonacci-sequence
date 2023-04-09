int main() {
   int n, i;
   int fib[100];
   int hedef;

   printf("Kaçıncı terimdeki sayıyı bulmak istiyorsunuz: ");
   scanf("%d", &hedef);

   fib[0] = 0;
   fib[1] = 1;

   for (i = 2; i <= hedef; i++) {
      fib[i] = fib[i-1] + fib[i-2];
   }

   printf("Fibonacci dizisindeki %d. terim: %lld\n", hedef, fib[hedef]);

   return 0;
}

