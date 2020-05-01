#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_primitives.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "funkcje.h"


#define N 100
#define WIDTH 1280
#define HEIGHT 720

enum STATE { START, QUESTION, INSTRUCTION, SCORE, SAVE, LOSE, WIN };


int main()
{
    srand(time(NULL));
    int odp = 0;
    int wynik = 0;
    int kolo = 1;
    int kolo_publicznosc = 1;
    int wylosowane_pytanie_100, wylosowane_pytanie_1000, wylosowane_pytanie_5000, wylosowane_pytanie_10000, wylosowane_pytanie_50000;
    int wylosowane_pytanie_100000, wylosowane_pytanie_250000, wylosowane_pytanie_500000, wylosowane_pytanie_750000, wylosowane_pytanie_1000000;
    char* wynik_char;
    wynik_char = (char*)calloc(10, sizeof(char));
    char* wynik_char_2;
    wynik_char_2 = (char*)calloc(10, sizeof(char));
    char* tablica;
    tablica = (char*)calloc(20, sizeof(char));
    char* tablica_tmp;
    tablica_tmp = (char*)calloc(20, sizeof(char));

    wylosowane_pytanie_100 = 1 + rand() % 10;
    wylosowane_pytanie_1000 = 1 + rand() % 10;
    wylosowane_pytanie_5000 = 1 + rand() % 10;
    wylosowane_pytanie_10000 = 1 + rand() % 10;
    wylosowane_pytanie_50000 = 1 + rand() % 10;
    wylosowane_pytanie_100000 = 1 + rand() % 10;
    wylosowane_pytanie_250000 = 1 + rand() % 10;
    wylosowane_pytanie_500000 = 1 + rand() % 10;
    wylosowane_pytanie_750000 = 1 + rand() % 10;
    wylosowane_pytanie_1000000 = 1 + rand() % 10;
    bool done = false;
    int gameState = START;
    al_init();
    if (!al_init())
    {
        fprintf(stderr, "Allegro nie zostalo zaainicjowane\n");
        return -1;
    }

    ALLEGRO_DISPLAY* display = NULL;
    ALLEGRO_EVENT_QUEUE* event_queue = NULL;
    ALLEGRO_BITMAP* menu = NULL;
    ALLEGRO_BITMAP* dobra_odp = NULL;
    ALLEGRO_BITMAP* question_bitmap = NULL;
    ALLEGRO_BITMAP* instrukcja = NULL;
    ALLEGRO_BITMAP* background = NULL;
    ALLEGRO_FONT* font25 = NULL;
    ALLEGRO_FONT* font30 = NULL;
    ALLEGRO_FONT* font35 = NULL;
    ALLEGRO_FONT* font_35_openSans = NULL;
    ALLEGRO_FONT* font_50_openSans = NULL;
    ALLEGRO_FILE* file;
    ALLEGRO_USTR* str = al_ustr_new("");
    int pos = (int)al_ustr_size(str);

    display = al_create_display(WIDTH, HEIGHT);

    if (!display)
    {
        fprintf(stderr, "Nie udalo sie stworzyc okna");
        return -1;
    }

    al_init_primitives_addon();
    al_install_keyboard();
    al_init_image_addon();
    al_init_font_addon();
    al_init_ttf_addon();

    event_queue = al_create_event_queue();
    if (event_queue == NULL) {
        fprintf(stderr, "Nie udalo sie stworzyc kolejki");
        return -1;
    }
    menu = al_load_bitmap("menu.jpg");
    question_bitmap = al_load_bitmap("question.png");
    dobra_odp = al_load_bitmap("dobra_odp.png");
    instrukcja = al_load_bitmap("instrukcja.png");
    background = al_load_bitmap("background.jpg");
    font25 = al_load_font("PlayfairDisplay-Bold.otf", 25, 0);
    font30 = al_load_font("PlayfairDisplay-Bold.otf", 30, 0);
    font35 = al_load_font("PlayfairDisplay-Bold.otf", 35, 0);
    font_35_openSans = al_load_font("OpenSans-Bold.ttf", 35, 0);
    font_50_openSans = al_load_font("OpenSans-Bold.ttf", 50, 0);
    file = al_fopen("score.abc", "ab+");

    al_register_event_source(event_queue, al_get_keyboard_event_source());
    al_register_event_source(event_queue, al_get_display_event_source(display));

    al_set_window_title(display, "Milionerzy");

    al_draw_bitmap(menu, 0, 0, 0);
    al_flip_display();


    int licznik = 0;
    while (!done) {
        ALLEGRO_EVENT ev;
        al_wait_for_event(event_queue, &ev);

        if (gameState == START)
        {
            al_draw_bitmap(menu, 0, 0, 0);
            al_flip_display();

            if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
            {
                done = true;
            }
            else
                if (ev.type == ALLEGRO_EVENT_KEY_DOWN)
                {
                    if (ev.keyboard.keycode == ALLEGRO_KEY_N)
                    {
                        gameState = QUESTION;
                    }
                    if (ev.keyboard.keycode == ALLEGRO_KEY_ESCAPE)
                    {
                        done = true;

                    }
                    if (ev.keyboard.keycode == ALLEGRO_KEY_I)
                    {
                        gameState = INSTRUCTION;

                    }
                    if (ev.keyboard.keycode == ALLEGRO_KEY_T)
                    {
                        gameState = SCORE;

                    }
                }
        }
        else
            if (gameState == QUESTION)
            {
                if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
                {
                    done = true;
                }
                else
                    if (wynik == 0)
                    {
                        al_flush_event_queue(event_queue);
                        odp = pytania_odpowiedzi_100(odp,wylosowane_pytanie_100, &display, &ev, font25, question_bitmap, font35, font30);
                        ktore_pytanie(1, font_35_openSans);
                        if (kolo_publicznosc == 0) {
                            al_draw_line(70, 10, 160, 70, al_map_rgb(255, 0, 0), 5);
                        }
                        if (kolo == 0) {
                            al_draw_line(70, 80, 160, 140, al_map_rgb(255, 0, 0), 5);
                        }
                        al_flip_display();


                        if (ev.keyboard.keycode == odp)
                        {
                            dobra_odpowiedz(odp, dobra_odp);
                            wynik = 100;
                        }
                        else if ((ev.keyboard.keycode == ALLEGRO_KEY_A || ev.keyboard.keycode == ALLEGRO_KEY_B || ev.keyboard.keycode == ALLEGRO_KEY_C || ev.keyboard.keycode == ALLEGRO_KEY_D) && ev.keyboard.keycode != odp) {
                            dobra_odpowiedz(odp, dobra_odp);
                            gameState = LOSE;
                        }
                        else if (ev.keyboard.keycode == ALLEGRO_KEY_K) {
                            if (kolo > 0) {
                                kolo = kolo_ratunkowe(odp, kolo, font_35_openSans);
                            }
                        }
                        else if (ev.keyboard.keycode == ALLEGRO_KEY_H) {
                            if (kolo_publicznosc == 1) {
                                kolo_publicznosc = kolo_pub(odp, kolo_publicznosc, font_35_openSans);
                            }
                        }
                    }
                    else
                        if (wynik == 100) {
                            al_flush_event_queue(event_queue);
                            odp = pytania_odpowiedzi_1000(odp, wylosowane_pytanie_1000, &display, &ev, font25, question_bitmap, font35, font30);
                            ktore_pytanie(2, font_35_openSans);
                            if (kolo_publicznosc == 0) {
                                al_draw_line(70, 10, 160, 70, al_map_rgb(255, 0, 0), 5);
                            }
                            if (kolo == 0) {
                                al_draw_line(70, 80, 160, 140, al_map_rgb(255, 0, 0), 5);
                            }
                            al_flip_display();

                            if (ev.type == ALLEGRO_EVENT_KEY_DOWN)
                            {
                                if (ev.keyboard.keycode == odp)
                                {
                                    dobra_odpowiedz(odp, dobra_odp);
                                    wynik = 1000;
                                }
                                else if ((ev.keyboard.keycode == ALLEGRO_KEY_A || ev.keyboard.keycode == ALLEGRO_KEY_B || ev.keyboard.keycode == ALLEGRO_KEY_C || ev.keyboard.keycode == ALLEGRO_KEY_D) && ev.keyboard.keycode != odp) {
                                    dobra_odpowiedz(odp, dobra_odp);
                                    gameState = LOSE;
                                }
                                else if (ev.keyboard.keycode == ALLEGRO_KEY_K) {
                                    if (kolo > 0) {
                                        kolo = kolo_ratunkowe(odp, kolo, font_35_openSans);
                                    }
                                }
                                else if (ev.keyboard.keycode == ALLEGRO_KEY_H) {
                                    if (kolo_publicznosc == 1) {
                                        kolo_publicznosc = kolo_pub(odp, kolo_publicznosc, font_35_openSans);
                                    }
                                }
                            }

                        }
                        else
                            if (wynik == 1000) {
                                al_flush_event_queue(event_queue);
                                odp = pytania_odpowiedzi_5000(odp, wylosowane_pytanie_5000, &display, &ev, font25, question_bitmap, font35, font30);
                                ktore_pytanie(3, font_35_openSans);
                                if (kolo_publicznosc == 0) {
                                    al_draw_line(70, 10, 160, 70, al_map_rgb(255, 0, 0), 5);
                                }
                                if (kolo == 0) {
                                    al_draw_line(70, 80, 160, 140, al_map_rgb(255, 0, 0), 5);
                                }
                                al_flip_display();

                                if (ev.type == ALLEGRO_EVENT_KEY_DOWN)
                                {
                                    if (ev.keyboard.keycode == odp)
                                    {
                                        dobra_odpowiedz(odp, dobra_odp);
                                        wynik = 5000;
                                    }
                                    else if ((ev.keyboard.keycode == ALLEGRO_KEY_A || ev.keyboard.keycode == ALLEGRO_KEY_B || ev.keyboard.keycode == ALLEGRO_KEY_C || ev.keyboard.keycode == ALLEGRO_KEY_D) && ev.keyboard.keycode != odp) {
                                        dobra_odpowiedz(odp, dobra_odp);
                                        gameState = LOSE;
                                    }
                                    else if (ev.keyboard.keycode == ALLEGRO_KEY_K) {
                                        if (kolo > 0) {
                                            kolo = kolo_ratunkowe(odp, kolo, font_35_openSans);
                                        }
                                    }
                                    else if (ev.keyboard.keycode == ALLEGRO_KEY_H) {
                                        if (kolo_publicznosc == 1) {
                                            kolo_publicznosc = kolo_pub(odp, kolo_publicznosc, font_35_openSans);
                                        }
                                    }
                                }
                            }
                            else
                                if (wynik == 5000) {
                                    al_flush_event_queue(event_queue);
                                    odp = pytania_odpowiedzi_10000(odp, wylosowane_pytanie_10000, &display, &ev, font25, question_bitmap, font35, font30);
                                    ktore_pytanie(4, font_35_openSans);
                                    if (kolo_publicznosc == 0) {
                                        al_draw_line(70, 10, 160, 70, al_map_rgb(255, 0, 0), 5);
                                    }
                                    if (kolo == 0) {
                                        al_draw_line(70, 80, 160, 140, al_map_rgb(255, 0, 0), 5);
                                    }
                                    al_flip_display();

                                    if (ev.type == ALLEGRO_EVENT_KEY_DOWN)
                                    {
                                        if (ev.keyboard.keycode == odp)
                                        {
                                            dobra_odpowiedz(odp, dobra_odp);
                                            wynik = 10000;
                                        }
                                        else if ((ev.keyboard.keycode == ALLEGRO_KEY_A || ev.keyboard.keycode == ALLEGRO_KEY_B || ev.keyboard.keycode == ALLEGRO_KEY_C || ev.keyboard.keycode == ALLEGRO_KEY_D) && ev.keyboard.keycode != odp) {
                                            dobra_odpowiedz(odp, dobra_odp);
                                            gameState = LOSE;
                                        }
                                        else if (ev.keyboard.keycode == ALLEGRO_KEY_K) {
                                            if (kolo > 0) {
                                                kolo = kolo_ratunkowe(odp, kolo, font_35_openSans);
                                            }
                                        }
                                        else if (ev.keyboard.keycode == ALLEGRO_KEY_H) {
                                            if (kolo_publicznosc == 1) {
                                                kolo_publicznosc = kolo_pub(odp, kolo_publicznosc, font_35_openSans);
                                            }
                                        }
                                    }
                                }
                                else
                                    if (wynik == 10000) {
                                        al_flush_event_queue(event_queue);
                                        odp = pytania_odpowiedzi_50000(odp, wylosowane_pytanie_50000, &display, &ev, font25, question_bitmap, font35, font30);
                                        ktore_pytanie(5, font_35_openSans);
                                        if (kolo_publicznosc == 0) {
                                            al_draw_line(70, 10, 160, 70, al_map_rgb(255, 0, 0), 5);
                                        }
                                        if (kolo == 0) {
                                            al_draw_line(70, 80, 160, 140, al_map_rgb(255, 0, 0), 5);
                                        }
                                        al_flip_display();

                                        if (ev.type == ALLEGRO_EVENT_KEY_DOWN)
                                        {
                                            if (ev.keyboard.keycode == odp)
                                            {
                                                dobra_odpowiedz(odp, dobra_odp);
                                                wynik = 50000;
                                            }
                                            else if ((ev.keyboard.keycode == ALLEGRO_KEY_A || ev.keyboard.keycode == ALLEGRO_KEY_B || ev.keyboard.keycode == ALLEGRO_KEY_C || ev.keyboard.keycode == ALLEGRO_KEY_D) && ev.keyboard.keycode != odp) {
                                                dobra_odpowiedz(odp, dobra_odp);
                                                gameState = LOSE;
                                            }
                                            else if (ev.keyboard.keycode == ALLEGRO_KEY_K) {
                                                if (kolo > 0) {
                                                    kolo = kolo_ratunkowe(odp, kolo, font_35_openSans);
                                                }
                                            }
                                            else if (ev.keyboard.keycode == ALLEGRO_KEY_H) {
                                                if (kolo_publicznosc == 1) {
                                                    kolo_publicznosc = kolo_pub(odp, kolo_publicznosc, font_35_openSans);
                                                }
                                            }
                                        }
                                    }
                                    else
                                        if (wynik == 50000) {
                                            al_flush_event_queue(event_queue);
                                            odp = pytania_odpowiedzi_100000(odp, wylosowane_pytanie_100000, &display, &ev, font25, question_bitmap, font35, font30);
                                            ktore_pytanie(6, font_35_openSans);
                                            if (kolo_publicznosc == 0) {
                                                al_draw_line(70, 10, 160, 70, al_map_rgb(255, 0, 0), 5);
                                            }
                                            if (kolo == 0) {
                                                al_draw_line(70, 80, 160, 140, al_map_rgb(255, 0, 0), 5);
                                            }
                                            al_flip_display();

                                            if (ev.type == ALLEGRO_EVENT_KEY_DOWN)
                                            {
                                                if (ev.keyboard.keycode == odp)
                                                {
                                                    dobra_odpowiedz(odp, dobra_odp);
                                                    wynik = 100000;
                                                }
                                                else if ((ev.keyboard.keycode == ALLEGRO_KEY_A || ev.keyboard.keycode == ALLEGRO_KEY_B || ev.keyboard.keycode == ALLEGRO_KEY_C || ev.keyboard.keycode == ALLEGRO_KEY_D) && ev.keyboard.keycode != odp) {
                                                    dobra_odpowiedz(odp, dobra_odp);
                                                    gameState = LOSE;
                                                }
                                                else if (ev.keyboard.keycode == ALLEGRO_KEY_K) {
                                                    if (kolo > 0) {
                                                        kolo = kolo_ratunkowe(odp, kolo, font_35_openSans);
                                                    }
                                                }
                                                else if (ev.keyboard.keycode == ALLEGRO_KEY_H) {
                                                    if (kolo_publicznosc == 1) {
                                                        kolo_publicznosc = kolo_pub(odp, kolo_publicznosc, font_35_openSans);
                                                    }
                                                }
                                            }
                                        }
                                        else
                                            if (wynik == 100000) {
                                                al_flush_event_queue(event_queue);
                                                odp = pytania_odpowiedzi_250000(odp, wylosowane_pytanie_250000, &display, &ev, font25, question_bitmap, font35, font30);
                                                ktore_pytanie(7, font_35_openSans);
                                                if (kolo_publicznosc == 0) {
                                                    al_draw_line(70, 10, 160, 70, al_map_rgb(255, 0, 0), 5);
                                                }
                                                if (kolo == 0) {
                                                    al_draw_line(70, 80, 160, 140, al_map_rgb(255, 0, 0), 5);
                                                }
                                                al_flip_display();

                                                if (ev.type == ALLEGRO_EVENT_KEY_DOWN)
                                                {
                                                    if (ev.keyboard.keycode == odp)
                                                    {
                                                        dobra_odpowiedz(odp, dobra_odp);
                                                        wynik = 250000;
                                                    }
                                                    else if ((ev.keyboard.keycode == ALLEGRO_KEY_A || ev.keyboard.keycode == ALLEGRO_KEY_B || ev.keyboard.keycode == ALLEGRO_KEY_C || ev.keyboard.keycode == ALLEGRO_KEY_D) && ev.keyboard.keycode != odp) {
                                                        dobra_odpowiedz(odp, dobra_odp);
                                                        gameState = LOSE;
                                                    }
                                                    else if (ev.keyboard.keycode == ALLEGRO_KEY_K) {
                                                        if (kolo > 0) {
                                                            kolo = kolo_ratunkowe(odp, kolo, font_35_openSans);
                                                        }
                                                    }
                                                    else if (ev.keyboard.keycode == ALLEGRO_KEY_H) {
                                                        if (kolo_publicznosc == 1) {
                                                            kolo_publicznosc = kolo_pub(odp, kolo_publicznosc, font_35_openSans);
                                                        }
                                                    }
                                                }
                                            }
                                            else
                                                if (wynik == 250000) {
                                                    al_flush_event_queue(event_queue);
                                                    odp = pytania_odpowiedzi_500000(odp, wylosowane_pytanie_500000, &display, &ev, font25, question_bitmap, font35, font30);
                                                    ktore_pytanie(8, font_35_openSans);
                                                    if (kolo_publicznosc == 0) {
                                                        al_draw_line(70, 10, 160, 70, al_map_rgb(255, 0, 0), 5);
                                                    }
                                                    if (kolo == 0) {
                                                        al_draw_line(70, 80, 160, 140, al_map_rgb(255, 0, 0), 5);
                                                    }
                                                    al_flip_display();

                                                    if (ev.type == ALLEGRO_EVENT_KEY_DOWN)
                                                    {
                                                        if (ev.keyboard.keycode == odp)
                                                        {
                                                            dobra_odpowiedz(odp, dobra_odp);
                                                            wynik = 500000;
                                                        }
                                                        else if ((ev.keyboard.keycode == ALLEGRO_KEY_A || ev.keyboard.keycode == ALLEGRO_KEY_B || ev.keyboard.keycode == ALLEGRO_KEY_C || ev.keyboard.keycode == ALLEGRO_KEY_D) && ev.keyboard.keycode != odp) {
                                                            dobra_odpowiedz(odp, dobra_odp);
                                                            gameState = LOSE;
                                                        }
                                                        else if (ev.keyboard.keycode == ALLEGRO_KEY_K) {
                                                            if (kolo > 0) {
                                                                kolo = kolo_ratunkowe(odp, kolo, font_35_openSans);
                                                            }
                                                        }
                                                        else if (ev.keyboard.keycode == ALLEGRO_KEY_H) {
                                                            if (kolo_publicznosc == 1) {
                                                                kolo_publicznosc = kolo_pub(odp, kolo_publicznosc, font_35_openSans);
                                                            }
                                                        }
                                                    }
                                                }
                                                else
                                                    if (wynik == 500000) {
                                                        al_flush_event_queue(event_queue);
                                                        odp = pytania_odpowiedzi_750000(odp, wylosowane_pytanie_750000, &display, &ev, font25, question_bitmap, font35, font30);
                                                        ktore_pytanie(9, font_35_openSans);
                                                        if (kolo_publicznosc == 0) {
                                                            al_draw_line(70, 10, 160, 70, al_map_rgb(255, 0, 0), 5);
                                                        }
                                                        if (kolo == 0) {
                                                            al_draw_line(70, 80, 160, 140, al_map_rgb(255, 0, 0), 5);
                                                        }
                                                        al_flip_display();

                                                        if (ev.type == ALLEGRO_EVENT_KEY_DOWN)
                                                        {
                                                            if (ev.keyboard.keycode == odp)
                                                            {
                                                                dobra_odpowiedz(odp, dobra_odp);
                                                                wynik = 750000;
                                                            }
                                                            else if ((ev.keyboard.keycode == ALLEGRO_KEY_A || ev.keyboard.keycode == ALLEGRO_KEY_B || ev.keyboard.keycode == ALLEGRO_KEY_C || ev.keyboard.keycode == ALLEGRO_KEY_D) && ev.keyboard.keycode != odp) {
                                                                dobra_odpowiedz(odp, dobra_odp);
                                                                gameState = LOSE;
                                                            }
                                                            else if (ev.keyboard.keycode == ALLEGRO_KEY_K) {
                                                                if (kolo > 0) {
                                                                    kolo = kolo_ratunkowe(odp, kolo, font_35_openSans);
                                                                }
                                                            }
                                                            else if (ev.keyboard.keycode == ALLEGRO_KEY_H) {
                                                                if (kolo_publicznosc == 1) {
                                                                    kolo_publicznosc = kolo_pub(odp, kolo_publicznosc, font_35_openSans);
                                                                }
                                                            }
                                                        }
                                                    }
                                                    else
                                                        if (wynik == 750000) {
                                                            al_flush_event_queue(event_queue);
                                                            odp = pytania_odpowiedzi_1000000(odp, wylosowane_pytanie_1000000, &display, &ev, font25, question_bitmap, font35, font30);
                                                            ktore_pytanie(10, font_35_openSans);
                                                            if (kolo_publicznosc == 0) {
                                                                al_draw_line(70, 10, 160, 70, al_map_rgb(255, 0, 0), 5);
                                                            }
                                                            if (kolo == 0) {
                                                                al_draw_line(70, 80, 160, 140, al_map_rgb(255, 0, 0), 5);
                                                            }
                                                            al_flip_display();
                                                            if (ev.type == ALLEGRO_EVENT_KEY_DOWN)
                                                            {
                                                                if (ev.keyboard.keycode == odp)
                                                                {
                                                                    dobra_odpowiedz(odp, dobra_odp);
                                                                    wynik = 1000000;
                                                                    gameState = WIN;
                                                                }
                                                                else if ((ev.keyboard.keycode == ALLEGRO_KEY_A || ev.keyboard.keycode == ALLEGRO_KEY_B || ev.keyboard.keycode == ALLEGRO_KEY_C || ev.keyboard.keycode == ALLEGRO_KEY_D) && ev.keyboard.keycode != odp) {
                                                                    dobra_odpowiedz(odp, dobra_odp);
                                                                    gameState = LOSE;
                                                                }
                                                                else if (ev.keyboard.keycode == ALLEGRO_KEY_K) {
                                                                    if (kolo > 0) {
                                                                        kolo = kolo_ratunkowe(odp, kolo, font_35_openSans);
                                                                    }
                                                                }
                                                                else if (ev.keyboard.keycode == ALLEGRO_KEY_H) {
                                                                    if (kolo_publicznosc == 1) {
                                                                        kolo_publicznosc = kolo_pub(odp, kolo_publicznosc, font_35_openSans);
                                                                    }
                                                                }
                                                            }
                                                        }


            }
            else
                if (gameState == INSTRUCTION) {
                    al_draw_bitmap(instrukcja, 0, 0, 0);
                    al_flip_display();
                    if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
                    {
                        done = true;
                    }
                    else
                        if (ev.type == ALLEGRO_EVENT_KEY_DOWN)
                        {
                            if (ev.keyboard.keycode == ALLEGRO_KEY_ESCAPE)
                            {
                                gameState = START;
                            }

                        }
                }
                else
                    if (gameState == SAVE) {
                        al_draw_bitmap(background, 0, 0, 0);
                        al_draw_text(font_50_openSans, al_map_rgb(255, 255, 255), 400, 250, 0, "Wpisz swoje imie");
                        al_draw_ustr(font_50_openSans, al_map_rgb_f(1, 1, 1), 600, 300, ALLEGRO_ALIGN_CENTRE, str);
                        al_flip_display();
                        switch (ev.type) {
                        case ALLEGRO_EVENT_DISPLAY_CLOSE:
                            done = true;
                            break;
                        case ALLEGRO_EVENT_KEY_CHAR:
                            if (ev.keyboard.unichar >= 32) {
                                pos += al_ustr_append_chr(str, ev.keyboard.unichar);
                            }
                            else if (ev.keyboard.keycode == ALLEGRO_KEY_BACKSPACE) {
                                if (al_ustr_prev(str, &pos))
                                    al_ustr_truncate(str, pos);
                            }
                            else if (ev.keyboard.keycode == ALLEGRO_KEY_ENTER) {
                                int l = al_ustr_size(str);
                                al_fwrite(file, al_cstr(str), l);
                                al_fwrite(file, ":", 1);
                                int ilecyfr = 0;
                                if (wynik > 0) {
                                    ilecyfr = (int)log10(wynik) + 1;
                                    _itoa_s(wynik, wynik_char, ilecyfr + 1, 10);
                                    al_fwrite(file, wynik_char, ilecyfr);
                                }
                                if (wynik == 0) {
                                    _itoa_s(wynik, wynik_char, 2, 10);
                                    al_fwrite(file, wynik_char, 1);
                                }
                                al_fwrite(file, "\n", 1);
                                kolo = 1;
                                kolo_publicznosc = 1;
                                wynik = 0;
                                gameState = START;
                            }
                            break;
                        }

                    }
                    else
                        if (gameState == LOSE) {
                            srand(time(NULL));
                            wylosowane_pytanie_100 = 1 + rand() % 10;
                            wylosowane_pytanie_1000 = 1 + rand() % 10;
                            wylosowane_pytanie_5000 = 1 + rand() % 10;
                            wylosowane_pytanie_10000 = 1 + rand() % 10;
                            wylosowane_pytanie_50000 = 1 + rand() % 10;
                            wylosowane_pytanie_100000 = 1 + rand() % 10;
                            wylosowane_pytanie_250000 = 1 + rand() % 10;
                            wylosowane_pytanie_500000 = 1 + rand() % 10;
                            wylosowane_pytanie_750000 = 1 + rand() % 10;
                            wylosowane_pytanie_1000000 = 1 + rand() % 10;
                            al_draw_bitmap(background, 0, 0, 0);
                            if (wynik > 0) {
                                int ilecyfr_2 = (int)log10(wynik) + 1;
                                _itoa_s(wynik, wynik_char_2, ilecyfr_2 + 1, 10);
                            }
                            if (wynik == 0) {
                                _itoa_s(wynik, wynik_char_2, 2, 10);
                            }
                            al_draw_text(font_50_openSans, al_map_rgb(255, 255, 255), 350, 120, 0, "Przegrales!");
                            al_draw_text(font_50_openSans, al_map_rgb(255, 255, 255), 350, 170, 0, "Udalo ci sie wygrac: ");
                            al_draw_text(font_50_openSans, al_map_rgb(255, 255, 255), 850, 170, 0, wynik_char_2);
                            al_draw_text(font_50_openSans, al_map_rgb(255, 255, 255), 350, 250, 0, "Czy chcesz zapisac swoj wynik?");
                            al_draw_text(font_50_openSans, al_map_rgb(255, 255, 255), 350, 300, 0, "[Y]- Tak");
                            al_draw_text(font_50_openSans, al_map_rgb(255, 255, 255), 350, 350, 0, "[N]- Nie");
                            al_flip_display();
                            if (ev.keyboard.keycode == ALLEGRO_KEY_Y) {
                                gameState = SAVE;
                            }
                            if (ev.keyboard.keycode == ALLEGRO_KEY_N) {
                                wynik = 0;
                                kolo = 1;
                                kolo_publicznosc = 1;
                                gameState = START;
                            }
                        }
                        else
                            if (gameState == SCORE) {
                                al_fseek(file, 0, ALLEGRO_SEEK_SET);
                                int a = 100;
                                al_draw_bitmap(background, 0, 0, 0);
                                al_draw_text(font_50_openSans, al_map_rgb(255, 255, 255), 400, 30, 0, "Tablica wynikow: ");
                                int len = 0;
                                while (al_fgets(file, tablica, 20)) {
                                    if (a < 650) {
                                        len = strlen(tablica);
                                        for (int i = 0; i < len - 1; i++) {
                                            tablica_tmp[i] = tablica[i];
                                        }
                                        al_draw_text(font_50_openSans, al_map_rgb(255, 255, 255), 400, a, 0, tablica_tmp);
                                        al_draw_rectangle(380, 30, 850, a + 10, al_map_rgb(0, 0, 0), 5);
                                        a += 70;
                                        al_flip_display();
                                        for (int i = 0; i < len; i++) {
                                            tablica_tmp[i] = NULL;
                                        }
                                    }
                                }
                                al_draw_rectangle(380, 30, 850, a + 10, al_map_rgb(0, 0, 0), 5);
                                al_flip_display();

                                if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
                                {
                                    done = true;
                                }
                                else if (ev.keyboard.keycode == ALLEGRO_KEY_ESCAPE)
                                {
                                    gameState = START;
                                }
                            }
                            else
                                if (gameState == WIN) {
                                    srand(time(NULL));
                                    wylosowane_pytanie_100 = 1 + rand() % 7;
                                    wylosowane_pytanie_1000 = 1 + rand() % 7;
                                    wylosowane_pytanie_5000 = 1 + rand() % 7;
                                    wylosowane_pytanie_10000 = 1 + rand() % 7;
                                    wylosowane_pytanie_50000 = 1 + rand() % 7;
                                    wylosowane_pytanie_100000 = 1 + rand() % 7;
                                    wylosowane_pytanie_250000 = 1 + rand() % 7;
                                    wylosowane_pytanie_500000 = 1 + rand() % 7;
                                    wylosowane_pytanie_750000 = 1 + rand() % 7;
                                    wylosowane_pytanie_1000000 = 1 + rand() % 7;
                                    al_draw_bitmap(background, 0, 0, 0);
                                    al_draw_text(font_50_openSans, al_map_rgb(255, 255, 255), 350, 120, 0, "Gratulacje!");
                                    al_draw_text(font_50_openSans, al_map_rgb(255, 255, 255), 350, 170, 0, "Udalo ci sie wygrac nagrode glowna");
                                    al_draw_text(font_50_openSans, al_map_rgb(255, 255, 255), 350, 250, 0, "Czy chcesz zapisac swoj wynik?");
                                    al_draw_text(font_50_openSans, al_map_rgb(255, 255, 255), 350, 300, 0, "[Y]- Tak");
                                    al_draw_text(font_50_openSans, al_map_rgb(255, 255, 255), 350, 350, 0, "[N]- Nie");
                                    al_flip_display();
                                    if (ev.keyboard.keycode == ALLEGRO_KEY_Y) {
                                        gameState = SAVE;
                                    }
                                    if (ev.keyboard.keycode == ALLEGRO_KEY_N) {
                                        wynik = 0;
                                        kolo = 1;
                                        kolo_publicznosc = 1;
                                        gameState = START;
                                    }
                                }
    }


    al_destroy_event_queue(event_queue);
    al_destroy_display(display);
    al_destroy_bitmap(question_bitmap);
    al_destroy_bitmap(menu);
    al_destroy_bitmap(dobra_odp);
    al_destroy_bitmap(background);
    al_destroy_bitmap(instrukcja);
    al_destroy_font(font25);
    al_destroy_font(font30);
    al_destroy_font(font35);
    al_destroy_font(font_35_openSans);
    al_destroy_font(font_50_openSans);
    al_ustr_free(str);
    al_fclose(file);
    free(wynik_char);
    free(wynik_char_2);
    free(tablica_tmp);
    free(tablica);
    return 0;

}



