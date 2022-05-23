//
// Created by 70386312419 on 12/05/2022.
//

#include "OrthographicCamera.h"

ray OrthographicCamera::generateRay(double u, double v) const {
    return ray(origin, lower_left_corner + u*horizontal + v*vertical - origin);

}

OrthographicCamera::OrthographicCamera(double aspect_ratio, double viewport_height, double viewport_width,
                                       double focal_length) : camera(aspect_ratio, viewport_height, viewport_width,
                                                                     focal_length) {

}
