
#include "test_colorpair.h"

int main() {
    test_pair_number_to_color(4, WHITE, BROWN);
    test_pair_number_to_color(5, WHITE, SLATE);

    test_color_to_pair_number(BLACK, ORANGE, 12);
    test_color_to_pair_number(VIOLET, SLATE, 25);
    
    test_ference_manual_test();
    return 0;
}
