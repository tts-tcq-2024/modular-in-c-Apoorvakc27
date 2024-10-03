// test_colorpair.h
#ifndef TEST_COLOR_PAIR_H
#define TEST_COLOR_PAIR_H

#include "colorpair.h"

void test_pair_number_to_color(int pair_number, enum MajorColor expected_major_color, enum MinorColor expected_minor_color);
void test_color_to_pair_number(enum MajorColor major_color, enum MinorColor minor_color, int expected_pair_number);

#endif // TEST_COLOR_PAIR_H

