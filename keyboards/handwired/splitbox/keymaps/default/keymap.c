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

// Task-bar shortcut
#define TSK_1 G(KC_1)
#define TSK_2 G(KC_2)
#define TSK_3 G(KC_3)
#define TSK_4 G(KC_4)
#define TSK_5 G(KC_5)
#define TSK_6 G(KC_6)
#define TSK_7 G(KC_7)
#define TSK_8 G(KC_8)
#define TSK_9 G(KC_9)
#define TSK_0 G(KC_0)

// Left Control GUI
#define LCG(ck) C(G(ck))

// Virtual Desktop Control
#define VD_LEFT LCG(KC_LEFT)
#define VD_RGHT LCG(KC_RGHT)

// IME Control
// You must modify IME setting on your computer based on this keys.
#define IME_ON  KC_F14
#define IME_OFF KC_F15

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
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    IME_OFF,      IME_ON,  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_BSPC,      KC_BSPC, KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        KC_ESC,  KC_DEL,  KC_LALT, KC_RGUI, KC_LSFT, KC_ENT,  MO(LNM),      MO(LAR), KC_SPC,  KC_RSFT, KC_RGUI, KC_LBRC, KC_RBRC, KC_BSLS),

    [LayerName_Num] = LAYOUT_(
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_UNDS,      KC_PLUS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS,      KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
        _______, TSK_1,   TSK_2,    TSK_3,  TSK_4,   TSK_5,   XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR, XXXXXXX,
        _______, _______, _______, _______, _______, _______, _______,      XXXXXXX, _______, _______, _______, KC_LABK, KC_RABK, XXXXXXX),

    [LayerName_Arrows] = LAYOUT_(
        _______, XXXXXXX, XXXXXXX, KC_PGUP, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, KC_HOME, KC_PGDN, KC_END,  XXXXXXX, VD_LEFT,      VD_RGHT, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
        _______, KC_MPRV, KC_MNXT, KC_MPLY, KC_VOLD, KC_VOLU, KC_MUTE,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, _______, _______, _______, _______, _______, XXXXXXX,      _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX),

    [LayerName_Others] = LAYOUT_(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_INS,  _______,      _______, XXXXXXX, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, KC_PSLS,
        _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_PAUS, XXXXXXX,      XXXXXXX, XXXXXXX, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_PAST,
        _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, XXXXXXX,      XXXXXXX, XXXXXXX, KC_P1,   KC_P2,   KC_P3,   KC_PENT, XXXXXXX,
        _______, _______, _______, _______, _______, _______, XXXXXXX,      XXXXXXX, _______, KC_P0,   KC_COMM, KC_PDOT, XXXXXXX, XXXXXXX),
};
