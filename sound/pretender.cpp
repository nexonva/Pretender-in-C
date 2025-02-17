#include <stdio.h>
#include <windows.h>

void playNote(int frequency, int duration) {
    Beep(frequency, duration);
}

int main() {
    // Notes frequencies (in Hz)
    int G = 392;     // Sol
    int Ab = 415;    // La flat
    int Eb = 311;    // Mi flat
    int F = 349;     // Fa
    int Bb = 466;    // Si flat
    int C = 523;     // Do
    int D = 587;     // Re
    int E = 659;     // Mi
    int A = 440;
    // "Goodbye kimi no..." rhythm adjustment
    playNote(G, 400);
    playNote(Ab, 400);
    playNote(Eb, 400);
    playNote(F, 400);
    playNote(Ab, 400);
    playNote(Eb, 300);
    playNote(F, 400);
    playNote(Ab, 400);
    playNote(Bb, 300);
    playNote(Ab, 300);
    playNote(Bb, 400);
    playNote(Ab, 400);
    playNote(Bb, 400);
    playNote(C, 500);
    playNote(Bb, 500);
    playNote(Eb, 500);
    playNote(Bb, 500);
    playNote(Ab, 500);
    playNote(Bb, 500);
    playNote(Ab, 500);
    playNote(Bb, 500);
    playNote(C, 500);
    playNote(Bb, 500);
    return 0;
}
