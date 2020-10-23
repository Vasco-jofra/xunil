/* SPDX-License-Identifier: GPL-2.0
 *
 * Copyright 2016-2020 HabanaLabs, Ltd.
 * All Rights Reserved.
 *
 */

#ifndef GAUDI_MASKS_H_
#define GAUDI_MASKS_H_

#include "asic_reg/gaudi_regs.h"

/* Useful masks for bits in various registers */
#define PCI_DMA_QMAN_ENABLE		(\
	(FIELD_PREP(DMA0_QM_GLBL_CFG0_PQF_EN_MASK, 0xF)) | \
	(FIELD_PREP(DMA0_QM_GLBL_CFG0_CQF_EN_MASK, 0xF)) | \
	(FIELD_PREP(DMA0_QM_GLBL_CFG0_CP_EN_MASK, 0xF)))

#define QMAN_EXTERNAL_MAKE_TRUSTED	(\
	(FIELD_PREP(DMA0_QM_GLBL_PROT_PQF_MASK, 0xF)) | \
	(FIELD_PREP(DMA0_QM_GLBL_PROT_CQF_MASK, 0xF)) | \
	(FIELD_PREP(DMA0_QM_GLBL_PROT_CP_MASK, 0xF)) | \
	(FIELD_PREP(DMA0_QM_GLBL_PROT_ERR_MASK, 0x1)))

#define QMAN_INTERNAL_MAKE_TRUSTED	(\
	(FIELD_PREP(DMA0_QM_GLBL_PROT_PQF_MASK, 0xF)) | \
	(FIELD_PREP(DMA0_QM_GLBL_PROT_ERR_MASK, 0x1)))

#define HBM_DMA_QMAN_ENABLE		(\
	(FIELD_PREP(DMA0_QM_GLBL_CFG0_PQF_EN_MASK, 0xF)) | \
	(FIELD_PREP(DMA0_QM_GLBL_CFG0_CQF_EN_MASK, 0x1F)) | \
	(FIELD_PREP(DMA0_QM_GLBL_CFG0_CP_EN_MASK, 0x1F)))

#define QMAN_MME_ENABLE		(\
	(FIELD_PREP(MME0_QM_GLBL_CFG0_PQF_EN_MASK, 0xF)) | \
	(FIELD_PREP(MME0_QM_GLBL_CFG0_CQF_EN_MASK, 0x1F)) | \
	(FIELD_PREP(MME0_QM_GLBL_CFG0_CP_EN_MASK, 0x1F)))

#define QMAN_TPC_ENABLE		(\
	(FIELD_PREP(TPC0_QM_GLBL_CFG0_PQF_EN_MASK, 0xF)) | \
	(FIELD_PREP(TPC0_QM_GLBL_CFG0_CQF_EN_MASK, 0x1F)) | \
	(FIELD_PREP(TPC0_QM_GLBL_CFG0_CP_EN_MASK, 0x1F)))

#define QMAN_UPPER_CP_CGM_PWR_GATE_EN	(\
	(FIELD_PREP(DMA0_QM_CGM_CFG_IDLE_TH_MASK, 0x20)) | \
	(FIELD_PREP(DMA0_QM_CGM_CFG_G2F_TH_MASK, 0xA)) | \
	(FIELD_PREP(DMA0_QM_CGM_CFG_CP_IDLE_MASK_MASK, 0x10)) | \
	(FIELD_PREP(DMA0_QM_CGM_CFG_EN_MASK, 0x1)))

#define QMAN_COMMON_CP_CGM_PWR_GATE_EN	(\
	(FIELD_PREP(DMA0_QM_CGM_CFG_IDLE_TH_MASK, 0x20)) | \
	(FIELD_PREP(DMA0_QM_CGM_CFG_G2F_TH_MASK, 0xA)) | \
	(FIELD_PREP(DMA0_QM_CGM_CFG_CP_IDLE_MASK_MASK, 0xF)) | \
	(FIELD_PREP(DMA0_QM_CGM_CFG_EN_MASK, 0x1)))

#define PCI_DMA_QMAN_GLBL_ERR_CFG_MSG_EN_MASK	(\
	(FIELD_PREP(DMA0_QM_GLBL_ERR_CFG_PQF_ERR_MSG_EN_MASK, 0xF)) | \
	(FIELD_PREP(DMA0_QM_GLBL_ERR_CFG_CQF_ERR_MSG_EN_MASK, 0xF)) | \
	(FIELD_PREP(DMA0_QM_GLBL_ERR_CFG_CP_ERR_MSG_EN_MASK, 0xF)))

#define PCI_DMA_QMAN_GLBL_ERR_CFG_STOP_ON_ERR_EN_MASK	(\
	(FIELD_PREP(DMA0_QM_GLBL_ERR_CFG_PQF_STOP_ON_ERR_MASK, 0xF)) | \
	(FIELD_PREP(DMA0_QM_GLBL_ERR_CFG_CQF_STOP_ON_ERR_MASK, 0xF)) | \
	(FIELD_PREP(DMA0_QM_GLBL_ERR_CFG_CP_STOP_ON_ERR_MASK, 0xF)))

#define HBM_DMA_QMAN_GLBL_ERR_CFG_MSG_EN_MASK	(\
	(FIELD_PREP(DMA0_QM_GLBL_ERR_CFG_PQF_ERR_MSG_EN_MASK, 0xF)) | \
	(FIELD_PREP(DMA0_QM_GLBL_ERR_CFG_CQF_ERR_MSG_EN_MASK, 0x1F)) | \
	(FIELD_PREP(DMA0_QM_GLBL_ERR_CFG_CP_ERR_MSG_EN_MASK, 0x1F)))

#define HBM_DMA_QMAN_GLBL_ERR_CFG_STOP_ON_ERR_EN_MASK	(\
	(FIELD_PREP(DMA0_QM_GLBL_ERR_CFG_PQF_STOP_ON_ERR_MASK, 0xF)) | \
	(FIELD_PREP(DMA0_QM_GLBL_ERR_CFG_CQF_STOP_ON_ERR_MASK, 0x1F)) | \
	(FIELD_PREP(DMA0_QM_GLBL_ERR_CFG_CP_STOP_ON_ERR_MASK, 0x1F)))

#define TPC_QMAN_GLBL_ERR_CFG_MSG_EN_MASK	(\
	(FIELD_PREP(TPC0_QM_GLBL_ERR_CFG_PQF_ERR_MSG_EN_MASK, 0xF)) | \
	(FIELD_PREP(TPC0_QM_GLBL_ERR_CFG_CQF_ERR_MSG_EN_MASK, 0x1F)) | \
	(FIELD_PREP(TPC0_QM_GLBL_ERR_CFG_CP_ERR_MSG_EN_MASK, 0x1F)))

#define TPC_QMAN_GLBL_ERR_CFG_STOP_ON_ERR_EN_MASK	(\
	(FIELD_PREP(TPC0_QM_GLBL_ERR_CFG_PQF_STOP_ON_ERR_MASK, 0xF)) | \
	(FIELD_PREP(TPC0_QM_GLBL_ERR_CFG_CQF_STOP_ON_ERR_MASK, 0x1F)) | \
	(FIELD_PREP(TPC0_QM_GLBL_ERR_CFG_CP_STOP_ON_ERR_MASK, 0x1F)))

#define MME_QMAN_GLBL_ERR_CFG_MSG_EN_MASK	(\
	(FIELD_PREP(MME0_QM_GLBL_ERR_CFG_PQF_ERR_MSG_EN_MASK, 0xF)) | \
	(FIELD_PREP(MME0_QM_GLBL_ERR_CFG_CQF_ERR_MSG_EN_MASK, 0x1F)) | \
	(FIELD_PREP(MME0_QM_GLBL_ERR_CFG_CP_ERR_MSG_EN_MASK, 0x1F)))

#define MME_QMAN_GLBL_ERR_CFG_STOP_ON_ERR_EN_MASK	(\
	(FIELD_PREP(MME0_QM_GLBL_ERR_CFG_PQF_STOP_ON_ERR_MASK, 0xF)) | \
	(FIELD_PREP(MME0_QM_GLBL_ERR_CFG_CQF_STOP_ON_ERR_MASK, 0x1F)) | \
	(FIELD_PREP(MME0_QM_GLBL_ERR_CFG_CP_STOP_ON_ERR_MASK, 0x1F)))

#define QMAN_CGM1_PWR_GATE_EN	(FIELD_PREP(DMA0_QM_CGM_CFG1_MASK_TH_MASK, 0xA))

/* RESET registers configuration */
#define CFG_RST_L_PSOC_MASK		BIT_MASK(0)
#define CFG_RST_L_PCIE_MASK		BIT_MASK(1)
#define CFG_RST_L_PCIE_IF_MASK		BIT_MASK(2)
#define CFG_RST_L_HBM_S_PLL_MASK	BIT_MASK(3)
#define CFG_RST_L_TPC_S_PLL_MASK	BIT_MASK(4)
#define CFG_RST_L_MME_S_PLL_MASK	BIT_MASK(5)
#define CFG_RST_L_CPU_PLL_MASK		BIT_MASK(6)
#define CFG_RST_L_PCIE_PLL_MASK		BIT_MASK(7)
#define CFG_RST_L_NIC_S_PLL_MASK	BIT_MASK(8)
#define CFG_RST_L_HBM_N_PLL_MASK	BIT_MASK(9)
#define CFG_RST_L_TPC_N_PLL_MASK	BIT_MASK(10)
#define CFG_RST_L_MME_N_PLL_MASK	BIT_MASK(11)
#define CFG_RST_L_NIC_N_PLL_MASK	BIT_MASK(12)
#define CFG_RST_L_DMA_W_PLL_MASK	BIT_MASK(13)
#define CFG_RST_L_SIF_W_PLL_MASK	BIT_MASK(14)
#define CFG_RST_L_MESH_W_PLL_MASK	BIT_MASK(15)
#define CFG_RST_L_SRAM_W_PLL_MASK	BIT_MASK(16)
#define CFG_RST_L_DMA_E_PLL_MASK	BIT_MASK(17)
#define CFG_RST_L_SIF_E_PLL_MASK	BIT_MASK(18)
#define CFG_RST_L_MESH_E_PLL_MASK	BIT_MASK(19)
#define CFG_RST_L_SRAM_E_PLL_MASK	BIT_MASK(20)

#define CFG_RST_L_IF_1_MASK		BIT_MASK(21)
#define CFG_RST_L_IF_0_MASK		BIT_MASK(22)
#define CFG_RST_L_IF_2_MASK		BIT_MASK(23)
#define CFG_RST_L_IF_3_MASK		BIT_MASK(24)
#define CFG_RST_L_IF_MASK		GENMASK(24, 21)

#define CFG_RST_L_TPC_0_MASK		BIT_MASK(25)
#define CFG_RST_L_TPC_1_MASK		BIT_MASK(26)
#define CFG_RST_L_TPC_2_MASK		BIT_MASK(27)
#define CFG_RST_L_TPC_3_MASK		BIT_MASK(28)
#define CFG_RST_L_TPC_4_MASK		BIT_MASK(29)
#define CFG_RST_L_TPC_5_MASK		BIT_MASK(30)
#define CFG_RST_L_TPC_6_MASK		BIT_MASK(31)
#define CFG_RST_L_TPC_MASK		GENMASK(31, 25)

#define CFG_RST_H_TPC_7_MASK		BIT_MASK(0)

#define CFG_RST_H_MME_0_MASK		BIT_MASK(1)
#define CFG_RST_H_MME_1_MASK		BIT_MASK(2)
#define CFG_RST_H_MME_2_MASK		BIT_MASK(3)
#define CFG_RST_H_MME_3_MASK		BIT_MASK(4)
#define CFG_RST_H_MME_MASK		GENMASK(4, 1)

#define CFG_RST_H_HBM_0_MASK		BIT_MASK(5)
#define CFG_RST_H_HBM_1_MASK		BIT_MASK(6)
#define CFG_RST_H_HBM_2_MASK		BIT_MASK(7)
#define CFG_RST_H_HBM_3_MASK		BIT_MASK(8)
#define CFG_RST_H_HBM_MASK		GENMASK(8, 5)

#define CFG_RST_H_NIC_0_MASK		BIT_MASK(9)
#define CFG_RST_H_NIC_1_MASK		BIT_MASK(10)
#define CFG_RST_H_NIC_2_MASK		BIT_MASK(11)
#define CFG_RST_H_NIC_3_MASK		BIT_MASK(12)
#define CFG_RST_H_NIC_4_MASK		BIT_MASK(13)
#define CFG_RST_H_NIC_MASK		GENMASK(13, 9)

#define CFG_RST_H_SM_0_MASK		BIT_MASK(14)
#define CFG_RST_H_SM_1_MASK		BIT_MASK(15)
#define CFG_RST_H_SM_2_MASK		BIT_MASK(16)
#define CFG_RST_H_SM_3_MASK		BIT_MASK(17)
#define CFG_RST_H_SM_MASK		GENMASK(17, 14)

#define CFG_RST_H_DMA_0_MASK		BIT_MASK(18)
#define CFG_RST_H_DMA_1_MASK		BIT_MASK(19)
#define CFG_RST_H_DMA_MASK		GENMASK(19, 18)

#define CFG_RST_H_CPU_MASK		BIT_MASK(20)
#define CFG_RST_H_MMU_MASK		BIT_MASK(21)

#define UNIT_RST_L_PSOC_SHIFT		0
#define UNIT_RST_L_PCIE_SHIFT		1
#define UNIT_RST_L_PCIE_IF_SHIFT	2
#define UNIT_RST_L_HBM_S_PLL_SHIFT	3
#define UNIT_RST_L_TPC_S_PLL_SHIFT	4
#define UNIT_RST_L_MME_S_PLL_SHIFT	5
#define UNIT_RST_L_CPU_PLL_SHIFT	6
#define UNIT_RST_L_PCIE_PLL_SHIFT	7
#define UNIT_RST_L_NIC_S_PLL_SHIFT	8
#define UNIT_RST_L_HBM_N_PLL_SHIFT	9
#define UNIT_RST_L_TPC_N_PLL_SHIFT	10
#define UNIT_RST_L_MME_N_PLL_SHIFT	11
#define UNIT_RST_L_NIC_N_PLL_SHIFT	12
#define UNIT_RST_L_DMA_W_PLL_SHIFT	13
#define UNIT_RST_L_SIF_W_PLL_SHIFT	14
#define UNIT_RST_L_MESH_W_PLL_SHIFT	15
#define UNIT_RST_L_SRAM_W_PLL_SHIFT	16
#define UNIT_RST_L_DMA_E_PLL_SHIFT	17
#define UNIT_RST_L_SIF_E_PLL_SHIFT	18
#define UNIT_RST_L_MESH_E_PLL_SHIFT	19
#define UNIT_RST_L_SRAM_E_PLL_SHIFT	20
#define UNIT_RST_L_TPC_0_SHIFT		21
#define UNIT_RST_L_TPC_1_SHIFT		22
#define UNIT_RST_L_TPC_2_SHIFT		23
#define UNIT_RST_L_TPC_3_SHIFT		24
#define UNIT_RST_L_TPC_4_SHIFT		25
#define UNIT_RST_L_TPC_5_SHIFT		26
#define UNIT_RST_L_TPC_6_SHIFT		27
#define UNIT_RST_L_TPC_7_SHIFT		28
#define UNIT_RST_L_MME_0_SHIFT		29
#define UNIT_RST_L_MME_1_SHIFT		30
#define UNIT_RST_L_MME_2_SHIFT		31

#define UNIT_RST_H_MME_3_SHIFT		0
#define UNIT_RST_H_HBM_0_SHIFT		1
#define UNIT_RST_H_HBM_1_SHIFT		2
#define UNIT_RST_H_HBM_2_SHIFT		3
#define UNIT_RST_H_HBM_3_SHIFT		4
#define UNIT_RST_H_NIC_0_SHIFT		5
#define UNIT_RST_H_NIC_1_SHIFT		6
#define UNIT_RST_H_NIC_2_SHIFT		7
#define UNIT_RST_H_NIC_3_SHIFT		8
#define UNIT_RST_H_NIC_4_SHIFT		9
#define UNIT_RST_H_SM_0_SHIFT		10
#define UNIT_RST_H_SM_1_SHIFT		11
#define UNIT_RST_H_SM_2_SHIFT		12
#define UNIT_RST_H_SM_3_SHIFT		13
#define UNIT_RST_H_IF_0_SHIFT		14
#define UNIT_RST_H_IF_1_SHIFT		15
#define UNIT_RST_H_IF_2_SHIFT		16
#define UNIT_RST_H_IF_3_SHIFT		17
#define UNIT_RST_H_DMA_0_SHIFT		18
#define UNIT_RST_H_DMA_1_SHIFT		19
#define UNIT_RST_H_CPU_SHIFT		20
#define UNIT_RST_H_MMU_SHIFT		21

#define UNIT_RST_H_HBM_MASK		((1 << UNIT_RST_H_HBM_0_SHIFT) | \
					(1 << UNIT_RST_H_HBM_1_SHIFT) | \
					(1 << UNIT_RST_H_HBM_2_SHIFT) | \
					(1 << UNIT_RST_H_HBM_3_SHIFT))

#define UNIT_RST_H_NIC_MASK		((1 << UNIT_RST_H_NIC_0_SHIFT) | \
					(1 << UNIT_RST_H_NIC_1_SHIFT) | \
					(1 << UNIT_RST_H_NIC_2_SHIFT) | \
					(1 << UNIT_RST_H_NIC_3_SHIFT) | \
					(1 << UNIT_RST_H_NIC_4_SHIFT))

#define UNIT_RST_H_SM_MASK		((1 << UNIT_RST_H_SM_0_SHIFT) | \
					(1 << UNIT_RST_H_SM_1_SHIFT) | \
					(1 << UNIT_RST_H_SM_2_SHIFT) | \
					(1 << UNIT_RST_H_SM_3_SHIFT))

#define UNIT_RST_H_MME_MASK		((1 << UNIT_RST_H_MME_0_SHIFT) | \
					(1 << UNIT_RST_H_MME_1_SHIFT) | \
					(1 << UNIT_RST_H_MME_2_SHIFT))

#define UNIT_RST_L_MME_MASK		(1 << UNIT_RST_L_MME_3_SHIFT)

#define UNIT_RST_L_IF_MASK		((1 << UNIT_RST_L_IF_0_SHIFT) | \
					(1 << UNIT_RST_L_IF_1_SHIFT) | \
					(1 << UNIT_RST_L_IF_2_SHIFT) | \
					(1 << UNIT_RST_L_IF_3_SHIFT))

#define UNIT_RST_L_TPC_MASK		((1 << UNIT_RST_L_TPC_0_SHIFT) | \
					(1 << UNIT_RST_L_TPC_1_SHIFT) | \
					(1 << UNIT_RST_L_TPC_2_SHIFT) | \
					(1 << UNIT_RST_L_TPC_3_SHIFT) | \
					(1 << UNIT_RST_L_TPC_4_SHIFT) | \
					(1 << UNIT_RST_L_TPC_5_SHIFT) | \
					(1 << UNIT_RST_L_TPC_6_SHIFT) | \
					(1 << UNIT_RST_L_TPC_7_SHIFT))

/* CPU_CA53_CFG_ARM_RST_CONTROL */
#define CPU_CA53_CFG_ARM_RST_CONTROL_NCPUPORESET_SHIFT               0
#define CPU_CA53_CFG_ARM_RST_CONTROL_NCPUPORESET_MASK                0x3
#define CPU_CA53_CFG_ARM_RST_CONTROL_NCORERESET_SHIFT                4
#define CPU_CA53_CFG_ARM_RST_CONTROL_NCORERESET_MASK                 0x30
#define CPU_CA53_CFG_ARM_RST_CONTROL_NL2RESET_SHIFT                  8
#define CPU_CA53_CFG_ARM_RST_CONTROL_NL2RESET_MASK                   0x100
#define CPU_CA53_CFG_ARM_RST_CONTROL_NPRESETDBG_SHIFT                12
#define CPU_CA53_CFG_ARM_RST_CONTROL_NPRESETDBG_MASK                 0x1000
#define CPU_CA53_CFG_ARM_RST_CONTROL_NMBISTRESET_SHIFT               16
#define CPU_CA53_CFG_ARM_RST_CONTROL_NMBISTRESET_MASK                0x10000
#define CPU_CA53_CFG_ARM_RST_CONTROL_WARMRSTREQ_SHIFT                20
#define CPU_CA53_CFG_ARM_RST_CONTROL_WARMRSTREQ_MASK                 0x300000

#define CPU_RESET_ASSERT	(\
			1 << CPU_CA53_CFG_ARM_RST_CONTROL_NMBISTRESET_SHIFT)

#define CPU_RESET_CORE0_DEASSERT	(\
			1 << CPU_CA53_CFG_ARM_RST_CONTROL_NCPUPORESET_SHIFT |\
			1 << CPU_CA53_CFG_ARM_RST_CONTROL_NCORERESET_SHIFT |\
			1 << CPU_CA53_CFG_ARM_RST_CONTROL_NL2RESET_SHIFT |\
			1 << CPU_CA53_CFG_ARM_RST_CONTROL_NMBISTRESET_SHIFT)

/* QM_IDLE_MASK is valid for all engines QM idle check */
#define QM_IDLE_MASK	(DMA0_QM_GLBL_STS0_PQF_IDLE_MASK | \
			DMA0_QM_GLBL_STS0_CQF_IDLE_MASK | \
			DMA0_QM_GLBL_STS0_CP_IDLE_MASK)

/* CGM_IDLE_MASK is valid for all engines CGM idle check */
#define CGM_IDLE_MASK	DMA0_QM_CGM_STS_AGENT_IDLE_MASK

#define TPC_IDLE_MASK	((1 << TPC0_CFG_STATUS_SCALAR_PIPE_EMPTY_SHIFT) | \
			(1 << TPC0_CFG_STATUS_VECTOR_PIPE_EMPTY_SHIFT) | \
			(1 << TPC0_CFG_STATUS_IQ_EMPTY_SHIFT) | \
			(1 << TPC0_CFG_STATUS_SB_EMPTY_SHIFT) | \
			(1 << TPC0_CFG_STATUS_QM_IDLE_SHIFT) | \
			(1 << TPC0_CFG_STATUS_QM_RDY_SHIFT))

#define MME0_CTRL_ARCH_STATUS_SB_A_EMPTY_MASK                        0x80
#define MME0_CTRL_ARCH_STATUS_SB_B_EMPTY_MASK                        0x100
#define MME0_CTRL_ARCH_STATUS_WBC_AXI_IDLE_MASK                      0x1000

#define MME_ARCH_IDLE_MASK	(MME0_CTRL_ARCH_STATUS_SB_A_EMPTY_MASK | \
				MME0_CTRL_ARCH_STATUS_SB_B_EMPTY_MASK | \
				MME0_CTRL_ARCH_STATUS_WBC_AXI_IDLE_MASK)

#define IS_QM_IDLE(qm_glbl_sts0, qm_cgm_sts) \
	((((qm_glbl_sts0) & QM_IDLE_MASK) == QM_IDLE_MASK) && \
			(((qm_cgm_sts) & CGM_IDLE_MASK) == CGM_IDLE_MASK))

#define IS_DMA_IDLE(dma_core_sts0) \
	!(dma_core_sts0 & DMA0_CORE_STS0_BUSY_MASK)

#define IS_TPC_IDLE(tpc_cfg_sts) \
	(((tpc_cfg_sts) & TPC_IDLE_MASK) == TPC_IDLE_MASK)

#define IS_MME_IDLE(mme_arch_sts) \
	(((mme_arch_sts) & MME_ARCH_IDLE_MASK) == MME_ARCH_IDLE_MASK)

enum axi_id {
	AXI_ID_MME,
	AXI_ID_TPC,
	AXI_ID_DMA,
	AXI_ID_NIC,	/* Local NIC */
	AXI_ID_PCI,
	AXI_ID_CPU,
	AXI_ID_PSOC,
	AXI_ID_MMU,
	AXI_ID_NIC_FT	/* Feed-Through NIC */
};

/* RAZWI initiator ID is built from the location in the chip and the AXI ID */

#define RAZWI_INITIATOR_AXI_ID_SHIFT	20
#define RAZWI_INITIATOR_AXI_ID_MASK	0xF
#define RAZWI_INITIATOR_X_SHIFT		24
#define RAZWI_INITIATOR_X_MASK		0xF
#define RAZWI_INITIATOR_Y_SHIFT		28
#define RAZWI_INITIATOR_Y_MASK		0x7

#define RAZWI_INITIATOR_ID_AXI_ID(axi_id) \
	(((axi_id) & RAZWI_INITIATOR_AXI_ID_MASK) << \
		RAZWI_INITIATOR_AXI_ID_SHIFT)

#define RAZWI_INITIATOR_ID_X_Y(x, y) \
	((((y) & RAZWI_INITIATOR_Y_MASK) << RAZWI_INITIATOR_Y_SHIFT) | \
		(((x) & RAZWI_INITIATOR_X_MASK) << RAZWI_INITIATOR_X_SHIFT))

#define RAZWI_INITIATOR_ID_X_Y_TPC0_NIC0	RAZWI_INITIATOR_ID_X_Y(1, 1)
#define RAZWI_INITIATOR_ID_X_Y_TPC1		RAZWI_INITIATOR_ID_X_Y(2, 1)
#define RAZWI_INITIATOR_ID_X_Y_MME0_0		RAZWI_INITIATOR_ID_X_Y(3, 1)
#define RAZWI_INITIATOR_ID_X_Y_MME0_1		RAZWI_INITIATOR_ID_X_Y(4, 1)
#define RAZWI_INITIATOR_ID_X_Y_MME1_0		RAZWI_INITIATOR_ID_X_Y(5, 1)
#define RAZWI_INITIATOR_ID_X_Y_MME1_1		RAZWI_INITIATOR_ID_X_Y(6, 1)
#define RAZWI_INITIATOR_ID_X_Y_TPC2		RAZWI_INITIATOR_ID_X_Y(7, 1)
#define RAZWI_INITIATOR_ID_X_Y_TPC3_PCI_CPU_PSOC \
						RAZWI_INITIATOR_ID_X_Y(8, 1)
#define RAZWI_INITIATOR_ID_X_Y_DMA_IF_W_S_0	RAZWI_INITIATOR_ID_X_Y(0, 1)
#define RAZWI_INITIATOR_ID_X_Y_DMA_IF_E_S_0	RAZWI_INITIATOR_ID_X_Y(9, 1)
#define RAZWI_INITIATOR_ID_X_Y_DMA_IF_W_S_1	RAZWI_INITIATOR_ID_X_Y(0, 2)
#define RAZWI_INITIATOR_ID_X_Y_DMA_IF_E_S_1	RAZWI_INITIATOR_ID_X_Y(9, 2)
#define RAZWI_INITIATOR_ID_X_Y_DMA_IF_W_N_0	RAZWI_INITIATOR_ID_X_Y(0, 3)
#define RAZWI_INITIATOR_ID_X_Y_DMA_IF_E_N_0	RAZWI_INITIATOR_ID_X_Y(9, 3)
#define RAZWI_INITIATOR_ID_X_Y_DMA_IF_W_N_1	RAZWI_INITIATOR_ID_X_Y(0, 4)
#define RAZWI_INITIATOR_ID_X_Y_DMA_IF_E_N_1	RAZWI_INITIATOR_ID_X_Y(9, 4)
#define RAZWI_INITIATOR_ID_X_Y_TPC4_NIC1_NIC2	RAZWI_INITIATOR_ID_X_Y(1, 6)
#define RAZWI_INITIATOR_ID_X_Y_TPC5		RAZWI_INITIATOR_ID_X_Y(2, 6)
#define RAZWI_INITIATOR_ID_X_Y_MME2_0		RAZWI_INITIATOR_ID_X_Y(3, 6)
#define RAZWI_INITIATOR_ID_X_Y_MME2_1		RAZWI_INITIATOR_ID_X_Y(4, 6)
#define RAZWI_INITIATOR_ID_X_Y_MME3_0		RAZWI_INITIATOR_ID_X_Y(5, 6)
#define RAZWI_INITIATOR_ID_X_Y_MME3_1		RAZWI_INITIATOR_ID_X_Y(6, 6)
#define RAZWI_INITIATOR_ID_X_Y_TPC6		RAZWI_INITIATOR_ID_X_Y(7, 6)
#define RAZWI_INITIATOR_ID_X_Y_TPC7_NIC4_NIC5	RAZWI_INITIATOR_ID_X_Y(8, 6)

#define PSOC_ETR_AXICTL_PROTCTRLBIT1_SHIFT                           1

/* STLB_CACHE_INV */
#define STLB_CACHE_INV_PRODUCER_INDEX_SHIFT                          0
#define STLB_CACHE_INV_PRODUCER_INDEX_MASK                           0xFF
#define STLB_CACHE_INV_INDEX_MASK_SHIFT                              8
#define STLB_CACHE_INV_INDEX_MASK_MASK                               0xFF00

#define MME_ACC_ACC_STALL_R_SHIFT                                    0
#define MME_SBAB_SB_STALL_R_SHIFT                                    0

#define PCIE_WRAP_LBW_PROT_OVR_RD_EN_MASK                            0x700
#define PCIE_WRAP_LBW_PROT_OVR_WR_EN_MASK                            0x7000

#define PCIE_WRAP_LBW_DRAIN_CFG_EN_SHIFT                             0
#define PCIE_WRAP_HBW_DRAIN_CFG_EN_SHIFT                             0

/* DMA_IF_HBM_CRED_EN */
#define DMA_IF_HBM_CRED_EN_READ_CREDIT_EN_SHIFT                      0
#define DMA_IF_HBM_CRED_EN_READ_CREDIT_EN_MASK                       0x1
#define DMA_IF_HBM_CRED_EN_WRITE_CREDIT_EN_SHIFT                     1
#define DMA_IF_HBM_CRED_EN_WRITE_CREDIT_EN_MASK                      0x2

#define DMA_IF_DOWN_CHX_SCRAM_SRAM_EN_VAL_SHIFT                      0
#define DMA_IF_DOWN_CHX_SCRAM_HBM_EN_VAL_SHIFT                       0
#define DMA_IF_DOWN_CHX_E2E_HBM_EN_VAL_SHIFT                         0
#define DMA_IF_DOWN_CHX_E2E_PCI_EN_VAL_SHIFT                         0

#define IF_RTR_CTRL_SCRAM_SRAM_EN_VAL_SHIFT                          0
#define IF_RTR_CTRL_SCRAM_HBM_EN_VAL_SHIFT                           0

#define IF_RTR_CTRL_E2E_HBM_EN_VAL_SHIFT                             0
#define IF_RTR_CTRL_E2E_PCI_EN_VAL_SHIFT                             0

/* MMU_UP_PAGE_ERROR_CAPTURE */
#define MMU_UP_PAGE_ERROR_CAPTURE_VA_49_32_MASK                      0x3FFFF
#define MMU_UP_PAGE_ERROR_CAPTURE_ENTRY_VALID_MASK                   0x40000

/* MMU_UP_ACCESS_ERROR_CAPTURE */
#define MMU_UP_ACCESS_ERROR_CAPTURE_VA_49_32_MASK                    0x3FFFF
#define MMU_UP_ACCESS_ERROR_CAPTURE_ENTRY_VALID_MASK                 0x40000

#define QM_ARB_ERR_MSG_EN_CHOISE_OVF_MASK                            0x1
#define QM_ARB_ERR_MSG_EN_CHOISE_WDT_MASK                            0x2
#define QM_ARB_ERR_MSG_EN_AXI_LBW_ERR_MASK                           0x4

#define QM_ARB_ERR_MSG_EN_MASK		(\
					QM_ARB_ERR_MSG_EN_CHOISE_OVF_MASK |\
					QM_ARB_ERR_MSG_EN_CHOISE_WDT_MASK |\
					QM_ARB_ERR_MSG_EN_AXI_LBW_ERR_MASK)

#define PCIE_AUX_FLR_CTRL_HW_CTRL_MASK                               0x1
#define PCIE_AUX_FLR_CTRL_INT_MASK_MASK                              0x2

#endif /* GAUDI_MASKS_H_ */