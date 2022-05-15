#include QMK_KEYBOARD_H

#define LAYOUT_(                                                                    \
    L00, L01, L02, L03, L04, L05, L06,      R06, R05, R04, R03, R02, R01, R00,      \
    L10, L11, L12, L13, L14, L15, L16,      R16, R15, R14, R13, R12, R11, R10,      \
    L20, L21, L22, L23, L24, L25, L26,      R26, R25, R24, R23, R22, R21, R20,      \
    L30, L31, L32, L33, L34, L35, L36,      R36, R35, R34, R33, R32, R31, R30       \
)                                                                                   \
{                                                                                   \
    { L00, L01, L02, L03, L04, L05, L06 },                                          \
    { L10, L11, L12, L13, L14, L15, L16 },                                          \
    { L20, L21, L22, L23, L24, L25, L26 },                                          \
    { L30, L31, L32, L33, L34, L35, L36 },                                          \
    { R06, R05, R04, R03, R02, R01, R00 },                                          \
    { R16, R15, R14, R13, R12, R11, R10 },                                          \
    { R26, R25, R24, R23, R22, R21, R20 },                                          \
    { R36, R35, R34, R33, R32, R31, R30 }                                           \
}

enum LayerName {
    LayerName_Default,
    LayerName_Num,
    LayerName_Arrows,
    LayerName_Others,
};

enum ShortLayerName {
    LDF     = LayerName_Default,
    LNM     = LayerName_Num,
    LAR     = LayerName_Arrows,
    LOT     = LayerName_Others
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [LayerName_Default] = LAYOUT_(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    MO(LOT),      MO(LOT), KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    _______,      _______, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______,      _______, KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        KC_ESC,  KC_BSPC, KC_DEL,  KC_LALT, KC_LSFT, KC_ENT,  MO(LNM),      MO(LAR), KC_SPC,  KC_RSFT, KC_RGUI, KC_LBRC, KC_RBRC, KC_BSLS),

    [LayerName_Num] = LAYOUT_(
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_UNDS,      KC_PLUS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS,      KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,      _______, XXXXXXX, XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR, XXXXXXX,
        _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, KC_LABK, KC_RABK, XXXXXXX),

    [LayerName_Arrows] = LAYOUT_(
        _______, XXXXXXX, XXXXXXX, KC_PGUP, XXXXXXX, XXXXXXX, _______,      _______, XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, KC_HOME, KC_PGDN, KC_END,  XXXXXXX, _______,      _______, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, XXXXXXX),

    [LayerName_Others] = LAYOUT_(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_INS,  _______,      _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, KC_PSLS,
        _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_PAUS, _______,      _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_PAST,
        _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, _______,      _______, _______, KC_P1,   KC_P2,   KC_P3,   KC_PENT, _______,
        _______, _______, _______, _______, _______, _______, _______,      _______, _______, KC_P0,   _______, KC_PDOT, _______, _______),

    // テスト用
    // [LayerName_Default] = LAYOUT_(
    //     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,         KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_1,
    //     KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,         KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_2,    KC_3,
    //     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_4,         KC_5,    KC_B,    KC_N,    KC_M,    KC_6,    KC_7,    KC_8,
    //     KC_9,    KC_0,    KC_LGUI, KC_LALT, KC_ENT,  KC_1,    KC_2,         KC_3,    KC_4,    KC_SPC,  KC_4,    KC_5,    KC_6,    KC_7),
    //     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_UNDS,      KC_PLUS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS,
};
