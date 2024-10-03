// test_colorpair.c
#include <stdio.h>
#include <assert.h>
#include "test_colorpair.h"

void test_pair_number_to_color(int pair_number,
    enum MajorColor expected_major_color,
    enum MinorColor expected_minor_color)
{
    ColorPair color_pair = get_color_from_pair_number(pair_number);
    char color_pair_name[16];  // 16 is enough for buffer size
    color_pair_to_string(&color_pair, color_pair_name);
    printf("Got pair %s\n", color_pair_name);
    assert(color_pair.major_color == expected_major_color);
    assert(color_pair.minor_color == expected_minor_color);
}

void test_color_to_pair_number(
    enum MajorColor major_color,
    enum MinorColor minor_color,
    int expected_pair_number)
{
    ColorPair color_pair;
    color_pair.major_color = major_color;
    color_pair.minor_color = minor_color;
    int pair_number = get_pair_number_from_color(&color_pair);
    printf("Got pair number %d\n", pair_number);
    assert(pair_number == expected_pair_number);
}

