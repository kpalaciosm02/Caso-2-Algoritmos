# Caso-2-Algoritmos

Para correr los ejemplos hay que hacer g++ nombreArchivo y posteriormente llamar a a.exe desde la linea de comandos. Cada archivo tiene su propio main para las pruebas.

----Quicksort----
El quicksort se comporta logaritmicamente en los casos en los que el pivote de casualidad es un numero cercano a la mediana del array. Esto claramente no pasa siempre. Estos casos logaritmicos son a la vez el mejor escenario al que se puede enfrentar el algoritmo.

El quicksort se comporta cuadráticamente en los casos en los que el pivote se encuentra en uno de los extremos de los datos de la lista. Es decir, si el pivote es el mínimo o el máximo se realentiza mucho ya que tiene que recorrer el arreglo completo en varias ocasiones, haciendo el costo temporal crecer exageradamente.

En cuanto a la elección del pivote pues depende mucho del estado inicial de la lista y de como vayan saliendo los pivotes fijos, pero en las pruebas realizadas en el main se observa que siempre hay un incremento de duración al tener un pivote aleatorio. Aún así veo posible que en un caso muy exacto y especial cuando se tomen aleatoriamente los pivotes correctos sería posible que el tiempo disminuya.

----Insertionsort----
El insertionsort se comporta cuadráticamente en sus casos promedios. El mejor caso es cuando el algoritmo se comporta linealmente y esto solo se da cuando el arreglo viene ordenado previamente, aunque este caso obviamente es muy poco común.

Este algoritmo se comporta cuadráticamente en los casos en los que el arreglo de entrada viene al revés del de salida , aún así en casos ordenados aleatoriamente (ni en orden ni en desorden) la complejidad temporal también tendería a ser cuadrática.

Este algoritmo se comporta linealmente cuando el arreglo ya viene ordenado ya que los va revisando en orden y no realiza ningún cambio, por lo cual solamente recorre el arreglo una vez.