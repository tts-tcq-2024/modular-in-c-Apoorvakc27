
#include <stdio.h>
#include "colorpair.h"




void color_pair_to_string(const ColorPair* color_pair, char* output_buffer) {
    sprintf(output_buffer, "%s %s",
        major_color_names[color_pair->major_color],
        minor_color_names[color_pair->minor_color]);
}

ColorPair get_color_from_pair_number(int pair_number) {
    ColorPair color_pair;
    int zero_based_pair_number = pair_number - 1;
    color_pair.major_color = 
        (enum MajorColor)(zero_based_pair_number / total_minor_colors);
    color_pair.minor_color =
        (enum MinorColor)(zero_based_pair_number % total_minor_colors);
    return color_pair;
}

int get_pair_number_from_color(const ColorPair* color_pair) {
    return color_pair->major_color * total_minor_colors +
           color_pair->minor_color + 1;
}

