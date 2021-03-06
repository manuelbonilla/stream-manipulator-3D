// Software License Agreement (BSD License)
//
//   Stream Manipulator 3d - https://github.com/3DVision-Stack/stream-manipulator-3D
//   Copyright (c) 2016, Federico Spinelli (fspinelli@gmail.com)
//   All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice, this
//   list of conditions and the following disclaimer.
//
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
//
// * Neither the name of the copyright holder(s) nor the names of its
//   contributors may be used to endorse or promote products derived from
//   this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#ifndef _RQT_FILTERS_RADIUS_OUTLIER_HPP_
#define _RQT_FILTERS_RADIUS_OUTLIER_HPP_

#include <stream_manipulator_3d/filters/config/radius_outlier_config.hpp>
#include <rqt_stream_manipulator_3d/plugin.h>
#include <ui_radius_outlier.h>

namespace rqt_sm3d
{
namespace filters
{
///RadiusOutlier Filter GUI
class RadiusOutlier : public rqt_sm3d::Plugin
{
    Q_OBJECT

    public:
        virtual ~RadiusOutlier(){}
        RadiusOutlier() : Plugin() {}
        virtual void init(const std::string &name);
    protected slots:
        virtual void onEnableDisable(bool checked);
        virtual void onRadiusChanged(double val);
        virtual void onKThreshChanged(int val);
        virtual void onNegative(bool checked);
        virtual void onKeepOrganized(bool checked);
    protected:
    ///////Members
    //  Configuration in shared memory
        typedef sm3d::filters::RadiusOutlierConfig Config;
        Config *config;
        //ui object from file
        Ui::RadiusOutlierWidget ui_;
};
}//ns
}//ns filters
#endif
