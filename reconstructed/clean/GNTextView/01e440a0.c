// Function: FUN_01e440a0
// Address: 01e440a0
// Size: 1661 bytes
// Class: GNTextView
// === GNTextView properties ===
//                   _firstResponder
//                   _defaultFirstResponder
//                   _isDisplaying
//                   _ignoreSystemKeyEvents
//                   _bgCache
//                   _toolbarActions
//                   _handeledToolbarActions
//                   _sheetController
//                   _sheetControllerLoadedSize
//                   _sheetControllerLoadedAutoresizingMask


void FUN_01e440a0(void*param_1,void*param_2)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int iVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  uint uVar8;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  float fVar13;
  uint8_t auVar12 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  char local_a0;
  void*local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  uint64_t local_78;
  uint32_t local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_1[1];
  local_98 = param_2;
  (**(code **)(*(int64_t *)*arg1 + 0x610))(*param_1);
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_90 + 0x6c0))();
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    return;
  }
  plVar3 = (int64_t *)this_ptr[6];
  while (plVar6 = plVar3, plVar6 != (int64_t *)0x0) {
    plVar3 = (int64_t *)plVar6[6];
    this_ptr = plVar6;
    if ((int64_t *)plVar6[6] == plVar6) {
      plVar3 = plVar6;
    }
  }
  cVar4 = (**(code **)(*this_ptr + 0x4b8))();
  if (cVar4 == '\0') {
    return;
  }
  FUN_00d50b00();
  FUN_01d8c6e0();
  plVar3 = local_90;
  if (local_88 == '\0') {
    if (local_90 == (int64_t *)0x0) goto LAB_01e446ee;
    FUN_00d50b00();
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_90 == (int64_t *)0x0) goto LAB_01e446ee;
  local_b0 = plVar3;
  FUN_01f27fe0();
  FUN_01f30840();
  plVar3 = local_90;
  if (local_88 == '\0') {
    if (((local_90 != (int64_t *)0x0) && (FUN_00d50b00(), local_88 != '\0')) &&
       (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_88 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    local_88 = '\0';
    local_90 = (int64_t *)0x0;
    local_80 = plVar3;
    local_70 = 0;
    local_78 = 0;
    if (0 < *(int *)((int64_t)plVar3 + 0xc)) {
      uVar8 = 0;
      do {
        lVar2 = g_027f3ca0;
        plVar6 = *(int64_t **)(plVar3[2] + (uint64_t)uVar8 * 8);
        local_90 = plVar6;
        if (g_027f3ca0 != 0) {
          FUN_00d50b00();
        }
        cVar4 = FUN_00d50f90();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          (**(code **)(*plVar6 + 0x4a0))();
          plVar6 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
              if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01e44350;
            }
          }
          else if (local_68 != (int64_t *)0x0) {
LAB_01e44350:
            local_60 = '\0';
            local_68 = (int64_t *)0x0;
            local_58 = plVar6;
            local_50 = 0xffffffff;
            local_48 = 0;
            local_50._4_4_ = 0;
            while( true ) {
              if (local_50._4_4_ != 0) {
                if (local_50._4_4_ < 1) {
                  iVar7 = -local_50._4_4_;
                }
                else {
                  iVar7 = (int)local_50 - local_50._4_4_;
                  local_50 = CONCAT44(local_50._4_4_,iVar7);
                  FUN_00d23690();
                  local_48 = local_48 + local_50._4_4_;
                  iVar7 = 0;
                }
                local_50 = CONCAT44(iVar7,(int)local_50);
              }
              lVar2 = g_027f3ca8;
              lVar5 = (int64_t)(int)local_50;
              iVar7 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar7);
              if (*(int *)((int64_t)local_58 + 0xc) <= iVar7) break;
              local_68 = *(int64_t **)(local_58[2] + 8 + lVar5 * 8);
              if (g_027f3ca8 != 0) {
                FUN_00d50b00();
              }
              cVar4 = FUN_00d50f90();
              uVar9 = extraout_XMM0_Qa;
              if (lVar2 != 0) {
                uVar9 = FUN_00d50b20();
              }
              plVar6 = local_68;
              lVar2 = g_0276caa0;
              if (cVar4 != '\0') {
                if (g_0276caa0 != 0) {
                  uVar9 = FUN_00d50b00();
                }
                local_c0 = lVar2;
                local_b8 = '\x01';
                (**(code **)(*plVar6 + 0x88))(uVar9,&local_c0);
                plVar6 = local_40;
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_b8 != '\0') && (local_c0 != 0)) {
                  FUN_00d50b20();
                }
                if (plVar6 == local_b0) {
                  auVar15._0_8_ = (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
                  auVar15._8_8_ = extraout_XMM0_Qb;
                  auVar14 = roundss(ZEXT816(0),auVar15,9);
                  if ((float)auVar15._0_8_ - auVar14._0_4_ <= g_0239424c) {
                    auVar14._4_4_ = (float)((uint64_t)auVar15._0_8_ >> 0x20);
                    auVar14._0_4_ = auVar14._4_4_;
                    auVar14._12_4_ = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
                    auVar14._8_4_ = auVar14._12_4_;
                    auVar15 = roundss(ZEXT816(0),auVar14,9);
                    if (auVar14._4_4_ - auVar15._0_4_ <= g_0239424c) {
                      auVar10._0_12_ = ZEXT812(0);
                      auVar10._12_4_ = 0;
                      auVar15 = roundss(auVar10,auVar12,9);
                      fVar13 = auVar12._4_4_;
                      if ((auVar12._0_4_ - auVar15._0_4_ <= g_0239424c) &&
                         (auVar11._4_4_ = fVar13, auVar11._0_4_ = fVar13,
                         auVar11._8_4_ = auVar12._12_4_, auVar11._12_4_ = auVar12._12_4_,
                         auVar12 = roundss(ZEXT816(0),auVar11,9),
                         fVar13 - auVar12._0_4_ <= g_0239424c)) goto LAB_01e44380;
                    }
                  }
                  if ((g_028b9dd0 == (int64_t *)0x0) || (g_028b9dd9 == '\0')) {
                    FUN_00e8cb50();
                    if (g_028b9dd0 == (int64_t *)0x0) {
                      FUN_01cfcdc0();
                      plVar6 = g_028b9dd0;
                      if (g_028b9dd0 != local_40) {
                        if (local_38 == '\0') {
                          if (local_40 == (int64_t *)0x0) {
                            plVar6 = (int64_t *)0x0;
                          }
                          else {
                            FUN_00d50b00();
                            plVar6 = local_40;
                          }
                        }
                        else {
                          local_38 = '\0';
                          plVar6 = local_40;
                        }
                        bVar1 = g_028b9dd0 != (int64_t *)0x0;
                        g_028b9dd0 = plVar6;
                        if (bVar1) {
                          FUN_00d50b20();
                          plVar6 = local_40;
                        }
                      }
                      if ((plVar6 != (int64_t *)0x0) && (g_028b9dd8 == '\0')) {
                        g_028b9dd8 = '\x01';
                        FUN_00e8cb90();
                        plVar6 = local_40;
                      }
                      if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      g_028b9dd9 = '\x01';
                      FUN_00e8cb70();
                    }
                    else {
                      g_028b9dd9 = '\x01';
                      FUN_00e8cb70();
                    }
                  }
                  FUN_01d48370();
                  plVar6 = g_028b9dd0;
                  local_a0 = 0;
                  if (g_028b9dd0 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  local_a8 = plVar6;
                  local_a0 = '\x01';
                  FUN_01d488d0();
                  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = *(uint64_t *)(*arg1 + 0x114);
                  (**(code **)(*(int64_t *)*local_98 + 0x3b8))();
                  FUN_01d48390();
                }
              }
LAB_01e44380:
            }
            FUN_000ad7a0();
            FUN_00d50b20();
          }
        }
        uVar8 = uVar8 + 1;
        local_78 = CONCAT44(local_78._4_4_,uVar8);
      } while ((int)uVar8 < *(int *)((int64_t)plVar3 + 0xc));
    }
    FUN_01e4f040();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01e446ee:
  FUN_00d50b20();
  return;
}

