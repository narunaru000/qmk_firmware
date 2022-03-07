#include QMK_KEYBOARD_H

#define LAYOUT_promicro( \
    pd3, \
    pd2, \
    pd1, pf4, \
    pd0, pf5, \
    pd4, pf6, \
    pc6, pf7, \
    pd7, pb1, \
    pe6, pb3, \
    pb4, pb2, \
    pb5, pb6 \
) \
{ \
    { pd3, XXXXXXX }, \
    { pd2, XXXXXXX }, \
    { pd1, pf4 }, \
    { pd0, pf5 }, \
    { pd4, pf6 }, \
    { pc6, pf7 }, \
    { pd7, pb1 }, \
    { pe6, pb3 }, \
    { pb4, pb2 }, \
    { pb5, pb6 }, \
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_promicro(
        XXXXXXX,
        XXXXXXX,
        KC_MPRV, XXXXXXX,
        KC_MPLY, XXXXXXX,
        KC_MNXT, XXXXXXX,
        XXXXXXX, XXXXXXX,
        KC_MUTE, XXXXXXX,
        XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX),
};

bool encoder_update_user(uint8_t index, bool clockwise)
{
    if(index == 0)
    {
        if(clockwise)
        {
            tap_code(KC_VOLU);
        }
        else
        {
            tap_code(KC_VOLD);
        }
    }
    return false;
}