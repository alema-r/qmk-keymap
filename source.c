#include QMK_KEYBOARD_H

void rgb_matrix_indicators_user(void) {
    // capslock led
	if(host_keyboard_leds() & (1<<USB_LED_CAPS_LOCK)) {
    	rgb_matrix_set_color(37, 237, 0, 0);
  	}

    // numpad leds
	if(IS_LAYER_ON(3)) {
		rgb_matrix_set_color(8, 230, 189, 59);
		rgb_matrix_set_color(9, 230, 189, 59);
		rgb_matrix_set_color(7, 230, 189, 59);
		rgb_matrix_set_color(20, 230, 189, 59);
		rgb_matrix_set_color(21, 230, 189, 59);
		rgb_matrix_set_color(19, 230, 189, 59);
		rgb_matrix_set_color(32, 230, 189, 59);
		rgb_matrix_set_color(33, 230, 189, 59);
		rgb_matrix_set_color(31, 230, 189, 59);
		rgb_matrix_set_color(43, 230, 189, 59);

		rgb_matrix_set_color(40, 237, 0, 0);
	}
}
