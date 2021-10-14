// this code multiplies by 2 or 3 because of the elements position
# define N 5
int array[N] = {1, 3, 4 , 5, 2};

void multiplies(int *a, int b){
    int aux = *a;
    aux = aux * b;
    *a = aux;            
}

void choise(int *a, int len){
  int j;
    for( int i = 0; i < len; i++)
      if (i % 2 == 0){
        j = 2;
        multiplies(a[i], j);
      }
      else{
        j = 3;
        multiplies(a[i], j);
      }
}

int main () {
  choise(array, N);
  return 0;
}