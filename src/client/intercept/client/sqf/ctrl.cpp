#include "ctrl.hpp"
#include "client\pointers.hpp"
#include "common_helpers.hpp"

namespace intercept {
    namespace sqf {
        void ctrl_activate(control value_) {
            __helpers::__empty_unary_control(client::__sqf::unary__ctrlactivate__control__ret__nothing, value_);
        }

        float ctrl_auto_scroll_delay(control value_) {
            return __helpers::__number_unary_control(client::__sqf::unary__ctrlautoscrolldelay__control__ret__scalar, value_);
        }

        bool ctrl_auto_scroll_rewind(control value_) {
            return __helpers::__bool_unary_control(client::__sqf::unary__ctrlautoscrollrewind__control__ret__bool, value_);
        }

        float ctrl_auto_scroll_speed(control value_) {
            return __helpers::__number_unary_control(client::__sqf::unary__ctrlautoscrollspeed__control__ret__scalar, value_);
        }

        bool ctrl_checked(control value_) {
            return __helpers::__bool_unary_control(client::__sqf::unary__ctrlchecked__control__ret__bool, value_);
        }

        std::string ctrl_class_name(control value_) {
            return __helpers::__string_unary_control(client::__sqf::unary__ctrlclassname__control__ret__string, value_);
        }

        bool ctrl_committed(control value_) {
            return __helpers::__bool_unary_control(client::__sqf::unary__ctrlcommitted__control__ret__bool, value_);
        }

        bool ctrl_delete(control value_) {
            return __helpers::__bool_unary_control(client::__sqf::unary__ctrldelete__control__ret__bool, value_);
        }

        bool ctrl_enabled(control value_) {
            return __helpers::__bool_unary_control(client::__sqf::unary__ctrlenabled__control__ret__bool, value_);
        }

        bool ctrl_enabled(float value_) {
            return __helpers::__bool_unary_number(client::__sqf::unary__ctrlenabled__scalar__ret__bool, value_);
        }

        float ctrl_fade(control value_) {
            return __helpers::__number_unary_control(client::__sqf::unary__ctrlfade__control__ret__scalar, value_);
        }

        bool ctrl_htmlloaded(control value_) {
            return __helpers::__bool_unary_control(client::__sqf::unary__ctrlhtmlloaded__control__ret__bool, value_);
        }

        float ctrl_idc(control value_) {
            return __helpers::__number_unary_control(client::__sqf::unary__ctrlidc__control__ret__scalar, value_);
        }

        float ctrl_idd(display value_) {
            return 0.0f; // TODO implement
        }

        void ctrl_map_anim_clear(control value_) {
            __helpers::__empty_unary_control(client::__sqf::unary__ctrlmapanimclear__control__ret__nothing, value_);
        }

        void ctrl_map_anim_commit(control value_) {
            __helpers::__empty_unary_control(client::__sqf::unary__ctrlmapanimcommit__control__ret__nothing, value_);
        }

        bool ctrl_map_anim_done(control value_) {
            return __helpers::__bool_unary_control(client::__sqf::unary__ctrlmapanimdone__control__ret__bool, value_);
        }

        float ctrl_map_scale(control value_) {
            return __helpers::__number_unary_control(client::__sqf::unary__ctrlmapscale__control__ret__scalar, value_);
        }

        std::string ctrl_model(control value_) {
            return __helpers::__string_unary_control(client::__sqf::unary__ctrlmodel__control__ret__string, value_);
        }

        float ctrl_model_scale(control value_) {
            return __helpers::__number_unary_control(client::__sqf::unary__ctrlmodelscale__control__ret__scalar, value_);
        }

        display ctrl_parent(control value_) {
            return nullptr; // TODO implement
        }

        control ctrl_parent_controls_group(control value_) {
            return nullptr; // TODO implement
        }

        float ctrl_scale(control value_) {
            return __helpers::__number_unary_control(client::__sqf::unary__ctrlscale__control__ret__scalar, value_);
        }

        void ctrl_set_focus(control value_) {
            __helpers::__empty_unary_control(client::__sqf::unary__ctrlsetfocus__control__ret__nothing, value_);
        }

        bool ctrl_shown(control value_) {
            return __helpers::__bool_unary_control(client::__sqf::unary__ctrlshown__control__ret__bool, value_);
        }

        std::string ctrl_text(control value_) {
            return __helpers::__string_unary_control(client::__sqf::unary__ctrltext__control__ret__string, value_);
        }

        std::string ctrl_text(float value_) {
            return nullptr; // TODO implement
        }

        float ctrl_text_height(control value_) {
            return __helpers::__number_unary_control(client::__sqf::unary__ctrltextheight__control__ret__scalar, value_);
        }

        std::string ctrl_text_secondary(control value_) {
            return __helpers::__string_unary_control(client::__sqf::unary__ctrltextsecondary__control__ret__string, value_);
        }

        float ctrl_type(control value_) {
            return __helpers::__number_unary_control(client::__sqf::unary__ctrltype__control__ret__scalar, value_);
        }

        bool ctrl_visible(float value_) {
            return __helpers::__bool_unary_number(client::__sqf::unary__ctrlvisible__scalar__ret__bool, value_);
        }

        void ctrl_commit(float value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlcommit__control__scalar__ret__nothing, game_value_number(value0_), *value1_);
        }

        void ctrl_enable(bool value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlenable__control__bool__ret__nothing, game_value_bool(value0_), *value1_);
        }

        void ctrl_remove_all_event_handlers(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlremovealleventhandlers__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_set_auto_scroll_delay(float value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetautoscrolldelay__control__scalar__ret__nothing, game_value_number(value0_), *value1_);
        }

        void ctrl_set_auto_scroll_rewind(bool value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetautoscrollrewind__control__bool__ret__nothing, game_value_bool(value0_), *value1_);
        }

        void ctrl_set_auto_scroll_speed(float value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetautoscrollspeed__control__scalar__ret__nothing, game_value_number(value0_), *value1_);
        }

        void ctrl_set_checked(bool value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetchecked__control__bool__ret__nothing, game_value_bool(value0_), *value1_);
        }

        void ctrl_set_fade(float value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfade__control__scalar__ret__nothing, game_value_number(value0_), *value1_);
        }

        void ctrl_set_font(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfont__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_set_font_h1(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfonth1__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_set_font_h1b(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfonth1b__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_set_font_h2(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfonth2__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_set_font_h2b(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfonth2b__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_set_font_h3(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfonth3__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_set_font_h3b(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfonth3b__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_set_font_h4(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfonth4__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_set_font_h4b(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfonth4b__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_set_font_h5(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfonth5__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_set_font_h5b(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfonth5b__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_set_font_h6(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfonth6__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_set_font_h6b(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfonth6b__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_set_font_height(float value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfontheight__control__scalar__ret__nothing, game_value_number(value0_), *value1_);
        }

        void ctrl_set_font_height_h1(float value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfontheighth1__control__scalar__ret__nothing, game_value_number(value0_), *value1_);
        }

        void ctrl_set_font_height_h2(float value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfontheighth2__control__scalar__ret__nothing, game_value_number(value0_), *value1_);
        }

        void ctrl_set_font_height_h3(float value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfontheighth3__control__scalar__ret__nothing, game_value_number(value0_), *value1_);
        }

        void ctrl_set_font_height_h4(float value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfontheighth4__control__scalar__ret__nothing, game_value_number(value0_), *value1_);
        }

        void ctrl_set_font_height_h5(float value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfontheighth5__control__scalar__ret__nothing, game_value_number(value0_), *value1_);
        }

        void ctrl_set_font_height_h6(float value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfontheighth6__control__scalar__ret__nothing, game_value_number(value0_), *value1_);
        }

        void ctrl_set_font_height_secondary(float value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfontheightsecondary__control__scalar__ret__nothing, game_value_number(value0_), *value1_);
        }

        void ctrl_set_font_p(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfontp__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_set_font_p(float value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfontp__control__scalar__ret__nothing, game_value_number(value0_), *value1_);
        }

        void ctrl_set_font_pb(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfontpb__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_set_font_secondary(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetfontsecondary__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_set_model(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetmodel__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_set_model_scale(float value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetmodelscale__control__scalar__ret__nothing, game_value_number(value0_), *value1_);
        }

        void ctrl_set_scale(float value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetscale__control__scalar__ret__nothing, game_value_number(value0_), *value1_);
        }

        void ctrl_set_structured_text(control value0_, const std::string& value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsetstructuredtext__control__text__ret__nothing, *value0_, game_value_string(value1_));
        }

        void ctrl_set_text(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsettext__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_set_text_secondary(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsettextsecondary__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_set_tooltip(const std::string& value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlsettooltip__control__string__ret__nothing, game_value_string(value0_), *value1_);
        }

        void ctrl_show(bool value0_, control value1_) {
            host::functions.invoke_raw_binary(client::__sqf::binary__ctrlshow__control__bool__ret__nothing, game_value_bool(value0_), *value1_);
        }
    }
}
