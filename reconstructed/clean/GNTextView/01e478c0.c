// Function: FUN_01e478c0
// Address: 01e478c0
// Size: 1147 bytes
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


void FUN_01e478c0(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t *this_ptr;
  uint uVar14;
  int64_t *plVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar18 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  uint64_t extraout_XMM0_Qb_06;
  uint8_t auVar19 [16];
  uint64_t extraout_XMM0_Qb_07;
  uint64_t extraout_XMM0_Qb_08;
  uint64_t extraout_XMM0_Qb_09;
  uint64_t extraout_XMM0_Qb_10;
  uint8_t in_XMM2 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint8_t local_48 [8];
  float fStack_40;
  float fStack_3c;
  
  plVar13 = (int64_t *)this_ptr[6];
  plVar2 = this_ptr;
  while (plVar15 = plVar13, plVar15 != (int64_t *)0x0) {
    plVar13 = (int64_t *)plVar15[6];
    plVar2 = plVar15;
    if ((int64_t *)plVar15[6] == plVar15) {
      plVar13 = plVar15;
    }
  }
  cVar11 = (**(code **)(*plVar2 + 0x4b8))();
  if (cVar11 != '\0') {
    FUN_00d50b00();
    FUN_00d50b20();
    if (*(int *)((int64_t)this_ptr + 0xb4) == 0) {
      bVar7 = 0.0 < (float)param_2;
      bVar8 = 0.0 < (float)((uint64_t)param_2 >> 0x20);
      bVar9 = (float)param_3 <= 0.0;
      bVar10 = (float)((uint64_t)param_3 >> 0x20) <= 0.0;
      if ((bVar8 && bVar7) && (bVar10 || bVar9)) {
        (**(code **)(*this_ptr + 0x510))();
      }
      if ((!bVar8 || !bVar7) && (!bVar10 && !bVar9)) {
        (**(code **)(*this_ptr + 0x508))();
      }
      lVar1 = this_ptr[7];
      if (lVar1 != 0) {
        if (0 < *(int *)(lVar1 + 0xc)) {
          uVar14 = 0;
          do {
            plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar14 * 8);
            (**(code **)(*plVar2 + 0x4d8))();
            cVar11 = FUN_00d054a0();
            if (cVar11 == '\0') {
              (**(code **)(*plVar2 + 0x4d8))();
              cVar11 = FUN_00d054a0();
              if (cVar11 != '\0') goto LAB_01e47a64;
            }
            else {
LAB_01e47a64:
              FUN_00d50b00();
              local_88 = (float)param_1;
              fStack_84 = (float)((uint64_t)param_1 >> 0x20);
              fStack_80 = (float)in_XMM0_Qb;
              fStack_7c = (float)((uint64_t)in_XMM0_Qb >> 0x20);
              plVar13 = this_ptr;
              if ((int64_t *)plVar2[6] == this_ptr) {
                uVar16 = (**(code **)(*plVar2 + 0x4d8))();
                uVar17 = (**(code **)(*plVar2 + 0x4d8))();
                local_48._0_4_ = (uint32_t)uVar16;
                local_48._4_4_ = (uint32_t)((uint64_t)uVar16 >> 0x20);
                fStack_40 = (float)extraout_XMM0_Qb_01;
                fStack_3c = (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
                auVar21._0_4_ = local_88 - (float)uVar17;
                auVar21._4_4_ = fStack_84 - (float)((uint64_t)uVar17 >> 0x20);
                auVar21._8_4_ = fStack_80 - (float)extraout_XMM0_Qb_02;
                auVar21._12_4_ = fStack_7c - (float)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
                auVar6._4_4_ = fStack_84 - (float)local_48._4_4_;
                auVar6._0_4_ = local_88 - (float)local_48._0_4_;
                auVar6._8_4_ = fStack_80 - fStack_40;
                auVar6._12_4_ = fStack_7c - fStack_3c;
                blendps(auVar21,auVar6,0xd);
              }
              else {
                do {
                  local_48._4_4_ = fStack_84;
                  local_48._0_4_ = local_88;
                  fStack_40 = fStack_80;
                  fStack_3c = fStack_7c;
                  cVar11 = (**(code **)(*plVar13 + 0x4b8))();
                  plVar15 = plVar2;
                  if (cVar11 != '\0') break;
                  uVar16 = (**(code **)(*plVar13 + 0x4d8))();
                  uVar17 = (**(code **)(*plVar13 + 0x4d8))();
                  local_58 = (float)uVar16;
                  fStack_54 = (float)((uint64_t)uVar16 >> 0x20);
                  fStack_50 = (float)extraout_XMM0_Qb;
                  fStack_4c = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
                  auVar20._0_4_ = local_58 + local_88;
                  auVar20._4_4_ = fStack_54 + fStack_84;
                  auVar20._8_4_ = fStack_50 + fStack_80;
                  auVar20._12_4_ = fStack_4c + fStack_7c;
                  auVar18._0_4_ = (float)uVar17 + local_88;
                  auVar18._4_4_ = (float)((uint64_t)uVar17 >> 0x20) + fStack_84;
                  auVar18._8_4_ = (float)extraout_XMM0_Qb_00 + fStack_80;
                  auVar18._12_4_ = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20) + fStack_7c;
                  _local_48 = blendps(auVar18,auVar20,0xd);
                  plVar12 = (int64_t *)plVar13[6];
                  if ((int64_t *)plVar13[6] == plVar13) {
                    plVar12 = plVar13;
                  }
                  local_88 = local_48._0_4_;
                  fStack_84 = local_48._4_4_;
                  fStack_80 = local_48._8_4_;
                  fStack_7c = local_48._12_4_;
                  plVar13 = plVar12;
                } while (plVar12 != (int64_t *)0x0);
                do {
                  cVar11 = (**(code **)(*plVar15 + 0x4b8))();
                  if (cVar11 != '\0') break;
                  uVar16 = (**(code **)(*plVar15 + 0x4d8))();
                  uVar17 = (**(code **)(*plVar15 + 0x4d8))();
                  local_58 = (float)uVar16;
                  fStack_54 = (float)((uint64_t)uVar16 >> 0x20);
                  fStack_50 = (float)extraout_XMM0_Qb_03;
                  fStack_4c = (float)((uint64_t)extraout_XMM0_Qb_03 >> 0x20);
                  auVar22._0_4_ = (float)local_48._0_4_ - (float)uVar17;
                  auVar22._4_4_ = (float)local_48._4_4_ - (float)((uint64_t)uVar17 >> 0x20);
                  auVar22._8_4_ = fStack_40 - (float)extraout_XMM0_Qb_04;
                  auVar22._12_4_ = fStack_3c - (float)((uint64_t)extraout_XMM0_Qb_04 >> 0x20);
                  auVar3._4_4_ = (float)local_48._4_4_ - fStack_54;
                  auVar3._0_4_ = (float)local_48._0_4_ - local_58;
                  auVar3._8_4_ = fStack_40 - fStack_50;
                  auVar3._12_4_ = fStack_3c - fStack_4c;
                  _local_48 = blendps(auVar22,auVar3,0xd);
                  plVar13 = (int64_t *)plVar15[6];
                  if ((int64_t *)plVar15[6] == plVar15) {
                    plVar13 = plVar15;
                  }
                  plVar15 = plVar13;
                } while (plVar13 != (int64_t *)0x0);
              }
              FUN_00d50b20();
              FUN_00d05360();
              FUN_00d50b00();
              local_68 = in_XMM2._0_4_;
              fStack_64 = in_XMM2._4_4_;
              fStack_60 = in_XMM2._8_4_;
              fStack_5c = in_XMM2._12_4_;
              plVar13 = this_ptr;
              if ((int64_t *)plVar2[6] == this_ptr) {
                uVar16 = (**(code **)(*plVar2 + 0x4d8))();
                uVar17 = (**(code **)(*plVar2 + 0x4d8))();
                local_48._0_4_ = (uint32_t)uVar16;
                local_48._4_4_ = (uint32_t)((uint64_t)uVar16 >> 0x20);
                fStack_40 = (float)extraout_XMM0_Qb_07;
                fStack_3c = (float)((uint64_t)extraout_XMM0_Qb_07 >> 0x20);
                auVar24._0_4_ = local_68 - (float)uVar17;
                auVar24._4_4_ = fStack_64 - (float)((uint64_t)uVar17 >> 0x20);
                auVar24._8_4_ = fStack_60 - (float)extraout_XMM0_Qb_08;
                auVar24._12_4_ = fStack_5c - (float)((uint64_t)extraout_XMM0_Qb_08 >> 0x20);
                auVar5._4_4_ = fStack_64 - (float)local_48._4_4_;
                auVar5._0_4_ = local_68 - (float)local_48._0_4_;
                auVar5._8_4_ = fStack_60 - fStack_40;
                auVar5._12_4_ = fStack_5c - fStack_3c;
                blendps(auVar24,auVar5,0xd);
              }
              else {
                do {
                  local_48._4_4_ = fStack_64;
                  local_48._0_4_ = local_68;
                  fStack_40 = fStack_60;
                  fStack_3c = fStack_5c;
                  cVar11 = (**(code **)(*plVar13 + 0x4b8))();
                  plVar15 = plVar2;
                  if (cVar11 != '\0') break;
                  uVar16 = (**(code **)(*plVar13 + 0x4d8))();
                  uVar17 = (**(code **)(*plVar13 + 0x4d8))();
                  local_58 = (float)uVar16;
                  fStack_54 = (float)((uint64_t)uVar16 >> 0x20);
                  fStack_50 = (float)extraout_XMM0_Qb_05;
                  fStack_4c = (float)((uint64_t)extraout_XMM0_Qb_05 >> 0x20);
                  auVar23._0_4_ = local_58 + local_68;
                  auVar23._4_4_ = fStack_54 + fStack_64;
                  auVar23._8_4_ = fStack_50 + fStack_60;
                  auVar23._12_4_ = fStack_4c + fStack_5c;
                  auVar19._0_4_ = (float)uVar17 + local_68;
                  auVar19._4_4_ = (float)((uint64_t)uVar17 >> 0x20) + fStack_64;
                  auVar19._8_4_ = (float)extraout_XMM0_Qb_06 + fStack_60;
                  auVar19._12_4_ = (float)((uint64_t)extraout_XMM0_Qb_06 >> 0x20) + fStack_5c;
                  _local_48 = blendps(auVar19,auVar23,0xd);
                  plVar12 = (int64_t *)plVar13[6];
                  if ((int64_t *)plVar13[6] == plVar13) {
                    plVar12 = plVar13;
                  }
                  local_68 = local_48._0_4_;
                  fStack_64 = local_48._4_4_;
                  fStack_60 = local_48._8_4_;
                  fStack_5c = local_48._12_4_;
                  plVar13 = plVar12;
                } while (plVar12 != (int64_t *)0x0);
                do {
                  cVar11 = (**(code **)(*plVar15 + 0x4b8))();
                  if (cVar11 != '\0') break;
                  uVar16 = (**(code **)(*plVar15 + 0x4d8))();
                  uVar17 = (**(code **)(*plVar15 + 0x4d8))();
                  local_58 = (float)uVar16;
                  fStack_54 = (float)((uint64_t)uVar16 >> 0x20);
                  fStack_50 = (float)extraout_XMM0_Qb_09;
                  fStack_4c = (float)((uint64_t)extraout_XMM0_Qb_09 >> 0x20);
                  auVar25._0_4_ = (float)local_48._0_4_ - (float)uVar17;
                  auVar25._4_4_ = (float)local_48._4_4_ - (float)((uint64_t)uVar17 >> 0x20);
                  auVar25._8_4_ = fStack_40 - (float)extraout_XMM0_Qb_10;
                  auVar25._12_4_ = fStack_3c - (float)((uint64_t)extraout_XMM0_Qb_10 >> 0x20);
                  auVar4._4_4_ = (float)local_48._4_4_ - fStack_54;
                  auVar4._0_4_ = (float)local_48._0_4_ - local_58;
                  auVar4._8_4_ = fStack_40 - fStack_50;
                  auVar4._12_4_ = fStack_3c - fStack_4c;
                  _local_48 = blendps(auVar25,auVar4,0xd);
                  plVar13 = (int64_t *)plVar15[6];
                  if ((int64_t *)plVar15[6] == plVar15) {
                    plVar13 = plVar15;
                  }
                  plVar15 = plVar13;
                } while (plVar13 != (int64_t *)0x0);
              }
              FUN_00d50b20();
              FUN_00d05360();
              (**(code **)(*plVar2 + 0x820))();
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < *(int *)(lVar1 + 0xc));
        }
        FUN_000a9680();
      }
    }
  }
  return;
}

