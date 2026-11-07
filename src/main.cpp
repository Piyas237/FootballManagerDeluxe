#include "raylib.h"

const int SW = 1280;
const int SH = 720;

void DrawMenu()
{
    ClearBackground(DARKGREEN);

    DrawText("FOOTBALL MANAGER DELUXE", 320, 120, 50, WHITE);

    DrawText("NEW CAREER", 500, 250, 30, YELLOW);
    DrawText("LOAD CAREER", 500, 300, 30, LIGHTGRAY);
    DrawText("SETTINGS", 500, 350, 30, LIGHTGRAY);
    DrawText("HALL OF FAME", 500, 400, 30, LIGHTGRAY);
    DrawText("EXIT", 500, 450, 30, LIGHTGRAY);

    DrawText("Use Arrow Keys", 20, 680, 20, GRAY);
    DrawText("ENTER = Select", 1050, 680, 20, GRAY);
}

int main()
{
    InitWindow(SW, SH, "Football Manager Deluxe");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        DrawMenu();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}