#pragma once

//
// Copyright (c) 2019-2022 Ivan Baidakou (basiliscos) (the dot dmol at gmail dot com)
//
// Distributed under the MIT Software License
//

#include "rotor/arc.hpp"
#include "rotor/ev/supervisor_config_ev.h"
#include "rotor/system_context.h"
#include <libev/ev.h>

namespace rotor {
namespace ev {

struct supervisor_ev_t;

/** \brief intrusive pointer for ev supervisor */
using supervisor_ptr_t = intrusive_ptr_t<supervisor_ev_t>;

/** \brief alias for system main system context */
using system_context_ev_t = rotor::system_context_t;

/** \brief intrusive pointer type for ev system context */
using system_context_ptr_t = typename rotor::intrusive_ptr_t<system_context_ev_t>;

} // namespace ev
} // namespace rotor
