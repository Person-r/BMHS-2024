#pragma once

struct Timer {
    double startTime;   // Start time (seconds)
    double lifeTime;    // Lifetime (seconds)
};

void StartTimer(Timer* timer, double lifetime);
bool TimerDone(Timer timer);
double GetElapsed(Timer timer);