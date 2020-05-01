#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_primitives.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define N 100

struct pytania_100 {
    char* question;
    char* Answer_A;
    char* Answer_B;
    char* Answer_C;
    char* Answer_D;
} question_100;

struct pytania_1000 {
    char* question;
    char* Answer_A;
    char* Answer_B;
    char* Answer_C;
    char* Answer_D;
} question_1000;

struct pytania_5000 {
    char* question;
    char* Answer_A;
    char* Answer_B;
    char* Answer_C;
    char* Answer_D;
} question_5000;

struct pytania_10000 {
    char* question;
    char* Answer_A;
    char* Answer_B;
    char* Answer_C;
    char* Answer_D;
} question_10000;

struct pytania_50000 {
    char* question;
    char* Answer_A;
    char* Answer_B;
    char* Answer_C;
    char* Answer_D;
} question_50000;

struct pytania_100000 {
    char* question;
    char* Answer_A;
    char* Answer_B;
    char* Answer_C;
    char* Answer_D;
} question_100000;

struct pytania_250000 {
    char* question;
    char* Answer_A;
    char* Answer_B;
    char* Answer_C;
    char* Answer_D;
} question_250000;

struct pytania_500000 {
    char* question;
    char* Answer_A;
    char* Answer_B;
    char* Answer_C;
    char* Answer_D;
} question_500000;

struct pytania_750000 {
    char* question;
    char* Answer_A;
    char* Answer_B;
    char* Answer_C;
    char* Answer_D;
} question_750000;

struct pytania_1000000 {
    char* question;
    char* Answer_A;
    char* Answer_B;
    char* Answer_C;
    char* Answer_D;
} question_1000000;


int pytania_odpowiedzi_100(int odp, int wylosowane_pytanie_100, ALLEGRO_DISPLAY** display, ALLEGRO_EVENT* ev, ALLEGRO_FONT* font25, ALLEGRO_BITMAP* question_bitmap, ALLEGRO_FONT* font35, ALLEGRO_FONT* font30)
{
    question_100.question = (char*)calloc(N, sizeof(char));
    question_100.Answer_A = (char*)calloc(N, sizeof(char));
    question_100.Answer_B = (char*)calloc(N, sizeof(char));
    question_100.Answer_C = (char*)calloc(N, sizeof(char));
    question_100.Answer_D = (char*)calloc(N, sizeof(char));
    al_draw_bitmap(question_bitmap, 0, 0, 0);
    if (wylosowane_pytanie_100 == 1) {
        memcpy(question_100.question, "Ile miesiecy liczy kwartal?", N);
        memcpy(question_100.Answer_A, "A.2", N);
        memcpy(question_100.Answer_B, "B.3", N);
        memcpy(question_100.Answer_C, "C.4", N);
        memcpy(question_100.Answer_D, "D.5", N);

        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_100.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_100.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_100.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_100.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_100.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else if (wylosowane_pytanie_100 == 2) {
        memcpy(question_100.question, "Ile bitow liczy Bajt?", N);
        memcpy(question_100.Answer_A, "A.2", N);
        memcpy(question_100.Answer_B, "B.12", N);
        memcpy(question_100.Answer_C, "C.16", N);
        memcpy(question_100.Answer_D, "D.8", N);

        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_100.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_100.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_100.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_100.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_100.Answer_D);
        al_flip_display();
        odp = 4;
    }
    else if (wylosowane_pytanie_100 == 3) {
        char tmp1[54];
        char tmp2[30];
        memcpy(question_100.question, "Co przeslania swiatlo Slonca widziane z Ziemi w czasie calkowitego zacmienia Slonca?", N);
        for (int i = 0; i < 54; i++) {
            tmp1[i] = question_100.question[i];
        }
        int j = 54;
        for (int i = 0; i < 30; i++) {
            tmp2[i] = question_100.question[j++];
        }
        memcpy(question_100.Answer_A, "A.Ksiezyc", N);
        memcpy(question_100.Answer_B, "B.Mars", N);
        memcpy(question_100.Answer_C, "C.kometa", N);
        memcpy(question_100.Answer_D, "D.satelita", N);

        al_draw_text(font30, al_map_rgb(255, 255, 255), 140, 430, 0, tmp1);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 145, 470, 0, tmp2);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_100.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_100.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_100.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_100.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else if (wylosowane_pytanie_100 == 4) {
        char tmp1[44];
        char tmp2[23];
        memcpy(question_100.question, "Jak nazywa sie zgromadzenie powolane w celu uchwalenia konstutucji?", N);
        for (int i = 0; i < 43; i++) {
            tmp1[i] = question_100.question[i];
        }
        int j = 44;
        for (int i = 0; i < 23; i++) {
            tmp2[i] = question_100.question[j++];
        }
        memcpy(question_100.Answer_A, "A.sejm", N);
        memcpy(question_100.Answer_B, "B.elektorat", N);
        memcpy(question_100.Answer_C, "C.konstutuanta", N);
        memcpy(question_100.Answer_D, "D.senat", N);

        al_draw_text(font30, al_map_rgb(255, 255, 255), 150, 430, 0, tmp1);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 155, 470, 0, tmp2);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_100.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_100.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_100.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_100.Answer_D);
        al_flip_display();
        odp = 3;
    }

    else  if (wylosowane_pytanie_100 == 5) {
        memcpy(question_100.question, "Umowna granica miedzy Europa a Azja sa gory?", N);
        memcpy(question_100.Answer_A, "A.Pireneje", N);
        memcpy(question_100.Answer_B, "B.Ural", N);
        memcpy(question_100.Answer_C, "C.Kaukaz", N);
        memcpy(question_100.Answer_D, "D.Himalaje", N);

        al_draw_text(font35, al_map_rgb(255, 255, 255), 140, 445, 0, question_100.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_100.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_100.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_100.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_100.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else  if (wylosowane_pytanie_100 == 6) {
        memcpy(question_100.question, "Na akord mozna:", N);
        memcpy(question_100.Answer_A, "A.spac", N);
        memcpy(question_100.Answer_B, "B.pracowac", N);
        memcpy(question_100.Answer_C, "C.spiewac", N);
        memcpy(question_100.Answer_D, "D.grac", N);

        al_draw_text(font35, al_map_rgb(255, 255, 255), 150, 445, 0, question_100.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_100.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_100.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_100.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_100.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else  if (wylosowane_pytanie_100 == 7) {
        memcpy(question_100.question, "Suspens to chwyt stosowany:", N);
        memcpy(question_100.Answer_A, "A.w zapasach", N);
        memcpy(question_100.Answer_B, "B.w grze na gitarze", N);
        memcpy(question_100.Answer_C, "C.we wspinaczce klasycznej", N);
        memcpy(question_100.Answer_D, "D.w filmach", N);

        al_draw_text(font35, al_map_rgb(255, 255, 255), 140, 445, 0, question_100.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_100.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_100.Answer_B);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 160, 660, 0, question_100.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_100.Answer_D);
        al_flip_display();
        odp = 4;
    }
    else  if (wylosowane_pytanie_100 == 8) {
        memcpy(question_100.question, "Szklany pojemnik, w ktorym hoduje sie ryby to:", N);
        memcpy(question_100.Answer_A, "A.serpentarium", N);
        memcpy(question_100.Answer_B, "B.akwarium", N);
        memcpy(question_100.Answer_C, "C.woliera", N);
        memcpy(question_100.Answer_D, "D.terrarium", N);

        al_draw_text(font30, al_map_rgb(255, 255, 255), 140, 445, 0, question_100.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_100.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_100.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_100.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_100.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else  if (wylosowane_pytanie_100 == 9) {
        memcpy(question_100.question, "Firma Chupa Chups produkuje:", N);
        memcpy(question_100.Answer_A, "A.lizaki", N);
        memcpy(question_100.Answer_B, "B.czekoladki", N);
        memcpy(question_100.Answer_C, "C.chipsy", N);
        memcpy(question_100.Answer_D, "D.zelki", N);

        al_draw_text(font35, al_map_rgb(255, 255, 255), 140, 445, 0, question_100.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_100.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_100.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_100.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_100.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else  if (wylosowane_pytanie_100 == 10) {
        memcpy(question_100.question, "Ile stopni ma kat polpelny?", N);
        memcpy(question_100.Answer_A, "A.270", N);
        memcpy(question_100.Answer_B, "B.90", N);
        memcpy(question_100.Answer_C, "C.180", N);
        memcpy(question_100.Answer_D, "D.360", N);

        al_draw_text(font35, al_map_rgb(255, 255, 255), 140, 445, 0, question_100.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_100.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_100.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_100.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_100.Answer_D);
        al_flip_display();
        odp = 3;
    }

    free(question_100.question);
    free(question_100.Answer_A);
    free(question_100.Answer_B);
    free(question_100.Answer_C);
    free(question_100.Answer_D);
    return odp;
}

int pytania_odpowiedzi_1000(int odp, int wylosowane_pytanie_1000, ALLEGRO_DISPLAY** display, ALLEGRO_EVENT* ev, ALLEGRO_FONT* font25, ALLEGRO_BITMAP* question_bitmap, ALLEGRO_FONT* font35, ALLEGRO_FONT* font30)
{
    question_1000.question = (char*)calloc(N, sizeof(char));
    question_1000.Answer_A = (char*)calloc(N, sizeof(char));
    question_1000.Answer_B = (char*)calloc(N, sizeof(char));
    question_1000.Answer_C = (char*)calloc(N, sizeof(char));
    question_1000.Answer_D = (char*)calloc(N, sizeof(char));
    al_draw_bitmap(question_bitmap, 0, 0, 0);
    if (wylosowane_pytanie_1000 == 1) {
        memcpy(question_1000.question, "Latwo przyszlo, latwo...?", N);
        memcpy(question_1000.Answer_A, "A.trzaslo", N);
        memcpy(question_1000.Answer_B, "B.zgaslo", N);
        memcpy(question_1000.Answer_C, "C.poszlo", N);
        memcpy(question_1000.Answer_D, "D.zeszlo", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_1000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_1000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_1000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_1000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_1000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else if (wylosowane_pytanie_1000 == 2) {
        memcpy(question_1000.question, "Jak nazywa sie polski pilkarz grajacy w Bayernie Monachium?", N);
        memcpy(question_1000.Answer_A, "A.Robert Lewandowski", N);
        memcpy(question_1000.Answer_B, "B.Piotr Zielinski", N);
        memcpy(question_1000.Answer_C, "C.Arkadiusz Milik", N);
        memcpy(question_1000.Answer_D, "D.Jakub Blaszczykowski", N);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 160, 445, 0, question_1000.question);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 160, 565, 0, question_1000.Answer_A);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 670, 565, 0, question_1000.Answer_B);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 160, 660, 0, question_1000.Answer_C);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 670, 660, 0, question_1000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else if (wylosowane_pytanie_1000 == 3) {
        memcpy(question_1000.question, "Ktory pierwiastek jest podstawa w chemii organicznej?", N);
        memcpy(question_1000.Answer_A, "A.azot", N);
        memcpy(question_1000.Answer_B, "B.wegiel", N);
        memcpy(question_1000.Answer_C, "C.tlen", N);
        memcpy(question_1000.Answer_D, "D.wodor", N);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 160, 445, 0, question_1000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_1000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_1000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_1000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_1000.Answer_D);
        al_flip_display();
        odp = 2;
    }

    else if (wylosowane_pytanie_1000 == 4) {
        memcpy(question_1000.question, "Jaki ksztalt maja polskie znaki drogowe informacyjne?", N);
        memcpy(question_1000.Answer_A, "A.kola", N);
        memcpy(question_1000.Answer_B, "B.trojkata", N);
        memcpy(question_1000.Answer_C, "C.trapezu", N);
        memcpy(question_1000.Answer_D, "D.prostokatu", N);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 160, 445, 0, question_1000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_1000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_1000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_1000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_1000.Answer_D);
        al_flip_display();
        odp = 4;
    }

    else if (wylosowane_pytanie_1000 == 5) {
        memcpy(question_1000.question, "Pierwszym krolem Polski byl?", N);
        memcpy(question_1000.Answer_A, "A.Mieszko I", N);
        memcpy(question_1000.Answer_B, "B.Boleslaw Smialy", N);
        memcpy(question_1000.Answer_C, "C.Kazimierz Odnowiciel", N);
        memcpy(question_1000.Answer_D, "D.Boleslaw Chrobry", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_1000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_1000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_1000.Answer_B);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 160, 660, 0, question_1000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_1000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    else if (wylosowane_pytanie_1000 == 6) {
        memcpy(question_1000.question, "Lekarz odpowiedzialny za usypianie pacjenta przed operacja to:", N);
        memcpy(question_1000.Answer_A, "A.chirurg", N);
        memcpy(question_1000.Answer_B, "B.anestezjolog", N);
        memcpy(question_1000.Answer_C, "C.androlog", N);
        memcpy(question_1000.Answer_D, "D.epistolog", N);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 150, 445, 0, question_1000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_1000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_1000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_1000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_1000.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else if (wylosowane_pytanie_1000 == 7) {
        memcpy(question_1000.question, "Ful i kareta wystepuja w: ", N);
        memcpy(question_1000.Answer_A, "A.w makao", N);
        memcpy(question_1000.Answer_B, "B.w brydzu", N);
        memcpy(question_1000.Answer_C, "C.w pokerze", N);
        memcpy(question_1000.Answer_D, "D.w tysiacu", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_1000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_1000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_1000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_1000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_1000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else if (wylosowane_pytanie_1000 == 8) {
        memcpy(question_1000.question, "Gdzie znajduje sie najwyzszy szczyt na Ziemi? ", N);
        memcpy(question_1000.Answer_A, "A.na Kaukazie", N);
        memcpy(question_1000.Answer_B, "B.w Karakorum", N);
        memcpy(question_1000.Answer_C, "C.w Andach", N);
        memcpy(question_1000.Answer_D, "D.w Himalajach", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_1000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_1000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_1000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_1000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_1000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    else if (wylosowane_pytanie_1000 == 9) {
        memcpy(question_1000.question, "Jak nazywa sie stolica Urugwaju?", N);
        memcpy(question_1000.Answer_A, "A.Montevideo", N);
        memcpy(question_1000.Answer_B, "B.Waszyngton", N);
        memcpy(question_1000.Answer_C, "C.Pekin", N);
        memcpy(question_1000.Answer_D, "D.Montedvd", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_1000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_1000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_1000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_1000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_1000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else if (wylosowane_pytanie_1000 == 10) {
        memcpy(question_1000.question, "Dzielnica Manhattanu Broadway slynie z:", N);
        memcpy(question_1000.Answer_A, "A.galerii handlowych", N);
        memcpy(question_1000.Answer_B, "B.teatrow", N);
        memcpy(question_1000.Answer_C, "C.restauracji", N);
        memcpy(question_1000.Answer_D, "D.gieldy", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_1000.question);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 160, 565, 0, question_1000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_1000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_1000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_1000.Answer_D);
        al_flip_display();
        odp = 2;
    }
    free(question_1000.question);
    free(question_1000.Answer_A);
    free(question_1000.Answer_B);
    free(question_1000.Answer_C);
    free(question_1000.Answer_D);
    return odp;
}

int pytania_odpowiedzi_5000(int odp, int wylosowane_pytanie_5000, ALLEGRO_DISPLAY** display, ALLEGRO_EVENT* ev, ALLEGRO_FONT* font25, ALLEGRO_BITMAP* question_bitmap, ALLEGRO_FONT* font35, ALLEGRO_FONT* font30)
{
    question_5000.question = (char*)calloc(N, sizeof(char));
    question_5000.Answer_A = (char*)calloc(N, sizeof(char));
    question_5000.Answer_B = (char*)calloc(N, sizeof(char));
    question_5000.Answer_C = (char*)calloc(N, sizeof(char));
    question_5000.Answer_D = (char*)calloc(N, sizeof(char));
    al_draw_bitmap(question_bitmap, 0, 0, 0);
    if (wylosowane_pytanie_5000 == 1) {
        memcpy(question_5000.question, "Co jest jednostka pojemnosci elektrycznej?", N);
        memcpy(question_5000.Answer_A, "A.amper", N);
        memcpy(question_5000.Answer_B, "B.volt", N);
        memcpy(question_5000.Answer_C, "C.rank", N);
        memcpy(question_5000.Answer_D, "D.farad", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_5000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_5000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_5000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_5000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_5000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    else if (wylosowane_pytanie_5000 == 2) {
        memcpy(question_5000.question, "Kto odkryl morska droge do Indii?", N);
        memcpy(question_5000.Answer_A, "A.Amerigo Vespucci", N);
        memcpy(question_5000.Answer_B, "B.Krzysztof Kolumb", N);
        memcpy(question_5000.Answer_C, "C.Vasco da Gama", N);
        memcpy(question_5000.Answer_D, "D.John Cook", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_5000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_5000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_5000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_5000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_5000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else if (wylosowane_pytanie_5000 == 3) {
        char tmp1[55];
        char tmp2[23];
        memcpy(question_5000.question, "Ktora reprezentacja wygrala najwiecej Mistrzostw swiata w pilce noznej?", N);
        for (int i = 0; i < 55; i++) {
            tmp1[i] = question_5000.question[i];
        }
        int j = 55;
        for (int i = 0; i < 23; i++) {
            tmp2[i] = question_5000.question[j++];
        }
        memcpy(question_5000.Answer_A, "A.Brazylia", N);
        memcpy(question_5000.Answer_B, "B.Niemcy", N);
        memcpy(question_5000.Answer_C, "C.Urugwaj", N);
        memcpy(question_5000.Answer_D, "D.Francja", N);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 160, 430, 0, tmp1);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 165, 470, 0, tmp2);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_5000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_5000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_5000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_5000.Answer_D);
        al_flip_display();
        odp = 1;
    }

    else if (wylosowane_pytanie_5000 == 4) {
        char tmp1[33];
        char tmp2[26];
        memcpy(question_5000.question, "Ktory gruczol potrzebuje jodu do wlasciwego funkcjonowania?", N);
        for (int i = 0; i < 33; i++) {
            tmp1[i] = question_5000.question[i];
        }
        int j = 33;
        for (int i = 0; i < 26; i++) {
            tmp2[i] = question_5000.question[j++];
        }
        memcpy(question_5000.Answer_A, "A.przysadka", N);
        memcpy(question_5000.Answer_B, "B.tarczyca", N);
        memcpy(question_5000.Answer_C, "C.jajnik", N);
        memcpy(question_5000.Answer_D, "D.przytarczyczki", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 200, 425, 0, tmp1);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 210, 465, 0, tmp2);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_5000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_5000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_5000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_5000.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else if (wylosowane_pytanie_5000 == 5) {
        char tmp1[45];
        char tmp2[27];
        memcpy(question_5000.question, "Drewniany statek o malym zanurzeniu uzywany w Chinach do polowow ryb to?", N);
        for (int i = 0; i < 45; i++) {
            tmp1[i] = question_5000.question[i];
        }
        int j = 45;
        for (int i = 0; i < 27; i++) {
            tmp2[i] = question_5000.question[j++];
        }
        memcpy(question_5000.Answer_A, "A.piroga", N);
        memcpy(question_5000.Answer_B, "B.canoe", N);
        memcpy(question_5000.Answer_C, "C.galera", N);
        memcpy(question_5000.Answer_D, "D.dzonka", N);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 160, 430, 0, tmp1);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 200, 470, 0, tmp2);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_5000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_5000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_5000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_5000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    else if (wylosowane_pytanie_5000 == 6) {
        memcpy(question_5000.question, "Jezioro turkusowe znajduje sie na wyspie:", N);
        memcpy(question_5000.Answer_A, "A.Bornholm", N);
        memcpy(question_5000.Answer_B, "B.Wolin", N);
        memcpy(question_5000.Answer_C, "C.Wielkanocnej", N);
        memcpy(question_5000.Answer_D, "D.Honsiu", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 160, 445, 0, question_5000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_5000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_5000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_5000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_5000.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else if (wylosowane_pytanie_5000 == 7) {
        memcpy(question_5000.question, "Slynna autostrada Slonca biegnie przez: ", N);
        memcpy(question_5000.Answer_A, "A.Hiszpanie", N);
        memcpy(question_5000.Answer_B, "B.Wlochy", N);
        memcpy(question_5000.Answer_C, "C.Francje", N);
        memcpy(question_5000.Answer_D, "D.Turcje", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_5000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_5000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_5000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_5000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_5000.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else if (wylosowane_pytanie_5000 == 8) {
        memcpy(question_5000.question, "Oktoberfest to swieto:", N);
        memcpy(question_5000.Answer_A, "A.Wina", N);
        memcpy(question_5000.Answer_B, "B.Wodki", N);
        memcpy(question_5000.Answer_C, "C.Piwa", N);
        memcpy(question_5000.Answer_D, "D.Whiskey", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_5000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_5000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_5000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_5000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_5000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else if (wylosowane_pytanie_5000 == 9) {
        memcpy(question_5000.question, "Reczny warsztat tkacki to:", N);
        memcpy(question_5000.Answer_A, "A.kalander", N);
        memcpy(question_5000.Answer_B, "B.kolowrotek", N);
        memcpy(question_5000.Answer_C, "C.wrzeciono", N);
        memcpy(question_5000.Answer_D, "D.krosno", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_5000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_5000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_5000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_5000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_5000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    else if (wylosowane_pytanie_5000 == 10) {
        memcpy(question_5000.question, "Ktory kraj jest ojczyzna ptakow Kiwi?", N);
        memcpy(question_5000.Answer_A, "A.Nowa Zelandia", N);
        memcpy(question_5000.Answer_B, "B.Australia", N);
        memcpy(question_5000.Answer_C, "C.Brazylia", N);
        memcpy(question_5000.Answer_D, "D.Madagaskar", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_5000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_5000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_5000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_5000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_5000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    free(question_5000.question);
    free(question_5000.Answer_A);
    free(question_5000.Answer_B);
    free(question_5000.Answer_C);
    free(question_5000.Answer_D);
    return odp;
}

int pytania_odpowiedzi_10000(int odp, int wylosowane_pytanie_10000, ALLEGRO_DISPLAY** display, ALLEGRO_EVENT* ev, ALLEGRO_FONT* font25, ALLEGRO_BITMAP* question_bitmap, ALLEGRO_FONT* font35, ALLEGRO_FONT* font30)
{
    question_10000.question = (char*)calloc(N, sizeof(char));
    question_10000.Answer_A = (char*)calloc(N, sizeof(char));
    question_10000.Answer_B = (char*)calloc(N, sizeof(char));
    question_10000.Answer_C = (char*)calloc(N, sizeof(char));
    question_10000.Answer_D = (char*)calloc(N, sizeof(char));
    al_draw_bitmap(question_bitmap, 0, 0, 0);
    if (wylosowane_pytanie_10000 == 1) {
        memcpy(question_10000.question, "Ktore z rozszerzen oznacza pliki skompresowane?", N);
        memcpy(question_10000.Answer_A, "A.vbs", N);
        memcpy(question_10000.Answer_B, "B.html", N);
        memcpy(question_10000.Answer_C, "C.cpp", N);
        memcpy(question_10000.Answer_D, "D.rar", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 160, 445, 0, question_10000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_10000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_10000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_10000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_10000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    else if (wylosowane_pytanie_10000 == 2) {
        memcpy(question_10000.question, "Najwiecej atomow wegla w czasteczce zawiera?", N);
        memcpy(question_10000.Answer_A, "A.metan", N);
        memcpy(question_10000.Answer_B, "B.etan", N);
        memcpy(question_10000.Answer_C, "C.butan", N);
        memcpy(question_10000.Answer_D, "D.propan", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 160, 445, 0, question_10000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_10000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_10000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_10000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_10000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else if (wylosowane_pytanie_10000 == 3) {
        memcpy(question_10000.question, "Ile wynosi najdluzszy skok w karierze Adama Malysza?", N);
        memcpy(question_10000.Answer_A, "A.230,5", N);
        memcpy(question_10000.Answer_B, "B.238", N);
        memcpy(question_10000.Answer_C, "C.227", N);
        memcpy(question_10000.Answer_D, "D.234,5", N);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 160, 445, 0, question_10000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_10000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_10000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_10000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_10000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else if (wylosowane_pytanie_10000 == 4) {
        memcpy(question_10000.question, "Jak nazywa sie stolica Malezji?", N);
        memcpy(question_10000.Answer_A, "A.Kuala Lumpur", N);
        memcpy(question_10000.Answer_B, "B.Bamako", N);
        memcpy(question_10000.Answer_C, "C.Hanoi", N);
        memcpy(question_10000.Answer_D, "D.Abu Zabi", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_10000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_10000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_10000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_10000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_10000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else if (wylosowane_pytanie_10000 == 5) {
        char tmp1[39];
        char tmp2[22];
        memcpy(question_10000.question, "Ile czasu minelo od startu Apollo 11 do ladowania na ksiezycu?", N);
        for (int i = 0; i < 39; i++) {
            tmp1[i] = question_10000.question[i];
        }
        int j = 39;
        for (int i = 0; i < 22; i++) {
            tmp2[i] = question_10000.question[j++];
        }
        memcpy(question_10000.Answer_A, "A.30 dni", N);
        memcpy(question_10000.Answer_B, "B.3 dni", N);
        memcpy(question_10000.Answer_C, "C.1 dzien", N);
        memcpy(question_10000.Answer_D, "D.60 dni", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, tmp1);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 200, 465, 0, tmp2);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_10000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_10000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_10000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_10000.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else if (wylosowane_pytanie_10000 == 6) {
        memcpy(question_10000.question, "Jaki przydomek ma bokser Dariusz Michalczewski?", N);
        memcpy(question_10000.Answer_A, "A.spryciarz", N);
        memcpy(question_10000.Answer_B, "B.boa", N);
        memcpy(question_10000.Answer_C, "C.tygrys", N);
        memcpy(question_10000.Answer_D, "D.blondas", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 160, 445, 0, question_10000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_10000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_10000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_10000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_10000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else if (wylosowane_pytanie_10000 == 7) {
        char tmp1[52];
        char tmp2[13];
        memcpy(question_10000.question, "Jak nazywa sie glowny bohater filmu 'Jestem legenda' z 2007 roku?", N);
        for (int i = 0; i < 52; i++) {
            tmp1[i] = question_10000.question[i];
        }
        int j = 52;
        for (int i = 0; i < 13; i++) {
            tmp2[i] = question_10000.question[j++];
        }
        memcpy(question_10000.Answer_A, "A.John Nash", N);
        memcpy(question_10000.Answer_B, "B.William Ridick", N);
        memcpy(question_10000.Answer_C, "C.Christian Fury", N);
        memcpy(question_10000.Answer_D, "D. Robert Neville", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 145, 435, 0, tmp1);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 150, 475, 0, tmp2);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_10000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_10000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_10000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_10000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    else if (wylosowane_pytanie_10000 == 8) {
        char tmp1[42];
        char tmp2[24];
        memcpy(question_10000.question, "W ktorym roku Henryk Sienkiewicz otrzymal literacka Nagrode Nobla?", N);
        for (int i = 0; i < 42; i++) {
            tmp1[i] = question_10000.question[i];
        }
        int j = 42;
        for (int i = 0; i < 24; i++) {
            tmp2[i] = question_10000.question[j++];
        }
        memcpy(question_10000.Answer_A, "A.1905", N);
        memcpy(question_10000.Answer_B, "B.1912", N);
        memcpy(question_10000.Answer_C, "C.1926", N);
        memcpy(question_10000.Answer_D, "D.1942", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 150, 435, 0, tmp1);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 155, 475, 0, tmp2);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_10000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_10000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_10000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_10000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else if (wylosowane_pytanie_10000 == 9) {
        memcpy(question_10000.question, "Ktorego dnia uchwalono pierwsza polska konstytucje?", N);
        memcpy(question_10000.Answer_A, "A.11 listopada", N);
        memcpy(question_10000.Answer_B, "B.3 maja", N);
        memcpy(question_10000.Answer_C, "C.15 sierpnia", N);
        memcpy(question_10000.Answer_D, "D.23 lipca", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 160, 445, 0, question_10000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_10000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_10000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_10000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_10000.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else if (wylosowane_pytanie_10000 == 10) {
        memcpy(question_10000.question, "Atak na Pearl Harbor rozpoczal sie: ", N);
        memcpy(question_10000.Answer_A, "A.11 listopada 1941", N);
        memcpy(question_10000.Answer_B, "B.18 sierpnia", N);
        memcpy(question_10000.Answer_C, "C.7 grudnia 1941", N);
        memcpy(question_10000.Answer_D, "D.14 stycznia 1942", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_10000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_10000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_10000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_10000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_10000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    free(question_10000.question);
    free(question_10000.Answer_A);
    free(question_10000.Answer_B);
    free(question_10000.Answer_C);
    free(question_10000.Answer_D);

    return odp;
}

int pytania_odpowiedzi_50000(int odp, int wylosowane_pytanie_50000, ALLEGRO_DISPLAY** display, ALLEGRO_EVENT* ev, ALLEGRO_FONT* font25, ALLEGRO_BITMAP* question_bitmap, ALLEGRO_FONT* font35, ALLEGRO_FONT* font30)
{
    question_50000.question = (char*)calloc(N, sizeof(char));
    question_50000.Answer_A = (char*)calloc(N, sizeof(char));
    question_50000.Answer_B = (char*)calloc(N, sizeof(char));
    question_50000.Answer_C = (char*)calloc(N, sizeof(char));
    question_50000.Answer_D = (char*)calloc(N, sizeof(char));
    al_draw_bitmap(question_bitmap, 0, 0, 0);
    if (wylosowane_pytanie_50000 == 1) {
        memcpy(question_50000.question, "Jakie jest najglebsze jezioro w Polsce?", N);
        memcpy(question_50000.Answer_A, "A.Hancza", N);
        memcpy(question_50000.Answer_B, "B.Morskie Oko", N);
        memcpy(question_50000.Answer_C, "C.Szelment", N);
        memcpy(question_50000.Answer_D, "D.Sniardwy", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_50000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_50000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_50000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_50000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_50000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else if (wylosowane_pytanie_50000 == 2) {
        memcpy(question_50000.question, "Jaki jezyk urzedowy obowiazuje na Cyprze?", N);
        memcpy(question_50000.Answer_A, "A.Cyprzynski", N);
        memcpy(question_50000.Answer_B, "B.Grecki", N);
        memcpy(question_50000.Answer_C, "C.Angielski", N);
        memcpy(question_50000.Answer_D, "D.Francuski", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_50000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_50000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_50000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_50000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_50000.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else if (wylosowane_pytanie_50000 == 3) {
        memcpy(question_50000.question, "Jak nazywa sie stolica Australii?", N);
        memcpy(question_50000.Answer_A, "A.Syndey", N);
        memcpy(question_50000.Answer_B, "B.Kair", N);
        memcpy(question_50000.Answer_C, "C.Canberra", N);
        memcpy(question_50000.Answer_D, "D.Ottawa", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_50000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_50000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_50000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_50000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_50000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else if (wylosowane_pytanie_50000 == 4) {
        memcpy(question_50000.question, "Ile Wojewodztw ma Polska?", N);
        memcpy(question_50000.Answer_A, "A.15", N);
        memcpy(question_50000.Answer_B, "B.19", N);
        memcpy(question_50000.Answer_C, "C.23", N);
        memcpy(question_50000.Answer_D, "D.16", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_50000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_50000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_50000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_50000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_50000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    else if (wylosowane_pytanie_50000 == 5) {
        memcpy(question_50000.question, "Ile jest miejsc w polskim senacie?", N);
        memcpy(question_50000.Answer_A, "A.100", N);
        memcpy(question_50000.Answer_B, "B.120", N);
        memcpy(question_50000.Answer_C, "C.60", N);
        memcpy(question_50000.Answer_D, "D.460", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_50000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_50000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_50000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_50000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_50000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else if (wylosowane_pytanie_50000 == 6) {
        memcpy(question_50000.question, "Ktorego z modeli nie wyprodukowala marka Renault?", N);
        memcpy(question_50000.Answer_A, "A.Speedster", N);
        memcpy(question_50000.Answer_B, "B.Wind", N);
        memcpy(question_50000.Answer_C, "C.Safrane", N);
        memcpy(question_50000.Answer_D, "D.Latitude", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 160, 445, 0, question_50000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_50000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_50000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_50000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_50000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else  if (wylosowane_pytanie_50000 == 7) {
        memcpy(question_50000.question, "Za pomoca jakich fal pilot telewizyjny wysyla sygnal?", N);
        memcpy(question_50000.Answer_A, "A.Podczerwieni", N);
        memcpy(question_50000.Answer_B, "B.Ultradzwieku", N);
        memcpy(question_50000.Answer_C, "C.Fal radiowych", N);
        memcpy(question_50000.Answer_D, "D.Ultrafioletu", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 135, 445, 0, question_50000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_50000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_50000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_50000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_50000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else  if (wylosowane_pytanie_50000 == 8) {
        memcpy(question_50000.question, "Z zakresu jakiej nauki prowadzone sa badania w osrodku CERN?", N);
        memcpy(question_50000.Answer_A, "A.fizyki", N);
        memcpy(question_50000.Answer_B, "B.metafizyki", N);
        memcpy(question_50000.Answer_C, "C.chemii", N);
        memcpy(question_50000.Answer_D, "D.matematyki", N);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 150, 445, 0, question_50000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_50000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_50000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_50000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_50000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else  if (wylosowane_pytanie_50000 == 9) {
        memcpy(question_50000.question, "Szczekuszka jest:", N);
        memcpy(question_50000.Answer_A, "A.gadem", N);
        memcpy(question_50000.Answer_B, "B.plazem", N);
        memcpy(question_50000.Answer_C, "C.ptakiem", N);
        memcpy(question_50000.Answer_D, "D.ssakiem", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 150, 445, 0, question_50000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_50000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_50000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_50000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_50000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    else  if (wylosowane_pytanie_50000 == 10) {
        memcpy(question_50000.question, "Ktory kraj nalezy do Unii Europejskiej?", N);
        memcpy(question_50000.Answer_A, "A.Islandia", N);
        memcpy(question_50000.Answer_B, "B.Szwajcaria", N);
        memcpy(question_50000.Answer_C, "C.Norwegia", N);
        memcpy(question_50000.Answer_D, "D.Malta", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 150, 445, 0, question_50000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_50000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_50000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_50000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_50000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    free(question_50000.question);
    free(question_50000.Answer_A);
    free(question_50000.Answer_B);
    free(question_50000.Answer_C);
    free(question_50000.Answer_D);
    return odp;
}

int pytania_odpowiedzi_100000(int odp, int wylosowane_pytanie_100000, ALLEGRO_DISPLAY** display, ALLEGRO_EVENT* ev, ALLEGRO_FONT* font25, ALLEGRO_BITMAP* question_bitmap, ALLEGRO_FONT* font35, ALLEGRO_FONT* font30)
{
    question_100000.question = (char*)calloc(N, sizeof(char));
    question_100000.Answer_A = (char*)calloc(N, sizeof(char));
    question_100000.Answer_B = (char*)calloc(N, sizeof(char));
    question_100000.Answer_C = (char*)calloc(N, sizeof(char));
    question_100000.Answer_D = (char*)calloc(N, sizeof(char));
    al_draw_bitmap(question_bitmap, 0, 0, 0);
    if (wylosowane_pytanie_100000 == 1) {
        memcpy(question_100000.question, "Jak nazywal sie odwieczny wrog Sherlocka Holmesa?", N);
        memcpy(question_100000.Answer_A, "A.profesor Moriaty", N);
        memcpy(question_100000.Answer_B, "B.doktor Mabuse", N);
        memcpy(question_100000.Answer_C, "C.Fantomas", N);
        memcpy(question_100000.Answer_D, "D.doktor Watson", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 155, 445, 0, question_100000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_100000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_100000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_100000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_100000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else if (wylosowane_pytanie_100000 == 2) {
        memcpy(question_100000.question, "Wirtuozem jakiego instrumentu byl Miles Davis?", N);
        memcpy(question_100000.Answer_A, "A.gitary", N);
        memcpy(question_100000.Answer_B, "B.perkusji", N);
        memcpy(question_100000.Answer_C, "C.trabki", N);
        memcpy(question_100000.Answer_D, "D.fortepianu", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 155, 445, 0, question_100000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_100000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_100000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_100000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_100000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else  if (wylosowane_pytanie_100000 == 3) {
        memcpy(question_100000.question, "Grecka swiatynia poswiecona Atenie to?", N);
        memcpy(question_100000.Answer_A, "A.Partenon", N);
        memcpy(question_100000.Answer_B, "B.Pentagon", N);
        memcpy(question_100000.Answer_C, "C.Koloseum", N);
        memcpy(question_100000.Answer_D, "D.Panteon", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 155, 445, 0, question_100000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_100000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_100000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_100000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_100000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else  if (wylosowane_pytanie_100000 == 4) {
        memcpy(question_100000.question, "Na jakim kontynencie leza Andy?", N);
        memcpy(question_100000.Answer_A, "A.w Azji", N);
        memcpy(question_100000.Answer_B, "B.w Ameryce Poludniowej", N);
        memcpy(question_100000.Answer_C, "C.w Europie", N);
        memcpy(question_100000.Answer_D, "D.w Ameryce Polnocnej", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 155, 445, 0, question_100000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_100000.Answer_A);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 660, 565, 0, question_100000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_100000.Answer_C);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 660, 660, 0, question_100000.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else if (wylosowane_pytanie_100000 == 5) {
        memcpy(question_100000.question, "Tworca termometru Anders Celcius pochodzil z:", N);
        memcpy(question_100000.Answer_A, "A.Francji", N);
        memcpy(question_100000.Answer_B, "B.Niemiec", N);
        memcpy(question_100000.Answer_C, "C.Rosji", N);
        memcpy(question_100000.Answer_D, "D.Szwecji", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 155, 445, 0, question_100000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_100000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_100000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_100000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_100000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    else if (wylosowane_pytanie_100000 == 6) {
        memcpy(question_100000.question, "Claude Moent malowal glownie:", N);
        memcpy(question_100000.Answer_A, "A.martwa nature", N);
        memcpy(question_100000.Answer_B, "B.akty", N);
        memcpy(question_100000.Answer_C, "C.portrety", N);
        memcpy(question_100000.Answer_D, "D.pejzaze", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 150, 445, 0, question_100000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_100000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_100000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_100000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_100000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    else if (wylosowane_pytanie_100000 == 7) {
        memcpy(question_100000.question, "Najdluzsza rzeka Europy to:", N);
        memcpy(question_100000.Answer_A, "A.Wisla", N);
        memcpy(question_100000.Answer_B, "B.Dunaj", N);
        memcpy(question_100000.Answer_C, "C.Wolga", N);
        memcpy(question_100000.Answer_D, "D.Dniepr", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 155, 445, 0, question_100000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_100000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_100000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_100000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_100000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else if (wylosowane_pytanie_100000 == 8) {
        memcpy(question_100000.question, "Album studyjny 'And Winter Came' nagrala:", N);
        memcpy(question_100000.Answer_A, "A.Kylie Minogue", N);
        memcpy(question_100000.Answer_B, "B.Enya", N);
        memcpy(question_100000.Answer_C, "C.Roxette", N);
        memcpy(question_100000.Answer_D, "D.Nelly Furtado", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 155, 445, 0, question_100000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_100000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_100000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_100000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_100000.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else if (wylosowane_pytanie_100000 == 9) {
        char tmp1[46];
        char tmp2[26];
        memcpy(question_100000.question, "Warstwa atmosfery znajdujaca sie bezposrednio przy powierzchni Ziemi to:", N);
        for (int i = 0; i < 46; i++) {
            tmp1[i] = question_100000.question[i];
        }
        int j = 46;
        for (int i = 0; i < 26; i++) {
            tmp2[i] = question_100000.question[j++];
        }
        memcpy(question_100000.Answer_A, "A.troposfera", N);
        memcpy(question_100000.Answer_B, "B.ozonosfera", N);
        memcpy(question_100000.Answer_C, "C.jonosfera", N);
        memcpy(question_100000.Answer_D, "D.stratosfera", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 150, 435, 0, tmp1);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 160, 475, 0, tmp2);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_100000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_100000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_100000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_100000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else if (wylosowane_pytanie_100000 == 10) {
        memcpy(question_100000.question, "Jaki jest symbol chemiczny krzemu?", N);
        memcpy(question_100000.Answer_A, "A.Ca", N);
        memcpy(question_100000.Answer_B, "B.Na", N);
        memcpy(question_100000.Answer_C, "C.Si", N);
        memcpy(question_100000.Answer_D, "D.K", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 155, 445, 0, question_100000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_100000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_100000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_100000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_100000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    free(question_100000.question);
    free(question_100000.Answer_A);
    free(question_100000.Answer_B);
    free(question_100000.Answer_C);
    free(question_100000.Answer_D);
    return odp;
}

int pytania_odpowiedzi_250000(int odp, int wylosowane_pytanie_250000, ALLEGRO_DISPLAY** display, ALLEGRO_EVENT* ev, ALLEGRO_FONT* font25, ALLEGRO_BITMAP* question_bitmap, ALLEGRO_FONT* font35, ALLEGRO_FONT* font30)
{
    question_250000.question = (char*)calloc(N, sizeof(char));
    question_250000.Answer_A = (char*)calloc(N, sizeof(char));
    question_250000.Answer_B = (char*)calloc(N, sizeof(char));
    question_250000.Answer_C = (char*)calloc(N, sizeof(char));
    question_250000.Answer_D = (char*)calloc(N, sizeof(char));
    al_draw_bitmap(question_bitmap, 0, 0, 0);
    if (wylosowane_pytanie_250000 == 1) {
        memcpy(question_250000.question, "Jak nazywa sie punkt przeciwlegly zenitowi?", N);
        memcpy(question_250000.Answer_A, "A.paralaksa", N);
        memcpy(question_250000.Answer_B, "B.nadir", N);
        memcpy(question_250000.Answer_C, "C.azymut", N);
        memcpy(question_250000.Answer_D, "D.radian", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 160, 445, 0, question_250000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_250000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_250000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_250000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_250000.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else  if (wylosowane_pytanie_250000 == 2) {
        char tmp1[47];
        char tmp2[29];
        memcpy(question_250000.question, "Ktora z greckich bogin byla opiekunka dzieci i sierot oraz ogniska domowego?", N);
        for (int i = 0; i < 47; i++) {
            tmp1[i] = question_250000.question[i];
        }
        int j = 47;
        for (int i = 0; i < 29; i++) {
            tmp2[i] = question_250000.question[j++];
        }
        memcpy(question_250000.Answer_A, "A.Artemida", N);
        memcpy(question_250000.Answer_B, "B.Hera", N);
        memcpy(question_250000.Answer_C, "C.Hestia", N);
        memcpy(question_250000.Answer_D, "D.Demeter", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 160, 430, 0, tmp1);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 200, 470, 0, tmp2);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_250000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_250000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_250000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_250000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else if (wylosowane_pytanie_250000 == 3) {
        memcpy(question_250000.question, "Jak nazywali sie dwaj glowni bohaterowie w filmie Pulp Fiction?", N);
        memcpy(question_250000.Answer_A, "A.Jules i Vincent", N);
        memcpy(question_250000.Answer_B, "B.Mick i Butch", N);
        memcpy(question_250000.Answer_C, "C.Jack i Vincent", N);
        memcpy(question_250000.Answer_D, "D.Vernon i Jules", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 160, 445, 0, question_250000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_250000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_250000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_250000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_250000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else  if (wylosowane_pytanie_250000 == 4) {
        memcpy(question_250000.question, "Ile to jest gros?", N);
        memcpy(question_250000.Answer_A, "A.110", N);
        memcpy(question_250000.Answer_B, "B.111", N);
        memcpy(question_250000.Answer_C, "C.144", N);
        memcpy(question_250000.Answer_D, "D.180", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_250000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_250000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_250000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_250000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_250000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else  if (wylosowane_pytanie_250000 == 5) {
        memcpy(question_250000.question, "Jak nazywal sie przywodca krasnoludow w ksiazce Hobbit?", N);
        memcpy(question_250000.Answer_A, "A.Gandalf Szary", N);
        memcpy(question_250000.Answer_B, "B.Bilbo Bagins", N);
        memcpy(question_250000.Answer_C, "C.Aragorn", N);
        memcpy(question_250000.Answer_D, "D.Thorin Debowa Tarcza", N);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 160, 445, 0, question_250000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_250000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_250000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_250000.Answer_C);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 670, 660, 0, question_250000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    else if (wylosowane_pytanie_250000 == 6) {
        char tmp1[50];
        char tmp2[23];
        memcpy(question_250000.question, "Ktory teledysk Michaela Jacksona trwajacy 14 minut zdobyl nagrode Grammy?", N);
        for (int i = 0; i < 50; i++) {
            tmp1[i] = question_250000.question[i];
        }
        int j = 50;
        for (int i = 0; i < 23; i++) {
            tmp2[i] = question_250000.question[j++];
        }
        memcpy(question_250000.Answer_A, "A.Thriller", N);
        memcpy(question_250000.Answer_B, "B.Into the Closet", N);
        memcpy(question_250000.Answer_C, "C.Beat it", N);
        memcpy(question_250000.Answer_D, "D.Billie Jean", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 145, 430, 0, tmp1);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 155, 470, 0, tmp2);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_250000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_250000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_250000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_250000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else if (wylosowane_pytanie_250000 == 7) {
        memcpy(question_250000.question, "Na jakim morzu znajduje sie Kuba?", N);
        memcpy(question_250000.Answer_A, "A.Koralowym", N);
        memcpy(question_250000.Answer_B, "B.Filipinskim", N);
        memcpy(question_250000.Answer_C, "C.Karaibskim", N);
        memcpy(question_250000.Answer_D, "D.Srodziemnym", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_250000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_250000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_250000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_250000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_250000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else if (wylosowane_pytanie_250000 == 8) {
        char tmp1[51];
        char tmp2[22];
        memcpy(question_250000.question, "W ktorym roku Kurt Cobain, wokalista grupy Nirvana, popelnil samobojstwo?", N);
        for (int i = 0; i < 51; i++) {
            tmp1[i] = question_250000.question[i];
        }
        int j = 51;
        for (int i = 0; i < 22; i++) {
            tmp2[i] = question_250000.question[j++];
        }
        memcpy(question_250000.Answer_A, "A.1994", N);
        memcpy(question_250000.Answer_B, "B.1995", N);
        memcpy(question_250000.Answer_C, "C.1984", N);
        memcpy(question_250000.Answer_D, "D.1985", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 145, 430, 0, tmp1);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 155, 470, 0, tmp2);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_250000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_250000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_250000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_250000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else if (wylosowane_pytanie_250000 == 9) {
        char tmp1[46];
        char tmp2[16];
        memcpy(question_250000.question, "Kto skomponowal Soundtrack do wydanego w 1993 roku DOOMa?", N);
        for (int i = 0; i < 46; i++) {
            tmp1[i] = question_250000.question[i];
        }
        int j = 46;
        for (int i = 0; i < 16; i++) {
            tmp2[i] = question_250000.question[j++];
        }
        memcpy(question_250000.Answer_A, "A.Aubrey Hodges", N);
        memcpy(question_250000.Answer_B, "B.Tom Hall", N);
        memcpy(question_250000.Answer_C, "C.Bobby Prince", N);
        memcpy(question_250000.Answer_D, "D.John Romero", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 145, 430, 0, tmp1);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 155, 470, 0, tmp2);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_250000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_250000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_250000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_250000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else if (wylosowane_pytanie_250000 == 10) {
        memcpy(question_250000.question, "W ktorym roku zostalo zalozone studio Creative Assembly?", N);
        memcpy(question_250000.Answer_A, "A.1986", N);
        memcpy(question_250000.Answer_B, "B.1987", N);
        memcpy(question_250000.Answer_C, "C.1985", N);
        memcpy(question_250000.Answer_D, "D.1984", N);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 160, 445, 0, question_250000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_250000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_250000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_250000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_250000.Answer_D);
        al_flip_display();
        odp = 2;
    }


    free(question_250000.question);
    free(question_250000.Answer_A);
    free(question_250000.Answer_B);
    free(question_250000.Answer_C);
    free(question_250000.Answer_D);

    return odp;
}

int pytania_odpowiedzi_500000(int odp, int wylosowane_pytanie_500000, ALLEGRO_DISPLAY** display, ALLEGRO_EVENT* ev, ALLEGRO_FONT* font25, ALLEGRO_BITMAP* question_bitmap, ALLEGRO_FONT* font35, ALLEGRO_FONT* font30)
{
    question_500000.question = (char*)calloc(N, sizeof(char));
    question_500000.Answer_A = (char*)calloc(N, sizeof(char));
    question_500000.Answer_B = (char*)calloc(N, sizeof(char));
    question_500000.Answer_C = (char*)calloc(N, sizeof(char));
    question_500000.Answer_D = (char*)calloc(N, sizeof(char));
    al_draw_bitmap(question_bitmap, 0, 0, 0);
    if (wylosowane_pytanie_500000 == 1) {
        memcpy(question_500000.question, "W Ktorym kraju znajduja sie ruiny Kartaginy?", N);
        memcpy(question_500000.Answer_A, "A.w Turcji", N);
        memcpy(question_500000.Answer_B, "B.w Indiach", N);
        memcpy(question_500000.Answer_C, "C.w Tunezji", N);
        memcpy(question_500000.Answer_D, "D.w Egipcie", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 155, 445, 0, question_500000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_500000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_500000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_500000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_500000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else if (wylosowane_pytanie_500000 == 2) {
        memcpy(question_500000.question, "Kim byl Atylla?", N);
        memcpy(question_500000.Answer_A, "A.Wodzem Spartan", N);
        memcpy(question_500000.Answer_B, "B.Wodzem Hunow", N);
        memcpy(question_500000.Answer_C, "C.Wodzem Rzymian", N);
        memcpy(question_500000.Answer_D, "D.Wodzem Persow", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 155, 445, 0, question_500000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_500000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_500000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_500000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_500000.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else if (wylosowane_pytanie_500000 == 3) {
        char tmp1[37];
        char tmp2[29];
        memcpy(question_500000.question, "Ktora z niemieckich wunderwaffe byla bezzalogowym samolotem-bomba?", N);
        for (int i = 0; i < 37; i++) {
            tmp1[i] = question_500000.question[i];
        }
        int j = 37;
        for (int i = 0; i < 29; i++) {
            tmp2[i] = question_500000.question[j++];
        }
        memcpy(question_500000.Answer_A, "A.V-2", N);
        memcpy(question_500000.Answer_B, "B.Neger", N);
        memcpy(question_500000.Answer_C, "C.V-3", N);
        memcpy(question_500000.Answer_D, "D.V-1", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 435, 0, tmp1);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 200, 475, 0, tmp2);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_500000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_500000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_500000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_500000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    else if (wylosowane_pytanie_500000 == 4) {
        memcpy(question_500000.question, "Wzgorze Tibidabo znajduje sie w ?", N);
        memcpy(question_500000.Answer_A, "A.Barcelonie", N);
        memcpy(question_500000.Answer_B, "B.Madrycie", N);
        memcpy(question_500000.Answer_C, "C.Lizbonie", N);
        memcpy(question_500000.Answer_D, "D.Bilbao", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 155, 445, 0, question_500000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_500000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_500000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_500000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_500000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else if (wylosowane_pytanie_500000 == 5) {
        memcpy(question_500000.question, "Do dynastii Andegawenow nalezal?", N);
        memcpy(question_500000.Answer_A, "A.Henryk IV Probus", N);
        memcpy(question_500000.Answer_B, "B.Henryk Walezy", N);
        memcpy(question_500000.Answer_C, "C.Leszek Czarny", N);
        memcpy(question_500000.Answer_D, "D.Ludwik Wegierski", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 155, 445, 0, question_500000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_500000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_500000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_500000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_500000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    else if (wylosowane_pytanie_500000 == 6) {
        memcpy(question_500000.question, "Nazwa Sagittarius oznacza gwiazdozbior:", N);
        memcpy(question_500000.Answer_A, "A.Bliznieta", N);
        memcpy(question_500000.Answer_B, "B.Skorpion", N);
        memcpy(question_500000.Answer_C, "C.Strzelec", N);
        memcpy(question_500000.Answer_D, "D.Rak", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 155, 445, 0, question_500000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_500000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_500000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_500000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_500000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else if (wylosowane_pytanie_500000 == 7) {
        char tmp1[58];
        char tmp2[41];
        memcpy(question_500000.question, "Na jakim stadionie w 1985 r. przed rozpoczeciem finalowego meczu o Puchar Europy, zginelo 39 osob?", N);
        for (int i = 0; i < 58; i++) {
            tmp1[i] = question_500000.question[i];
        }
        int j = 58;
        for (int i = 0; i < 41; i++) {
            tmp2[i] = question_500000.question[j++];
        }
        memcpy(question_500000.Answer_A, "A.Maracana", N);
        memcpy(question_500000.Answer_B, "B.Wembley", N);
        memcpy(question_500000.Answer_C, "C.Heysel", N);
        memcpy(question_500000.Answer_D, "D.Camp Nou", N);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 140, 425, 0, tmp1);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 150, 465, 0, tmp2);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_500000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_500000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_500000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_500000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else if (wylosowane_pytanie_500000 == 8) {
        memcpy(question_500000.question, "Jak nazywa sie tworca serii powiesci 'Pan Lodowego Ogrodu'?", N);
        memcpy(question_500000.Answer_A, "A.Jakub Cwiek", N);
        memcpy(question_500000.Answer_B, "B.Jaroslaw Grzedowicz", N);
        memcpy(question_500000.Answer_C, "C.Andrzej Pilipiuk", N);
        memcpy(question_500000.Answer_D, "D.Maja Lidia Kossakowska", N);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 150, 445, 0, question_500000.question);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 160, 565, 0, question_500000.Answer_A);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 670, 565, 0, question_500000.Answer_B);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 160, 660, 0, question_500000.Answer_C);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 670, 660, 0, question_500000.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else if (wylosowane_pytanie_500000 == 9) {
        memcpy(question_500000.question, "Kiedy zostal wydany Steam?", N);
        memcpy(question_500000.Answer_A, "A.8 wrzesnia 2002", N);
        memcpy(question_500000.Answer_B, "B.12 wrzesnia 2003", N);
        memcpy(question_500000.Answer_C, "C.8 czerwca 2002", N);
        memcpy(question_500000.Answer_D, "D.5 stycznia 2004", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 155, 445, 0, question_500000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_500000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_500000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_500000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_500000.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else if (wylosowane_pytanie_500000 == 10) {
        memcpy(question_500000.question, "Kto byl rezyserem filmu Gladiator?", N);
        memcpy(question_500000.Answer_A, "A.Quentin Tarantino", N);
        memcpy(question_500000.Answer_B, "B.Zack Snyder", N);
        memcpy(question_500000.Answer_C, "C.James Cameron", N);
        memcpy(question_500000.Answer_D, "D.Ridley Scott", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 155, 445, 0, question_500000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_500000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_500000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_500000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_500000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    free(question_500000.question);
    free(question_500000.Answer_A);
    free(question_500000.Answer_B);
    free(question_500000.Answer_C);
    free(question_500000.Answer_D);

    return odp;
}

int pytania_odpowiedzi_750000(int odp, int wylosowane_pytanie_750000, ALLEGRO_DISPLAY** display, ALLEGRO_EVENT* ev, ALLEGRO_FONT* font25, ALLEGRO_BITMAP* question_bitmap, ALLEGRO_FONT* font35, ALLEGRO_FONT* font30)
{
    question_750000.question = (char*)calloc(N, sizeof(char));
    question_750000.Answer_A = (char*)calloc(N, sizeof(char));
    question_750000.Answer_B = (char*)calloc(N, sizeof(char));
    question_750000.Answer_C = (char*)calloc(N, sizeof(char));
    question_750000.Answer_D = (char*)calloc(N, sizeof(char));
    al_draw_bitmap(question_bitmap, 0, 0, 0);
    if (wylosowane_pytanie_750000 == 1) {
        memcpy(question_750000.question, "Mircea Eliade okreslila czlowieka jako:", N);
        memcpy(question_750000.Answer_A, "A.homo sovieticus", N);
        memcpy(question_750000.Answer_B, "B.homo religiosus", N);
        memcpy(question_750000.Answer_C, "C.homo insipiens", N);
        memcpy(question_750000.Answer_D, "D.homo oeconomicus", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_750000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_750000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_750000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_750000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_750000.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else if (wylosowane_pytanie_750000 == 2) {
        memcpy(question_750000.question, "Jaka druzyna pilkarska jako pierwsza zdobyla tzw 'La Decime'?", N);
        memcpy(question_750000.Answer_A, "A.FC Barcelona", N);
        memcpy(question_750000.Answer_B, "B.Bayern Monachium", N);
        memcpy(question_750000.Answer_C, "C.Real Madryt", N);
        memcpy(question_750000.Answer_D, "D.Manchester United", N);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 160, 445, 0, question_750000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_750000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_750000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_750000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_750000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else if (wylosowane_pytanie_750000 == 3) {
        memcpy(question_750000.question, "Gdzie zyje najwieksza liczba wilkow?", N);
        memcpy(question_750000.Answer_A, "A.w Finlandii", N);
        memcpy(question_750000.Answer_B, "B.w Rosji", N);
        memcpy(question_750000.Answer_C, "C.w Rumunii", N);
        memcpy(question_750000.Answer_D, "D.w Kanadzie", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_750000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_750000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_750000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_750000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_750000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    else if (wylosowane_pytanie_750000 == 4) {
        char tmp1[53];
        char tmp2[36];
        memcpy(question_750000.question, "Jak nazywal sie statek, na ktorym w 1893 r. Fridtjoef Nansen probowal dotrzec do bieguna?", N);
        for (int i = 0; i < 53; i++) {
            tmp1[i] = question_750000.question[i];
        }
        int j = 53;
        for (int i = 0; i < 36; i++) {
            tmp2[i] = question_750000.question[j++];
        }
        memcpy(question_750000.Answer_A, "A.Fram", N);
        memcpy(question_750000.Answer_B, "B.Erebus", N);
        memcpy(question_750000.Answer_C, "C.Terror", N);
        memcpy(question_750000.Answer_D, "D.Beagle", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 155, 435, 0, tmp1);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 200, 475, 0, tmp2);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_750000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_750000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_750000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_750000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else if (wylosowane_pytanie_750000 == 5) {
        memcpy(question_750000.question, "Hormon przysadki mozgowej to:", N);
        memcpy(question_750000.Answer_A, "A.adrenalina", N);
        memcpy(question_750000.Answer_B, "B.prolaktyna", N);
        memcpy(question_750000.Answer_C, "C.tyroksyna", N);
        memcpy(question_750000.Answer_D, "D.melatonina", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_750000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_750000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_750000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_750000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_750000.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else if (wylosowane_pytanie_750000 == 6) {
        memcpy(question_750000.question, "Ile oskarow otrzymal Al Pacino?", N);
        memcpy(question_750000.Answer_A, "A.0", N);
        memcpy(question_750000.Answer_B, "B.1", N);
        memcpy(question_750000.Answer_C, "C.3", N);
        memcpy(question_750000.Answer_D, "D.2", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_750000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_750000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_750000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_750000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_750000.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else if (wylosowane_pytanie_750000 == 7) {
        memcpy(question_750000.question, "Najwieksza sowa wystepujaca w Polsce to:", N);
        memcpy(question_750000.Answer_A, "A.sowa uszata", N);
        memcpy(question_750000.Answer_B, "B.plomykowka zwyczajna", N);
        memcpy(question_750000.Answer_C, "C.puchacz", N);
        memcpy(question_750000.Answer_D, "D.puszczyk mszarny", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_750000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_750000.Answer_A);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 670, 565, 0, question_750000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_750000.Answer_C);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 670, 660, 0, question_750000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else if (wylosowane_pytanie_750000 == 8) {
        memcpy(question_750000.question, "Jak sie nazywa najwiekszy gad na swiecie?", N);
        memcpy(question_750000.Answer_A, "A.Krokodyl rozancowy", N);
        memcpy(question_750000.Answer_B, "B.Aligator", N);
        memcpy(question_750000.Answer_C, "C.Waran z komodo", N);
        memcpy(question_750000.Answer_D, "D.Kajman czarny", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_750000.question);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 160, 565, 0, question_750000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_750000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_750000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_750000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else if (wylosowane_pytanie_750000 == 9) {
        char tmp1[46];
        char tmp2[19];
        memcpy(question_750000.question, "Kto byl gospodarzem Mistrzostw Swiata w pilce noznej w 1984 roku?", N);
        for (int i = 0; i < 46; i++) {
            tmp1[i] = question_750000.question[i];
        }
        int j = 46;
        for (int i = 0; i < 19; i++) {
            tmp2[i] = question_750000.question[j++];
        }
        memcpy(question_750000.Answer_A, "A.Francja", N);
        memcpy(question_750000.Answer_B, "B.Argentyna", N);
        memcpy(question_750000.Answer_C, "C.RFN", N);
        memcpy(question_750000.Answer_D, "D.Meksyk", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 155, 435, 0, tmp1);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 165, 475, 0, tmp2);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_750000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_750000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_750000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_750000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else if (wylosowane_pytanie_750000 == 10) {
        memcpy(question_750000.question, "Ile obiektow UNESCO znajduje sie w Polsce?", N);
        memcpy(question_750000.Answer_A, "A.18", N);
        memcpy(question_750000.Answer_B, "B.14", N);
        memcpy(question_750000.Answer_C, "C.12", N);
        memcpy(question_750000.Answer_D, "D.16", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_750000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_750000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_750000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_750000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_750000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    free(question_750000.question);
    free(question_750000.Answer_A);
    free(question_750000.Answer_B);
    free(question_750000.Answer_C);
    free(question_750000.Answer_D);

    return odp;
}

int pytania_odpowiedzi_1000000(int odp, int wylosowane_pytanie_1000000, ALLEGRO_DISPLAY** display, ALLEGRO_EVENT* ev, ALLEGRO_FONT* font25, ALLEGRO_BITMAP* question_bitmap, ALLEGRO_FONT* font35, ALLEGRO_FONT* font30)
{
    question_1000000.question = (char*)calloc(N, sizeof(char));
    question_1000000.Answer_A = (char*)calloc(N, sizeof(char));
    question_1000000.Answer_B = (char*)calloc(N, sizeof(char));
    question_1000000.Answer_C = (char*)calloc(N, sizeof(char));
    question_1000000.Answer_D = (char*)calloc(N, sizeof(char));
    al_draw_bitmap(question_bitmap, 0, 0, 0);
    if (wylosowane_pytanie_1000000 == 1) {
        memcpy(question_1000000.question, "Z gry na jakim instrumencie slynie Czeslaw Mozil?", N);
        memcpy(question_1000000.Answer_A, "A.na kornecie", N);
        memcpy(question_1000000.Answer_B, "B.na akordeonie", N);
        memcpy(question_1000000.Answer_C, "C.na djembe", N);
        memcpy(question_1000000.Answer_D, "D.na ksylofonie", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 160, 445, 0, question_1000000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_1000000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_1000000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_1000000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_1000000.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else if (wylosowane_pytanie_1000000 == 2) {
        memcpy(question_1000000.question, "Ryba nie jest:", N);
        memcpy(question_1000000.Answer_A, "A.swinka", N);
        memcpy(question_1000000.Answer_B, "B.rozpior", N);
        memcpy(question_1000000.Answer_C, "C.krasnopiorka", N);
        memcpy(question_1000000.Answer_D, "D.kraska", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_1000000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_1000000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_1000000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_1000000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_1000000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    else if (wylosowane_pytanie_1000000 == 3) {
        char tmp1[45];
        char tmp2[28];
        memcpy(question_1000000.question, "Ktory aktor urodzil sie w roku opatentowania kinematografu braci Lumiere?", N);
        for (int i = 0; i < 45; i++) {
            tmp1[i] = question_1000000.question[i];
        }
        int j = 45;
        for (int i = 0; i < 28; i++) {
            tmp2[i] = question_1000000.question[j++];
        }
        memcpy(question_1000000.Answer_A, "A.Rudolph Valentino", N);
        memcpy(question_1000000.Answer_B, "B.Humphrey Bogart", N);
        memcpy(question_1000000.Answer_C, "C.Charlie Chaplin", N);
        memcpy(question_1000000.Answer_D, "D.Fred Astaire", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 162, 435, 0, tmp1);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 200, 475, 0, tmp2);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_1000000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_1000000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_1000000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_1000000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else if (wylosowane_pytanie_1000000 == 4) {
        memcpy(question_1000000.question, "Kto byl nadwornym malarzem krola Filipa IV Habsburga?", N);
        memcpy(question_1000000.Answer_A, "A.Marcello Bacciarelli", N);
        memcpy(question_1000000.Answer_B, "B.Jan van Eyck", N);
        memcpy(question_1000000.Answer_C, "C.Diego Velazquez", N);
        memcpy(question_1000000.Answer_D, "D.Jacques-Louis David", N);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 160, 445, 0, question_1000000.question);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 160, 565, 0, question_1000000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_1000000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_1000000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_1000000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else if (wylosowane_pytanie_1000000 == 5) {
        memcpy(question_1000000.question, "Likier maraskino produkuje sie z maraski, czyli odmiany:", N);
        memcpy(question_1000000.Answer_A, "A.wisni", N);
        memcpy(question_1000000.Answer_B, "B.jabloni", N);
        memcpy(question_1000000.Answer_C, "C.figi", N);
        memcpy(question_1000000.Answer_D, "D.gruszy", N);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 160, 445, 0, question_1000000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_1000000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_1000000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_1000000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_1000000.Answer_D);
        al_flip_display();
        odp = 1;
    }
    else if (wylosowane_pytanie_1000000 == 6) {
        memcpy(question_1000000.question, "Skad pochodzi Conan Barbarzynca?", N);
        memcpy(question_1000000.Answer_A, "A.z Rivii", N);
        memcpy(question_1000000.Answer_B, "B.z Oz", N);
        memcpy(question_1000000.Answer_C, "C.z Mordoru", N);
        memcpy(question_1000000.Answer_D, "D.z Cimerii", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_1000000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_1000000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_1000000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_1000000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_1000000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    else if (wylosowane_pytanie_1000000 == 7) {
        memcpy(question_1000000.question, "Ktory utwor Juliusza Slowackiego napisany jest proza?", N);
        memcpy(question_1000000.Answer_A, "A.Godzina mysli", N);
        memcpy(question_1000000.Answer_B, "B.w Szwajcarii", N);
        memcpy(question_1000000.Answer_C, "C.Anhelli", N);
        memcpy(question_1000000.Answer_D, "D.Arab", N);
        al_draw_text(font25, al_map_rgb(255, 255, 255), 160, 445, 0, question_1000000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_1000000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_1000000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_1000000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_1000000.Answer_D);
        al_flip_display();
        odp = 3;
    }
    else if (wylosowane_pytanie_1000000 == 8) {
        memcpy(question_1000000.question, "Komiksowym 'dzieckiem' rysownika Boba Kane`a jest:", N);
        memcpy(question_1000000.Answer_A, "A.Superman", N);
        memcpy(question_1000000.Answer_B, "B.Batman", N);
        memcpy(question_1000000.Answer_C, "C.Spider-Man", N);
        memcpy(question_1000000.Answer_D, "D.Kapitan Ameryka", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 435, 0, question_1000000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_1000000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_1000000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_1000000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_1000000.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else if (wylosowane_pytanie_1000000 == 9) {
        char tmp1[60];
        char tmp2[27];
        memcpy(question_1000000.question, "Kto jest mistrzem tego samego oreza, w jakim specjalizowala sie mitologiczna Artemida?", N);
        for (int i = 0; i < 60; i++) {
            tmp1[i] = question_1000000.question[i];
        }
        int j = 60;
        for (int i = 0; i < 27; i++) {
            tmp2[i] = question_1000000.question[j++];
        }
        memcpy(question_1000000.Answer_A, "A.Zorro", N);
        memcpy(question_1000000.Answer_B, "B.Legolas", N);
        memcpy(question_1000000.Answer_C, "C.Don Kichot", N);
        memcpy(question_1000000.Answer_D, "D.Geralt z Rivii", N);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 160, 425, 0, tmp1);
        al_draw_text(font30, al_map_rgb(255, 255, 255), 170, 465, 0, tmp2);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_1000000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_1000000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_1000000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_1000000.Answer_D);
        al_flip_display();
        odp = 2;
    }
    else if (wylosowane_pytanie_1000000 == 10) {
        memcpy(question_1000000.question, "Ktory instrument stroi muzyk?", N);
        memcpy(question_1000000.Answer_A, "A.Tamburyn", N);
        memcpy(question_1000000.Answer_B, "B.Czynele", N);
        memcpy(question_1000000.Answer_C, "C.Okaryne", N);
        memcpy(question_1000000.Answer_D, "D.Kociol", N);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 445, 0, question_1000000.question);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 565, 0, question_1000000.Answer_A);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 565, 0, question_1000000.Answer_B);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 160, 660, 0, question_1000000.Answer_C);
        al_draw_text(font35, al_map_rgb(255, 255, 255), 670, 660, 0, question_1000000.Answer_D);
        al_flip_display();
        odp = 4;
    }
    free(question_1000000.question);
    free(question_1000000.Answer_A);
    free(question_1000000.Answer_B);
    free(question_1000000.Answer_C);
    free(question_1000000.Answer_D);

    return odp;
}

int kolo_ratunkowe(int odp, int kolo, ALLEGRO_FONT* font_35_openSans)
{
    if (odp == 1) {
        al_draw_text(font_35_openSans, al_map_rgb(239, 201, 81), 200, 5, 0, "Mysle, ze dobra odpowiedzia jest odpowiedz A");
        al_flip_display();
        al_rest(3.0f);
        kolo--;
    }
    else if (odp == 2) {
        al_draw_text(font_35_openSans, al_map_rgb(239, 201, 81), 200, 5, 0, "Mysle, ze dobra odpowiedzia jest odpowiedz B");
        al_flip_display();
        al_rest(3.0f);
        kolo--;
    }
    else if (odp == 3) {
        al_draw_text(font_35_openSans, al_map_rgb(239, 201, 81), 200, 5, 0, "Mysle, ze dobra odpowiedzia jest odpowiedz C");
        al_flip_display();
        al_rest(3.0f);
        kolo--;
    }
    else if (odp == 4) {
        al_draw_text(font_35_openSans, al_map_rgb(239, 201, 81), 200, 5, 0, "Mysle, ze dobra odpowiedzia jest odpowiedz D");
        al_flip_display();
        al_rest(3.0f);
        kolo--;
    }
    return kolo;
}

void dobra_odpowiedz(int odp, ALLEGRO_BITMAP* dobra_odp)
{
    if (odp == 1) {
        al_draw_tinted_bitmap(dobra_odp, al_map_rgba_f(1, 1, 1, 0.4), 125, 551, 0);
        al_flip_display();
        al_rest(2.0f);
    }
    else if (odp == 2) {
        al_draw_tinted_bitmap(dobra_odp, al_map_rgba_f(1, 1, 1, 0.4), 645, 551, 0);
        al_flip_display();
        al_rest(2.0f);
    }
    else if (odp == 3) {
        al_draw_tinted_bitmap(dobra_odp, al_map_rgba_f(1, 1, 1, 0.4), 125, 648, 0);
        al_flip_display();
        al_rest(2.0f);
    }
    else if (odp == 4) {
        al_draw_tinted_bitmap(dobra_odp, al_map_rgba_f(1, 1, 1, 0.4), 645, 648, 0);
        al_flip_display();
        al_rest(2.0f);
    }
}

int kolo_pub(int odp, int kolo_publicznosc, ALLEGRO_FONT* font_35_openSans)
{
    if (odp == 1) {
        al_draw_filled_rectangle(30, 200, 100, 360, al_map_rgb(239, 201, 81));
        al_draw_rectangle(30, 200, 100, 360, al_map_rgb(255, 255, 255), 5);
        al_draw_filled_rectangle(100, 330, 170, 360, al_map_rgb(239, 201, 81));
        al_draw_rectangle(100, 330, 170, 360, al_map_rgb(255, 255, 255), 5);
        al_draw_filled_rectangle(170, 290, 240, 360, al_map_rgb(239, 201, 81));
        al_draw_rectangle(170, 290, 240, 360, al_map_rgb(255, 255, 255), 5);
        al_draw_filled_rectangle(240, 300, 310, 360, al_map_rgb(239, 201, 81));
        al_draw_rectangle(240, 300, 310, 360, al_map_rgb(255, 255, 255), 5);
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 55, 360, 0, "A");
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 125, 360, 0, "B");
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 195, 360, 0, "C");
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 265, 360, 0, "D");
        al_flip_display();
        al_rest(3.0f);
        kolo_publicznosc--;
    }
    else if (odp == 2) {
        al_draw_filled_rectangle(30, 330, 100, 360, al_map_rgb(239, 201, 81));
        al_draw_rectangle(30, 330, 100, 360, al_map_rgb(255, 255, 255), 5);
        al_draw_filled_rectangle(100, 190, 170, 360, al_map_rgb(239, 201, 81));
        al_draw_rectangle(100, 190, 170, 360, al_map_rgb(255, 255, 255), 5);
        al_draw_filled_rectangle(170, 280, 240, 360, al_map_rgb(239, 201, 81));
        al_draw_rectangle(170, 280, 240, 360, al_map_rgb(255, 255, 255), 5);
        al_draw_filled_rectangle(240, 310, 310, 360, al_map_rgb(239, 201, 81));
        al_draw_rectangle(240, 310, 310, 360, al_map_rgb(255, 255, 255), 5);
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 55, 360, 0, "A");
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 125, 360, 0, "B");
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 195, 360, 0, "C");
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 265, 360, 0, "D");
        al_flip_display();
        al_rest(3.0f);
        kolo_publicznosc--;
    }
    else if (odp == 3) {
        al_draw_filled_rectangle(30, 320, 100, 360, al_map_rgb(239, 201, 81));
        al_draw_rectangle(30, 320, 100, 360, al_map_rgb(255, 255, 255), 5);
        al_draw_filled_rectangle(100, 330, 170, 360, al_map_rgb(239, 201, 81));
        al_draw_rectangle(100, 330, 170, 360, al_map_rgb(255, 255, 255), 5);
        al_draw_filled_rectangle(170, 210, 240, 360, al_map_rgb(239, 201, 81));
        al_draw_rectangle(170, 210, 240, 360, al_map_rgb(255, 255, 255), 5);
        al_draw_filled_rectangle(240, 300, 310, 360, al_map_rgb(239, 201, 81));
        al_draw_rectangle(240, 300, 310, 360, al_map_rgb(255, 255, 255), 5);
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 55, 360, 0, "A");
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 125, 360, 0, "B");
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 195, 360, 0, "C");
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 265, 360, 0, "D");
        al_flip_display();
        al_rest(3.0f);
        kolo_publicznosc--;
    }
    else if (odp == 4) {
        al_draw_filled_rectangle(30, 310, 100, 360, al_map_rgb(239, 201, 81));
        al_draw_rectangle(30, 310, 100, 360, al_map_rgb(255, 255, 255), 5);
        al_draw_filled_rectangle(100, 330, 170, 360, al_map_rgb(239, 201, 81));
        al_draw_rectangle(100, 330, 170, 360, al_map_rgb(255, 255, 255), 5);
        al_draw_filled_rectangle(170, 290, 240, 360, al_map_rgb(239, 201, 81));
        al_draw_rectangle(170, 290, 240, 360, al_map_rgb(255, 255, 255), 5);
        al_draw_filled_rectangle(240, 190, 310, 360, al_map_rgb(239, 201, 81));
        al_draw_rectangle(240, 190, 310, 360, al_map_rgb(255, 255, 255), 5);
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 55, 360, 0, "A");
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 125, 360, 0, "B");
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 195, 360, 0, "C");
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 265, 360, 0, "D");
        al_flip_display();
        al_rest(3.0f);
        kolo_publicznosc--;
    }
    return kolo_publicznosc;
}

void ktore_pytanie(int ktore, ALLEGRO_FONT* font_35_openSans)
{
    if (ktore == 1)
        al_draw_text(font_35_openSans, al_map_rgb(255, 255, 255), 1060, 335, 0, "1. 100 zl");
    else
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 1060, 335, 0, "1. 100 zl");
    if (ktore == 2)
        al_draw_text(font_35_openSans, al_map_rgb(255, 255, 255), 1060, 300, 0, "2. 1000 zl");
    else
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 1060, 300, 0, "2. 1000 zl");
    if (ktore == 3)
        al_draw_text(font_35_openSans, al_map_rgb(255, 255, 255), 1060, 265, 0, "3. 5000 zl");
    else
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 1060, 265, 0, "3. 5000 zl");
    if (ktore == 4)
        al_draw_text(font_35_openSans, al_map_rgb(255, 255, 255), 1060, 230, 0, "4. 10000 zl");
    else
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 1060, 230, 0, "4. 10000 zl");
    if (ktore == 5)
        al_draw_text(font_35_openSans, al_map_rgb(255, 255, 255), 1060, 195, 0, "5. 50000 zl");
    else
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 1060, 195, 0, "5. 50000 zl");
    if (ktore == 6)
        al_draw_text(font_35_openSans, al_map_rgb(255, 255, 255), 1060, 160, 0, "6. 100000 zl");
    else
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 1060, 160, 0, "6. 100000 zl");
    if (ktore == 7)
        al_draw_text(font_35_openSans, al_map_rgb(255, 255, 255), 1060, 125, 0, "7. 250000 zl");
    else
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 1060, 125, 0, "7. 250000 zl");
    if (ktore == 8)
        al_draw_text(font_35_openSans, al_map_rgb(255, 255, 255), 1060, 90, 0, "8. 500000 zl");
    else
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 1060, 90, 0, "8. 500000 zl");
    if (ktore == 9)
        al_draw_text(font_35_openSans, al_map_rgb(255, 255, 255), 1060, 55, 0, "9. 750000 zl");
    else
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 1060, 55, 0, "9. 750000 zl");
    if (ktore == 10)
        al_draw_text(font_35_openSans, al_map_rgb(255, 255, 255), 1040, 20, 0, "10. 1000000 zl");
    else
        al_draw_text(font_35_openSans, al_map_rgb(236, 127, 54), 1040, 20, 0, "10. 1000000 zl");

    al_draw_text(font_35_openSans, al_map_rgb(255, 255, 255), 1, 10, 0, "[H]-");
    al_draw_text(font_35_openSans, al_map_rgb(255, 255, 255), 1, 85, 0, "[K]-");
}

