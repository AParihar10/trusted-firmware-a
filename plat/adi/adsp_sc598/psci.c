/**
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright (c) 2022, Analog Devices, Inc.
 */

#include <arch.h>
#include <lib/psci/psci.h>

void __dead2 adsp_sc598_rcu_reset(void);

static const plat_psci_ops_t adsp_sc598_psci_ops = {
	.system_reset = adsp_sc598_rcu_reset,
};

/**
 * For now we support no power management operations
 */
int plat_setup_psci_ops(uintptr_t sec_entrypoint, const plat_psci_ops_t **psci_ops) {
	*psci_ops = &adsp_sc598_psci_ops;
	return 0;
}