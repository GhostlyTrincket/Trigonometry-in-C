#include "trigonometry.h"

float degreeToRad(float degree) {
/*
	DEGREE		RAD
	180			pi
	degree		x
*/ 
	return degree / TRIG_HALF_CIRCLE;
}

float radToDegree(float rad) {
/*
	DEGREE		RAD
	180			pi
	x			rad
*/ 
	return rad * TRIG_HALF_CIRCLE;
}

float getCircunference(float r) {
	/* C = 2 * pi * radius */
	return 2 * TRIG_PI * r;
}

float getArc(float l, float r) {
	return l / r;
}
