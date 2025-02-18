#include <stdio.h>
 
/* NA HEAP SORT O VALOR DOS FILHOS DEVE SER SEMPRE MENOR DO QUE O VALOR DO PAI */

int filho_esquerdo(int i){
	return 2*i + 1;
}

int filho_direito(int i){
	return 2*i +2;
}

int pai(int i){
	return (i-1)/2;
}

void ajusta_heap(int n, int arr[n], int i) {
    int maior = i;
    int esq, dir, temp;
while (maior < n) {
    esq = 2*i + 1;
    dir = 2*i + 2;
    if (esq < n && arr[esq] > arr[maior]) { maior = esq; }
    if (dir < n && arr[dir] > arr[maior]) { maior = dir; }
    if (maior != i) { 
        temp = arr[i];
        arr[i] = arr[maior];
        arr[maior] = temp;
        i = maior;
    } else break;
}

}

int main(){
			// 0 1 2 3 4 5 6 7
	int vet[]={8,6,7,4,5,3,2,1};
	
	// numero de elementos = 8
	printf("filho esquerdo [3]: %d\n", filho_esquerdo(3));
	printf("filho direito [3]: %d\n", filho_direito(3));
		// tomar cuidado para não conseguir um indice inexistente

	return 0;
}