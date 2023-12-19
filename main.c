#include <stdio.h>
#include <stdbool.h>
#include "trigonometry.h"

void mostrResult(float resultado) {
	printf("Resultado da operação: %.2f\n", resultado);
}

int laps(int angle) { return angle; }

int getQuadrant(int a) {
	return a >= 0 && a < 90 ? 1 :
			a >= 90 && a < 180 ? 2 :
			a >= 180 && a < 270 ? 3 : 4;
}

int enterCircunference(int arc) {
	while(arc > TRIG_FULL_CIRCLE) {
		arc -= TRIG_FULL_CIRCLE;
	}

	return arc;
}

int main() {
	int arc = 0;

	while(true) {
		printf("Me diga um angulo, e eu direi o quadrante do angulo: ");
		scanf("%d", &arc);

		int quadrant = getQuadrant(arc);
		int newArcVal = enterCircunferece(arc);
	}

	return 0;
}
