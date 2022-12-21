# include  < stdio.h >
int  principal (){

int numero,soma;

for ( int i = 1 ; i <= 50 ; i++){

    printf ( " Digite um numero par ou impar: " );
    scanf ( " %d " ,&numero);

    if (número % 2 != 0 ){

        if (número > 100 && número < 200 ){
            soma += numero;

        }

    }

}

printf ( " O resultado da soma dos numeros impares entre 100 e 200 e: %d " ,soma);

retorna  0 ;
}
