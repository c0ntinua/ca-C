int main(void) {
    start_raw_mode();
    new_rule();
    hide_cursor();
    flash();
    plot();
    cursor_to(0,0);
    // set_color(255,255,255);
    // printf("rows = %d  cols = %d", rows, cols);
    for (;;) respond();
}