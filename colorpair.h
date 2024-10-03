
#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H

#include "colormapping.h"

typedef struct {
    enum MajorColor major_color;
    enum MinorColor minor_color;
} ColorPair;

void color_pair_to_string(const ColorPair* color_pair, char* output_buffer);
ColorPair get_color_from_pair_number(int pair_number);
int get_pair_number_from_color(const ColorPair* color_pair);

#endif // COLOR_PAIR_H

