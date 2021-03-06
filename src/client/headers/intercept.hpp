#pragma once
#include "shared.hpp"
#include "client\client.hpp"
#include "shared\functions.hpp"
#include "client\sqf\sqf.hpp"
#include "shared\client_types.hpp"

#define DLLEXPORT __declspec(dllexport)

namespace intercept {
    extern "C" {
        DLLEXPORT int  __cdecl api_version();
        DLLEXPORT void __cdecl pre_init();
        DLLEXPORT void __cdecl post_init();
        DLLEXPORT void __cdecl mission_end();
        DLLEXPORT void __cdecl mission_stopped();
        DLLEXPORT void __cdecl on_frame();
        DLLEXPORT void __cdecl on_signal(std::string &signal_name_, game_value& value1_);

#define EH(x) DLLEXPORT void __cdecl x

        EH(anim_changed)(object &unit_, rv_string &anim_name_);
        EH(anim_done)(object &unit_, rv_string &anim_name_);
        EH(anim_state_changed)(object &unit_, rv_string &anim_name_);
        EH(container_closed)(object &container_, object &player_);
        EH(controls_shifted)(object &vehicle_, object &new_controller_, object &old_controller_);
        EH(dammaged)(object &unit_, rv_string &selection_name_, float damage_);
        EH(engine)(object &vehicle_, bool engine_state_);
        EH(epe_contact)(object &object1_, object &object2_, rv_string &selection1_, rv_string &selection2_, float force_);
        EH(epe_contact_end)(object &object1_, object &object2_, rv_string &selection1_, rv_string &selection2_, float force_);
        EH(epe_contact_start)(object &object1_, object &object2_, rv_string &selection1_, rv_string &selection2_, float force_);
        EH(explosion)(object &vehicle_, float damage_);
        EH(fired)(object &unit_, rv_string &weapon_, rv_string &muzzle_, rv_string &mode_, rv_string &ammo_, rv_string &magazine, object &projectile_);
        EH(fired_near)(object &unit_, object &firer_, float distance_, rv_string &weapon_, rv_string &muzzle_, rv_string &mode_, rv_string &ammo_);
        EH(fuel)(object &vehicle_, bool fuel_state_);
        EH(gear)(object &vehicle_, bool gear_state_);
        EH(get_in)(object &vehicle_, rv_string position_, object &unit_, rv_list<int> &turret_path);
        EH(get_out)(object &vehicle_, rv_string position_, object &unit_, rv_list<int> &turret_path);
        EH(handle_damage)(object &unit_, rv_string &selection_name_, float damage_, object &source_, rv_string &projectile_, int hit_part_index_);
        EH(handle_heal)(object &unit_, object &healder_, bool healer_can_heal_);
        EH(handle_rating)(object &unit_, float rating_);
        EH(handle_score)(object &unit_, object &object_, float score_);
        EH(hit)(object &unit_, object &caused_by_, float damage_);
        EH(hit_part)(rv_list<hit_part_data> &data_);
        EH(init)(object &unit_);
        EH(incoming_missile)(object &unit_, rv_string &ammo_, object &firer_);
        EH(inventory_closed)(object &object_, object &container_);
        EH(inventory_opened)(object &object_, object &container_);
        EH(killed)(object &unit_, object &killer_);
        EH(landed_touch_down)(object &plane_, int airport_id_);
        EH(landed_stopped)(object &plane_, int airport_id_);
        EH(local)(object &object_, bool local_);
        EH(post_reset)();
        EH(put)(object &unit_, object &container_, rv_string item_);
        EH(respawn)(object &unit_, object &corpse_);
        EH(rope_attach)(object &object1, object &rope_, object &object2_);
        EH(rope_break)(object &object1, object &rope_, object &object2_);
        EH(seat_switched)(object &vehicle_, object &unit1_, object &unit2_);
        EH(sound_played)(object &unit_, int sound_code_);
        EH(take)(object &unit_, object &container_, rv_string &item_);
        EH(task_set_as_current)(object &unit_, task &task_);
        EH(weapon_assembled)(object &unit_, object &weapon_);
        EH(weapon_disassembled)(object &unit_, object &primary_bag_, object &secondary_bag_);
        EH(weapon_deployed)(object &unit_, bool is_deployed_);
        EH(weapon_rested)(object &unit_, bool is_rested_);
    }
}