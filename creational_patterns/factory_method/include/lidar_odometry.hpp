#pragma once

#include "odometry.hpp"

class LidarOdometry : public Odometry
{
    public:
        LidarOdometry();

        float getPoseX() override;

        float getPoseY() override;

        float getPoseZ() override;
};