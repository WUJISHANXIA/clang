int printf(const char *format, ... );

int global_init_var = 32;
int global_uninit_var;
int global_uninit_var1;
int global_uninit_var;

void func1( int i)
{
  printf("%d\n", i);
}

int main(void)
{
  static int static_var = 33;
  static int static_var2;
  static int static_var3;
  static int static_var4;
  static char static_var5;
  int a = 1;
  int b;
  func1(static_var + static_var2 + a + b);
  return a;
}
