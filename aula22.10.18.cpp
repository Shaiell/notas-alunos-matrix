#include "pch.h"
#include <iostream>
#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
#include <time.h>

int main()
{
	int x = 0, y = 0;
	float notas[3][3];
	float media [3];
	float mediatotal = 0;
	
	setlocale(LC_ALL, "portuguese");
	printf("Programa que calcula a media das notas dos alunos!\n\n");

	srand(time(NULL));
	for (x = 0; x < 3; x++) {
		media[x]=0;
	}
	for (x = 0; x < 3; x++) {
		for (y = 0; y < 3; y++) {
			//notas[x][y] = rand () % 10;
			printf("Informe a %iª nota do %iº aluno: ",y+1,x+1);
			scanf_s("%f",&notas[x][y]);
			media[x] = media[x] + notas[x][y];
		}
	}
	for (x = 0; x < 3; x++) {
		printf("A media do %iº aluno é:%.2f.\n\n",x+1,media[x]/3);
	}
	
}

