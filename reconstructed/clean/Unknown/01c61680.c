// Function: FUN_01c61680
// Address: 01c61680
// Size: 683 bytes
// Class: Unknown

uint64_t FUN_01c61680(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint32_t uVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t this_ptr;
  int64_t lVar8;
  float fVar9;
  uint64_t uVar10;
  uint64_t in_XMM0_Qb;
  uint8_t auVar11 [16];
  uint64_t extraout_XMM0_Qb;
  double dVar12;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  int64_t local_58;
  char local_50;
  uint8_t local_48 [16];
  
  local_48._8_8_ = in_XMM0_Qb;
  local_48._0_8_ = param_1;
  if ((*(int *)(this_ptr + 0x1c8) == 1) &&
     ((iVar5 = FUN_01d3a5a0(), iVar5 == 5 ||
      ((iVar5 = FUN_01d3a5a0(), iVar5 == 1 && (iVar5 = FUN_01d3b630(), iVar5 == 1)))))) {
    uVar2 = (uint32_t)((uint64_t)in_XMM0_Qb >> 0x20);
    fVar9 = (float)((uint64_t)param_1 >> 0x20);
    auVar11._4_4_ = fVar9;
    auVar11._0_4_ = fVar9;
    auVar11._8_4_ = uVar2;
    auVar11._12_4_ = uVar2;
    auVar13._4_12_ = auVar11._4_12_;
    auVar13._0_4_ = fVar9 + g_02390124;
    auVar11 = insertps(local_48,auVar13,0x10);
    cVar4 = FUN_01c619e0(auVar11._0_8_);
    if (cVar4 == '\0') {
      FUN_01c41970();
      lVar1 = *(int64_t *)(this_ptr + 0x200);
      if (lVar1 != 0) {
        FUN_00d50b00();
        if (0 < *(int *)(lVar1 + 0xc)) {
          fVar9 = (float)param_1 + g_0239458c;
          dVar12 = (double)(float)param_1 + g_024110e8;
          lVar8 = 0;
          do {
            lVar6 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar8 * 8);
            uVar10 = FUN_01c82bc0();
            auVar14._0_4_ = (uint)(float)uVar10 & g_023945e0;
            auVar14._4_4_ = (uint)((uint64_t)uVar10 >> 0x20) & _UNK_023945e4;
            auVar14._8_4_ = (uint)extraout_XMM0_Qb & _UNK_023945e8;
            auVar14._12_4_ = (uint)((uint64_t)extraout_XMM0_Qb >> 0x20) & _UNK_023945ec;
            auVar15._4_12_ = SUB1612(auVar14 | g_023945f0,4);
            auVar15._0_4_ = SUB164(auVar14 | g_023945f0,0) + (float)uVar10;
            auVar11 = roundss(ZEXT816(0),auVar15,0xb);
            if ((fVar9 < auVar11._0_4_) && ((double)auVar11._0_4_ < dVar12)) {
              if ((int)lVar8 != 0) {
                FUN_01c4ba20();
                if ((local_50 == '\0') && (local_58 != 0)) {
                  FUN_00d50b00();
                }
                FUN_01e4ac90();
                if (local_58 != 0) {
                  FUN_00d50b20();
                }
                FUN_01c82aa0();
                lVar1 = *param_2;
                lVar6 = local_58;
                if (lVar1 == local_58) {
                  if (((char)param_2[1] != '\0') || (local_58 == 0)) goto LAB_01c618fc;
                  if (local_50 == '\0') {
                    FUN_00d50b00();
                    goto LAB_01c618f5;
                  }
                }
                else {
                  lVar3 = param_2[1];
                  if (local_50 == '\0') {
                    if (local_58 != 0) {
                      FUN_00d50b00();
                    }
                    *param_2 = local_58;
                    if (((char)lVar3 != '\0') && (lVar1 != 0)) {
                      FUN_00d50b20();
                    }
LAB_01c618f5:
                    local_48._0_8_ = param_2 + 1;
                    *(void*)local_48._0_8_ = 1;
LAB_01c618fc:
                    if ((local_50 != '\0') && (local_58 != 0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_01c61910;
                  }
                  *param_2 = local_58;
                  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
                    FUN_00d50b20();
                  }
                }
                local_48._0_8_ = param_2 + 1;
                *(void*)local_48._0_8_ = 1;
              }
LAB_01c61910:
              uVar7 = CONCAT71((int7)((uint64_t)lVar6 >> 8),(int)lVar8 != 0);
              FUN_01c79df0();
              goto LAB_01c61922;
            }
            lVar8 = lVar8 + 1;
          } while ((int)lVar8 < *(int *)(lVar1 + 0xc));
        }
        FUN_01c79df0();
        uVar7 = 0;
LAB_01c61922:
        FUN_00d50b20();
        goto LAB_01c6187a;
      }
    }
  }
  uVar7 = 0;
LAB_01c6187a:
  return uVar7 & 0xffffffff;
}

