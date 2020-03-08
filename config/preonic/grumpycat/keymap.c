#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_preonic_1x2uC(KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_SLSH, KC_LSPO, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOT, KC_ENT, KC_RSPC, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_UP, KC_SCLN, KC_LCTL, KC_LGUI, KC_LALT, KC_LBRC, TT(1), KC_SPC, TT(2), KC_RBRC, KC_LEFT, KC_DOWN, KC_RGHT),
	[1] = LAYOUT_preonic_1x2uC(KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LT, KC_GT, KC_LBRC, KC_RBRC, KC_PIPE, KC_DEL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSLS, KC_PSLS, KC_LCBR, KC_RCBR, KC_TRNS, KC_DEL, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLU, KC_VOLD, KC_PPLS, KC_PMNS, KC_UNDS, KC_TRNS, KC_MINS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LPRN, KC_TRNS, KC_TRNS, KC_TRNS, KC_RPRN, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_preonic_1x2uC(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_P1, KC_P2, KC_P3, KC_P4, KC_P5, KC_P6, KC_P7, KC_P8, KC_P9, KC_P0, KC_MINS, KC_EQL, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGUP, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_END),
	[3] = LAYOUT_preonic_1x2uC(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RESET, DEBUG, KC_NO, KC_NO, KC_NO, KC_NO, TERM_ON, TERM_OFF, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MU_MOD, AU_ON, AU_OFF, AG_NORM, AG_SWAP, DF(0), DF(1), DF(2), KC_NO, KC_NO, KC_NO, MUV_DE, MUV_IN, MU_ON, MU_OFF, MI_ON, MI_OFF, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};
