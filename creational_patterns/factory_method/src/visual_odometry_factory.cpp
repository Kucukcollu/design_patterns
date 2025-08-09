#include "visual_odometry.hpp"
#include "visual_odometry_factory.hpp"

std::unique_ptr<Odometry> VisualOdometryFactory::createOdometry()
{
    return std::make_unique<VisualOdometry>();
}