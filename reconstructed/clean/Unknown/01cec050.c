// Function: FUN_01cec050
// Address: 01cec050
// Size: 548 bytes
// Class: Unknown

void FUN_01cec050(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int64_t this_ptr;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint8_t auVar8 [16];
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar9 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint8_t in_XMM1 [16];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint8_t local_68 [16];
  int64_t *local_58;
  char local_50;
  uint8_t local_48 [16];
  
  (**(code **)(**(int64_t **)(this_ptr + 0x148) + 0x4d8))();
  auVar8 = blendps(ZEXT816(0),in_XMM1,2);
  if (0 < *(int *)(*(int64_t *)(this_ptr + 0x150) + 0xc)) {
    iVar3 = 0;
    do {
      uVar7 = FUN_01ce87d0();
      auVar9._0_4_ = (float)uVar7 + auVar8._0_4_;
      auVar9._4_4_ = (float)((uint64_t)uVar7 >> 0x20) + auVar8._4_4_;
      auVar9._8_4_ = (float)extraout_XMM0_Qb + auVar8._8_4_;
      auVar9._12_4_ = (float)((uint64_t)extraout_XMM0_Qb >> 0x20) + auVar8._12_4_;
      auVar8 = blendps(auVar8,auVar9,0xd);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*(int64_t *)(this_ptr + 0x150) + 0xc));
  }
  local_48 = auVar8;
  FUN_01d97870();
  (**(code **)(*local_58 + 0x4d8))();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  blendps(auVar8,local_48,2);
  (**(code **)(**(int64_t **)(this_ptr + 0x148) + 0x4d0))();
  if (*(int *)(*(int64_t *)(this_ptr + 0x150) + 0xc) < 1) {
    local_48[0] = '\0';
    lVar5 = 0;
  }
  else {
    local_68 = ZEXT816(0);
    lVar4 = 0;
    lVar5 = 0;
    uVar6 = 0;
    do {
      uVar7 = FUN_01ce87d0();
      lVar2 = *(int64_t *)(*(int64_t *)(this_ptr + 0x150) + 0x10);
      lVar1 = *(int64_t *)(lVar2 + lVar4 * 8);
      if (lVar5 == lVar1) {
        lVar1 = lVar5;
        if (((char)uVar6 == '\0') && (lVar5 != 0)) {
          local_48._1_7_ = (int7)((uint64_t)lVar2 >> 8);
          local_48[0] = 1;
          FUN_00d50b00();
        }
        else {
          local_48._0_8_ = uVar6;
        }
      }
      else {
        if (lVar1 != 0) {
          lVar2 = FUN_00d50b00();
        }
        local_48._1_7_ = (int7)((uint64_t)lVar2 >> 8);
        local_48[0] = 1;
        if (((char)uVar6 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar5 = lVar1;
      (**(code **)(**(int64_t **)(lVar5 + 0x30) + 0x4d0))();
      local_78 = (float)uVar7;
      fStack_74 = (float)((uint64_t)uVar7 >> 0x20);
      fStack_70 = (float)extraout_XMM0_Qb_00;
      fStack_6c = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
      auVar8._0_4_ = local_78 + local_68._0_4_;
      auVar8._4_4_ = fStack_74 + local_68._4_4_;
      auVar8._8_4_ = fStack_70 + local_68._8_4_;
      auVar8._12_4_ = fStack_6c + local_68._12_4_;
      local_68 = blendps(local_68,auVar8,0xd);
      lVar4 = lVar4 + 1;
      uVar7 = local_48._0_8_;
      uVar6 = uVar7 & 0xffffffff;
    } while (lVar4 < *(int *)(*(int64_t *)(this_ptr + 0x150) + 0xc));
  }
  FUN_01d97870();
  FUN_01cf5a00();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return;
}

