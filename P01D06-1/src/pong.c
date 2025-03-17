#include <stdio.h>
#include <stdlib.h>

int Draw_Field(int MAP_WIDTH, int MAP_HEIGHT, int RACKETS_INDENT_X, int ball_pos_x, int ball_pos_y,
               int left_racket_pos_y, int right_racket_pos_y, int left_player_score, int right_player_score);
int Draw_Border(int MAP_WIDTH, char BORDER);
int Is_Touching_Racket_Y(int racket_pos_y, int ball_pos_y);
int Game_Over(int left_player_score, int right_player_score, int WIN_SCORE);

int main() {
    const int MAP_WIDTH = 80;
    const int MAP_HEIGHT = 25;
    const int WIN_SCORE = 21;

    const int RACKETS_INDENT = 3;  // Number of tiles from borders of the map, where rackets are located
    int left_racket_pos_y = 11, right_racket_pos_y = 11;

    int ball_pos_x = 40, ball_pos_y = 11;
    int ball_vector_x = 1, ball_vector_y = 1;
    int left_player_score = 0, right_player_score = 0;

    int gameloop = 1;

    // Main gameloop
    while (gameloop == 1) {
        Draw_Field(MAP_WIDTH, MAP_HEIGHT, RACKETS_INDENT, ball_pos_x, ball_pos_y, left_racket_pos_y,
                   right_racket_pos_y, left_player_score, right_player_score);

        // Input handling
        char key = getchar();
        if ((key == 'a' || key == 'A') && left_racket_pos_y > 1) {
            left_racket_pos_y--;
        }
        if ((key == 'z' || key == 'Z') && left_racket_pos_y < MAP_HEIGHT - 2) {
            left_racket_pos_y++;
        }
        if ((key == 'k' || key == 'K') && right_racket_pos_y > 1) {
            right_racket_pos_y--;
        }
        if ((key == 'm' || key == 'M') && right_racket_pos_y < MAP_HEIGHT - 2) {
            right_racket_pos_y++;
        }

        // Ball movement
        // Check collisions with X-plane borders
        if (ball_pos_y + ball_vector_y < 0 || ball_pos_y + ball_vector_y >= MAP_HEIGHT) {
            ball_vector_y = -ball_vector_y;
        }
        // Check collision with left racket
        if (ball_pos_x == RACKETS_INDENT + 1 &&
            Is_Touching_Racket_Y(left_racket_pos_y, ball_pos_y + ball_vector_y) == 1) {
            ball_vector_x = -ball_vector_x;
        }
        // Check collision with right racket
        if (ball_pos_x == MAP_WIDTH - RACKETS_INDENT - 2 &&
            Is_Touching_Racket_Y(right_racket_pos_y, ball_pos_y + ball_vector_y) == 1) {
            ball_vector_x = -ball_vector_x;
        }

        // Check for point claim
        if (ball_pos_x <= 0) {
            right_player_score++;
            left_racket_pos_y = 11;
            right_racket_pos_y = 11;
            ball_pos_x = 40;
            ball_pos_y = 11;
        } else if (ball_pos_x >= MAP_WIDTH) {
            left_player_score++;
            left_racket_pos_y = 11;
            right_racket_pos_y = 11;
            ball_pos_x = 40;
            ball_pos_y = 11;
        } else {
            ball_pos_x += ball_vector_x;
            ball_pos_y += ball_vector_y;
        }

        // Check winning condition
        if (left_player_score >= WIN_SCORE || right_player_score >= WIN_SCORE) {
            Game_Over(left_player_score, right_player_score, WIN_SCORE);
            gameloop = 0;
        }
    }

    return 0;
}

int Draw_Field(int MAP_WIDTH, int MAP_HEIGHT, int RACKETS_INDENT, int ball_pos_x, int ball_pos_y,
               int left_racket_pos_y, int right_racket_pos_y, int left_player_score, int right_player_score) {
    // Draws whole playfield with score
    const char BALL = 'o';
    const char RACKET = '#';
    const char BORDER = '*';

    system("clear");
    printf("\n\n\n          LEFT: %d                                               RIGHT: %d\n",
           left_player_score, right_player_score);

    Draw_Border(MAP_WIDTH, BORDER);

    for (int y = 0; y < MAP_HEIGHT; y++) {
        for (int x = 0; x < MAP_WIDTH; x++) {
            if (x == 0) {
                printf("%c", BORDER);
            }
            if (y == ball_pos_y && x == ball_pos_x) {
                printf("%c", BALL);

            } else if (Is_Touching_Racket_Y(left_racket_pos_y, y) == 1 && x == RACKETS_INDENT) {
                printf("%c", RACKET);

            } else if (Is_Touching_Racket_Y(right_racket_pos_y, y) && x == MAP_WIDTH - RACKETS_INDENT - 1) {
                printf("%c", RACKET);

            } else {
                printf(" ");
            }
            if (x == MAP_WIDTH - 1) {
                printf("%c", BORDER);
            }
        }
        printf("\n");
    }
    Draw_Border(MAP_WIDTH, BORDER);

    printf("                                      Pong!\n");

    return 0;
}

int Draw_Border(int MAP_WIDTH, char BORDER) {
    // Draws top and bottom borders of the map
    for (int i = 0; i < MAP_WIDTH + 2; i++) {
        printf("%c", BORDER);
    }
    printf("\n");

    return 0;
}

int Is_Touching_Racket_Y(int racket_pos_y, int point_y) {
    // Checks if given point on vertical axis touches any part of racket
    int result = 0;
    if (racket_pos_y - 1 <= point_y && point_y <= racket_pos_y + 1) {
        result = 1;
    }
    return result;
}

int Game_Over(int left_player_score, int right_player_score, int WIN_SCORE) {
    // Displays "game over" screen
    system("clear");
    printf("\n\n\n\n\n\n\n\n\n\n");
    if (left_player_score >= WIN_SCORE) {
        printf("\t\t\t   Game over! LEFT PLAYER wins!\n");

    } else if (right_player_score >= WIN_SCORE) {
        printf("\t\t\t   Game over! RIGHT PLAYER wins!\n");
    }

    printf("\n\n\t\t\t\t      Score:\n");
    printf("\n\t\t     LEFT PLAYER: %d         RIGHT PLAYER: %d\n", left_player_score, right_player_score);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    return 0;
}