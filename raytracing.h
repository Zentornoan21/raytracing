#ifndef __RAYTRACING_H
#define __RAYTRACING_H

#include "objects.h"
#include <stdint.h>

typedef struct {
	uint8_t *pixels;
	double* background;
	rectangular_node rectangulars;
	sphere_node spheres;
	light_node lights;
	const viewpoint *view;
	int end_width;
	int end_height;
	int start_width;
	int start_height;
	int width;
	int height;

}raytracingThreadParameter;

void raytracing(void *parameter);
#endif
