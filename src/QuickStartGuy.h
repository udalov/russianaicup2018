#pragma once

#include "Scenario.h"

class QuickStartGuy : public Scenario {
    public:
        Move getMove(const State& state, const RobotState& me, int tick, int delta) override;

        ~QuickStartGuy() {}
};
