#include "eventhandlers.hpp"
#include "invoker.hpp"
#include "extensions.hpp"
#include "shared\client_types.hpp"

namespace intercept {
    eventhandlers::eventhandlers() : _initialized(false)
    {
    }
    eventhandlers::~eventhandlers()
    {
    }
    void eventhandlers::initialize()
    {
        if (!_initialized) {
            invoker::get().add_eventhandler("pre_init", std::bind(&eventhandlers::pre_init, this, std::placeholders::_1, std::placeholders::_2));
            invoker::get().add_eventhandler("post_init", std::bind(&eventhandlers::post_init, this, std::placeholders::_1, std::placeholders::_2));
            invoker::get().add_eventhandler("mission_stopped", std::bind(&eventhandlers::mission_stopped, this, std::placeholders::_1, std::placeholders::_2));

#define EH_EVENT_DEF(x) invoker::get().add_eventhandler(#x, std::bind(&eventhandlers::##x, this, std::placeholders::_1, std::placeholders::_2));

            EH_EVENT_DEF(anim_changed);
            EH_EVENT_DEF(anim_done);
            EH_EVENT_DEF(anim_state_changed);
            EH_EVENT_DEF(container_closed);
            EH_EVENT_DEF(controls_shifted);
            EH_EVENT_DEF(dammaged);
            EH_EVENT_DEF(engine);
            EH_EVENT_DEF(epe_contact);
            EH_EVENT_DEF(epe_contact_end);
            EH_EVENT_DEF(epe_contact_start);
            EH_EVENT_DEF(explosion);
            EH_EVENT_DEF(fired);
            EH_EVENT_DEF(fired_near);
            EH_EVENT_DEF(fuel);
            EH_EVENT_DEF(gear);
            EH_EVENT_DEF(get_in);
            EH_EVENT_DEF(get_out);
            EH_EVENT_DEF(handle_damage);
            EH_EVENT_DEF(handle_heal);
            EH_EVENT_DEF(handle_rating);
            EH_EVENT_DEF(handle_score);
            EH_EVENT_DEF(hit);
            //EH_EVENT_DEF(hit_part);
            EH_EVENT_DEF(init);
            EH_EVENT_DEF(incoming_missile);
            EH_EVENT_DEF(inventory_closed);
            EH_EVENT_DEF(inventory_opened);
            EH_EVENT_DEF(killed);
            EH_EVENT_DEF(landed_touch_down);
            EH_EVENT_DEF(landed_stopped);
            EH_EVENT_DEF(local);
            EH_EVENT_DEF(post_reset);
            EH_EVENT_DEF(put);
            EH_EVENT_DEF(respawn);
            EH_EVENT_DEF(rope_attach);
            EH_EVENT_DEF(rope_break);
            EH_EVENT_DEF(seat_switched);
            EH_EVENT_DEF(sound_played);
            EH_EVENT_DEF(take);
            EH_EVENT_DEF(task_set_as_current);
            EH_EVENT_DEF(weapon_assembled);
            EH_EVENT_DEF(weapon_disassembled);
            EH_EVENT_DEF(weapon_deployed);
            EH_EVENT_DEF(weapon_rested);
            _initialized = true;
        }
    }
    void eventhandlers::pre_init(const std::string & name_, game_value & args_)
    {
        extensions::get().reload_all();
        LOG(INFO) << "Pre-init";
        for (auto module : extensions::get().modules()) {
            if (module.second.functions.pre_init) {
                module.second.functions.pre_init();
            }
        }
    }
    void eventhandlers::post_init(const std::string & name_, game_value & args_)
    {
        LOG(INFO) << "Post-init";
        for (auto module : extensions::get().modules()) {
            if (module.second.functions.post_init) {
                module.second.functions.post_init();
            }
        }
    }
    void eventhandlers::mission_stopped(const std::string & name_, game_value & args_)
    {
        LOG(INFO) << "Mission Stopped";
        for (auto module : extensions::get().modules()) {
            if (module.second.functions.mission_stopped) {
                module.second.functions.mission_stopped();
            }
        }
    }
#define EH_START(x) void eventhandlers::##x##(const std::string & name_, game_value & args_) {\
        for (auto module : extensions::get().modules()) {\
            if (module.second.eventhandlers.x) {\
                module.second.eventhandlers.x

#define EH_END ;\
            }\
        }\
    }

    
    EH_START(anim_changed)(static_cast<object>(args_[0]), static_cast<rv_string &>(args_[1]))EH_END;
    EH_START(anim_done)(static_cast<object>(args_[0]), static_cast<rv_string &>(args_[1]))EH_END;
    EH_START(anim_state_changed)(static_cast<object>(args_[0]), static_cast<rv_string &>(args_[1]))EH_END;
    EH_START(container_closed)(static_cast<object>(args_[0]), static_cast<object>(args_[1]))EH_END;
    EH_START(controls_shifted)(static_cast<object>(args_[0]), static_cast<object>(args_[1]), static_cast<object>(args_[2]))EH_END;
    EH_START(dammaged)(static_cast<object>(args_[0]), static_cast<rv_string &>(args_[1]), static_cast<float>(args_[2]))EH_END;
    EH_START(engine)(static_cast<object>(args_[0]), static_cast<bool>(args_[1]))EH_END;
    EH_START(epe_contact)(static_cast<object>(args_[0]), static_cast<object>(args_[1]), static_cast<rv_string &>(args_[2]), static_cast<rv_string &>(args_[3]), static_cast<float>(args_[4]))EH_END;
    EH_START(epe_contact_end)(static_cast<object>(args_[0]), static_cast<object>(args_[1]), static_cast<rv_string &>(args_[2]), static_cast<rv_string &>(args_[3]), static_cast<float>(args_[4]))EH_END;
    EH_START(epe_contact_start)(static_cast<object>(args_[0]), static_cast<object>(args_[1]), static_cast<rv_string &>(args_[2]), static_cast<rv_string &>(args_[3]), static_cast<float>(args_[4]))EH_END;
    EH_START(explosion)(static_cast<object>(args_[0]), static_cast<float>(args_[1]))EH_END;
    
    EH_START(fired)(static_cast<object>(args_[0]), static_cast<rv_string &>(args_[1]), static_cast<rv_string &>(args_[2]), static_cast<rv_string &>(args_[3]), static_cast<rv_string &>(args_[4]), static_cast<rv_string &>(args_[5]), static_cast<object>(args_[6]))EH_END;
    
    EH_START(fired_near)(static_cast<object>(args_[0]), static_cast<object>(args_[1]), static_cast<float>(args_[2]), static_cast<rv_string &>(args_[3]), static_cast<rv_string &>(args_[4]), static_cast<rv_string &>(args_[5]), static_cast<rv_string &>(args_[6]))EH_END;
    EH_START(fuel)(static_cast<object>(args_[0]), static_cast<bool>(args_[1]))EH_END;
    EH_START(gear)(static_cast<object>(args_[0]), static_cast<bool>(args_[1]))EH_END;
    //EH_START(get_in)(static_cast<object>(args_[0]), static_cast<rv_string &>(args_[1]), static_cast<object>(args_[2]), std::vector<int> turret_path)EH_END;

    void eventhandlers::get_in(const std::string & name_, game_value & args_)
    {
        rv_list<int> turret_path(args_[3].length());
        for (uint32_t turret = 0; turret < args_[3].length(); ++turret)
            turret_path[turret] = ((int)args_[3][turret]);

        for (auto module : extensions::get().modules()) {
            if (module.second.eventhandlers.get_in) {
                module.second.eventhandlers.get_in(static_cast<object>(args_[0]), static_cast<rv_string &>(args_[1]), static_cast<object>(args_[2]), turret_path);
            }
        }
    }

    //EH_START(get_out)(static_cast<object>(args_[0]), static_cast<rv_string>(args_[REPLACE_ME]), static_cast<object>(args_[REPLACE_ME]), std::vector<int> turret_path)EH_END;

    void eventhandlers::get_out(const std::string & name_, game_value & args_)
    {
        rv_list<int> turret_path(args_[3].length());
        for (uint32_t turret = 0; turret < args_[3].length(); ++turret)
            turret_path[turret] = ((int)args_[3][turret]);

        for (auto module : extensions::get().modules()) {
            if (module.second.eventhandlers.get_out) {
                module.second.eventhandlers.get_out(static_cast<object>(args_[0]), static_cast<rv_string &>(args_[1]), static_cast<object>(args_[2]), turret_path);
            }
        }
    }

    EH_START(handle_damage)(static_cast<object>(args_[0]), static_cast<rv_string &>(args_[1]), static_cast<float>(args_[2]), static_cast<object>(args_[3]), static_cast<rv_string &>(args_[4]), static_cast<int>(args_[5]))EH_END;
    EH_START(handle_heal)(static_cast<object>(args_[0]), static_cast<object>(args_[1]), static_cast<bool>(args_[2]))EH_END;
    EH_START(handle_rating)(static_cast<object>(args_[0]), static_cast<float>(args_[1]))EH_END;
    EH_START(handle_score)(static_cast<object>(args_[0]), static_cast<object>(args_[1]), static_cast<float>(args_[2]))EH_END;
    EH_START(hit)(static_cast<object>(args_[0]), static_cast<object>(args_[1]), static_cast<float>(args_[2]))EH_END;
    //EH_START(hit_part)(std::vector<hit_part_data> data_)EH_END;
    EH_START(init)(static_cast<object>(args_[0]))EH_END;
    EH_START(incoming_missile)(static_cast<object>(args_[0]), static_cast<rv_string &>(args_[1]), static_cast<object>(args_[2]))EH_END;
    EH_START(inventory_closed)(static_cast<object>(args_[0]), static_cast<object>(args_[1]))EH_END;
    EH_START(inventory_opened)(static_cast<object>(args_[0]), static_cast<object>(args_[1]))EH_END;
    EH_START(killed)(static_cast<object>(args_[0]), static_cast<object>(args_[1]))EH_END;
    EH_START(landed_touch_down)(static_cast<object>(args_[0]), static_cast<int>(args_[1]))EH_END;
    EH_START(landed_stopped)(static_cast<object>(args_[0]), static_cast<int>(args_[1]))EH_END;
    EH_START(local)(static_cast<object>(args_[0]), static_cast<bool>(args_[1]))EH_END;
    EH_START(post_reset)()EH_END;
    EH_START(put)(static_cast<object>(args_[0]), static_cast<object>(args_[1]), static_cast<rv_string &>(args_[2]))EH_END;
    EH_START(respawn)(static_cast<object>(args_[0]), static_cast<object>(args_[1]))EH_END;
    EH_START(rope_attach)(static_cast<object>(args_[0]), static_cast<object>(args_[1]), static_cast<object>(args_[2]))EH_END;
    EH_START(rope_break)(static_cast<object>(args_[0]), static_cast<object>(args_[1]), static_cast<object>(args_[2]))EH_END;
    EH_START(seat_switched)(static_cast<object>(args_[0]), static_cast<object>(args_[1]), static_cast<object>(args_[2]))EH_END;
    EH_START(sound_played)(static_cast<object>(args_[0]), static_cast<int>(args_[1]))EH_END;
    EH_START(take)(static_cast<object>(args_[0]), static_cast<object>(args_[1]), static_cast<rv_string &>(args_[2]))EH_END;
    EH_START(task_set_as_current)(static_cast<object>(args_[0]), static_cast<task>(args_[1]))EH_END;
    EH_START(weapon_assembled)(static_cast<object>(args_[0]), static_cast<object>(args_[1]))EH_END;
    EH_START(weapon_disassembled)(static_cast<object>(args_[0]), static_cast<object>(args_[1]), static_cast<object>(args_[2]))EH_END;
    EH_START(weapon_deployed)(static_cast<object>(args_[0]), static_cast<bool>(args_[1]))EH_END;
    EH_START(weapon_rested)(static_cast<object>(args_[0]), static_cast<bool>(args_[1]))EH_END;
    
}