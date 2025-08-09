#include "odometry_factory.hpp"

class VisualOdometryFactory : public OdometryFactory
{
    public:
        std::unique_ptr<Odometry> createOdometry() override;
};