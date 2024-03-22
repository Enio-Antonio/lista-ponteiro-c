C int f(char *data){
  void *s;
  s = malloc(50);
  int size = strlen(data);
  if (size > 50)
  return(-1);
  free(s);
  return 0;
}
// Esse código possui risco de vazamento de memória devido ao if, pois caso o valor de size seja maior que 50, a função retornará -1, impedindo que o "free(s)" seja executado.
