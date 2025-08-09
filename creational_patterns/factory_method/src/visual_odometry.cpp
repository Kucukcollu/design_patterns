#include "visual_odometry.hpp"

VisualOdometry::VisualOdometry()
{
    position_x_ = 6.5;
    position_y_ = 4.4;
    position_z_ = 0.0;
}

float VisualOdometry::getPoseX()
{
    return position_x_;
}

float VisualOdometry::getPoseY()
{
    return position_y_;
}

float VisualOdometry::getPoseZ()
{
    return position_z_;
}