#include "raylib.h"

int main()
{
    const int sw = 1280;
    const int sh = 720;

    InitWindow(sw, sh, "Football Manager Deluxe");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLACK);

        DrawText(
            "Football Manager Deluxe",
            320,
            150,
            40,
            GREEN);

        DrawText(
            "Lesson 1",
            540,
            230,
            25,
            WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}