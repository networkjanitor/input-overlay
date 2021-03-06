/**
 * This file is part of input-overlay
 * which is licensed under the MPL 2.0 license
 * See LICENSE or mozilla.org/en-US/MPL/2.0/
 * github.com/univrsal/input-overlay
 */

#pragma once
#include "element_texture.hpp"

/* Contains data for both trigger buttons
 */
class element_data_text : public element_data
{
public:
    /*
        Separate constructors are used on linux
        because the values can't be queried together
    */
    element_data_text();

    bool is_persistent() override;

    void merge(element_data* other) override;

private:
};

class element_text : public element
{
public:
    element_text();

    void load(ccl_config* cfg, const std::string& id) override;

    void draw(gs_effect_t* effect, gs_image_file_t* image,
        element_data* data, sources::shared_settings* settings) override;

    data_source get_source() override;

private:
};
