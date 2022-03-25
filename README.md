# Caso-2-Algoritmos

----Quicksort----
El quicksort se comporta logaritmicamente en los casos en los que el pivote de casualidad es un numero cercano a la mediana del array. Esto claramente no pasa siempre. Estos casos logaritmicos son a la vez el mejor escenario al que se puede enfrentar el algoritmo.

El quicksort se comporta cuadráticamente en los casos en los que el pivote se encuentra en uno de los extremos de los datos de la lista. Es decir, si el pivote es el mínimo o el máximo se realentiza mucho ya que tiene que recorrer el arreglo completo en varias ocasiones, haciendo el costo temporal crecer exageradamente.

En cuanto a la elección del pivote pues depende mucho del estado inicial de la lista y de como vayan saliendo los pivotes fijos, pero en las pruebas realizadas en el main se observa que siempre hay un incremento de duración al tener un pivote aleatorio. Aún así veo posible que en un caso muy exacto y especial cuando se tomen aleatoriamente los pivotes correctos sería posible que el tiempo disminuya.

----Insertionsort----