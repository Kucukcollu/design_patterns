#pragma once

#include "odometry.hpp"

#include <memory>

class OdometryFactory
{
    public:
        virtual ~OdometryFactory() = default;

        virtual std::unique_ptr<Odometry> createOdometry() = 0;
};