# include  < stdio.h >
void  principal (){

int numero, maiorNumero, menorNumero;

for ( int i = 0 ; i < 1 ; i++){

    printf ( " Digite um numero inteiro qualquer: " );
    scanf ( " %d " ,&numero);

    maiorNumero = numero;
    menorNumero = numero;

    for ( int j = 1 ; j <= 19 ; j++){

        printf ( " Digite um numero inteiro qualquer: " );
        scanf ( " %d " ,&numero);

        if (número > maiorNumero){

            maiorNumero = numero;

        } else  if (número < menorNumero){

            menorNumero = numero;

        }
    }

}
