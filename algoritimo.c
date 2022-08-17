LGORITMO PERIMETRO_AREA

     /* Calcula o perímetro e a area de uma circunferencia 
        de raio R (fornecido pelo usuario) */

     /* Definir variaveis */
           int Raio;
           float Perim, Area, PI;   
           PI = 3.14159;

     /* Obter Raio da circunferencia */
           Escreva("Entre com o valor do raio:");
           Leia(Raio);

     /* Calcular Perimetro do Circulo */
           Perim = 2 * PI * Raio;

     /* Calcular Area da Circunferencia */
           Area = PI * Raio ** 2;

     /* Exibir Resultados */ 
           Escreva("O perimetro da circunferencia de raio", Raio, "eh", Perim);
           Escreva("e a area eh ",Area);

     /* Terminar Programa */

   FIM_ALGORITMO PERIMETRO_AREA
