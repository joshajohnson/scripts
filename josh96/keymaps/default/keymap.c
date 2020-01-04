#include "josh96.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
	KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_INS,  KC_DEL, KC_HOME,  KC_END, KC_PGUP, KC_PGDN, 
	KC_GRV,   KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL,                  KC_BSPC, KC_CAPS, KC_PSLS, KC_PAST, KC_PMNS, 
	KC_TAB,     KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_LBRC, KC_RBRC,            KC_BSLS,    KC_7,    KC_8,    KC_9,  
	KC_BSPC,      KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_NUHS,              KC_ENT,    KC_4,    KC_5,    KC_6, KC_PPLS, 
	KC_LSPO,        KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH,       KC_RSPC,        KC_UP,    KC_1,    KC_2,    KC_3,  
	KC_LCTL, KC_LGUI, KC_LALT,                  KC_SPC,                     KC_RALT, MO(2), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT,  KC_0, KC_DOT, KC_PENT),

	KEYMAP(
	KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_INS,  KC_DEL, KC_HOME,  KC_END, KC_PGUP, KC_PGDN, 
	KC_GRV,   KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL,                    KC_BSPC, KC_CAPS, KC_PSLS, KC_PAST, KC_PMNS, 
	KC_TAB,     KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC,                 KC_BSLS,  KC_7,    KC_8,    KC_9,  
	KC_BSPC,      KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_NUHS,            KC_ENT,   KC_4,    KC_5,    KC_6, KC_PPLS, 
	KC_LSPO,        KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,       KC_RSPC,        KC_UP,    KC_1,    KC_2,    KC_3,  
	KC_LCTL, KC_LGUI, KC_LALT,                  KC_SPC,                     KC_RALT, MO(2), KC_RCTL, KC_LEFT, KC_DOWN,  KC_RGHT, KC_0, KC_DOT, KC_PENT),

	KEYMAP(
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, 
	_______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, 
	_______,    RGB_TOG, RGB_MOD, RGB_RMOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______,       _______, _______, _______, _______,  
	_______,    KC_MUTE, KC_VOLD, KC_VOLU, KC_MNXT, KC_MPRV, KC_MPLY, _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, 
	_______,        RESET, TG(1), _______, _______, _______, _______, _______, _______, _______, _______,       _______,         _______, _______, _______, _______,  
	_______, _______, _______,                               _______,                          _______, _______, _______, _______, _______, _______, _______, _______, _______),



	KEYMAP(
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, 
	_______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______, 
	_______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______,  
	_______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, 
	_______,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,       _______,         _______, _______, _______, _______,  
	_______, _______, _______,                               _______,                          _______, _______, _______, _______, _______, _______, _______, _______, _______)

	
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

}