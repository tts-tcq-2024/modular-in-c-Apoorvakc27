#ifndef COLORMAPPING_H
#define COLORMAPPING_H
const char* major_color_names[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

int total_major_colors = sizeof(major_color_names) / sizeof(major_color_names[0]);

const char* minor_color_names[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int total_minor_colors = sizeof(minor_color_names) / sizeof(minor_color_names[0]);
#endif
