#pragma once

#include "odometry.hpp"

class VisualOdometry : public Odometry
{
    public:
        VisualOdometry();

        float getPoseX() override;

        float getPoseY() override;

        float getPoseZ() override;
};