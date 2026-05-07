// Function: FUN_01e49f80
// Address: 01e49f80
// Size: 934 bytes
// Class: Unknown

void* FUN_01e49f80(uint64_t param_1)

{
  uint8_t auVar1 [16];
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  char cVar6;
  int64_t *plVar7;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar13 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar14 [16];
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint8_t local_58 [8];
  uint64_t uStack_50;
  int64_t *local_48;
  char local_40;
  void*local_38;
  
  pcVar5 = g_02572370;
  local_38 = (void*)0x0;
  bVar4 = false;
  plVar10 = (int64_t *)0x0;
  bVar2 = false;
  do {
    if (plVar10 == arg1) {
      bVar3 = bVar2;
      if ((!bVar2) && (arg1 != (int64_t *)0x0)) {
        bVar3 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (arg1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar3 = true;
      if ((bVar2) && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    uStack_50 = in_XMM0_Qb;
    local_58 = (uint8_t  [8])param_1;
    plVar10 = arg1;
    bVar2 = bVar3;
    while( true ) {
      (**(code **)(*plVar10 + 0x498))();
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      if (local_48 == (int64_t *)0x0) break;
      plVar7 = plVar10;
      if ((int64_t *)plVar10[6] == local_48) {
        uVar11 = (**(code **)(*plVar10 + 0x4d8))();
        uVar12 = (**(code **)(*plVar10 + 0x4d8))();
        local_88 = (float)uVar11;
        fStack_84 = (float)((uint64_t)uVar11 >> 0x20);
        fStack_80 = (float)extraout_XMM0_Qb_01;
        fStack_7c = (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
        auVar16._0_4_ = local_88 + (float)local_58._0_4_;
        auVar16._4_4_ = fStack_84 + (float)local_58._4_4_;
        auVar16._8_4_ = fStack_80 + (float)uStack_50;
        auVar16._12_4_ = fStack_7c + uStack_50._4_4_;
        auVar14._0_4_ = (float)uVar12 + (float)local_58._0_4_;
        auVar14._4_4_ = (float)((uint64_t)uVar12 >> 0x20) + (float)local_58._4_4_;
        auVar14._8_4_ = (float)extraout_XMM0_Qb_02 + (float)uStack_50;
        auVar14._12_4_ = (float)((uint64_t)extraout_XMM0_Qb_02 >> 0x20) + uStack_50._4_4_;
        _local_58 = blendps(auVar14,auVar16,0xd);
      }
      else {
        do {
          cVar6 = (**(code **)(*plVar7 + 0x4b8))();
          plVar9 = local_48;
          if (cVar6 != '\0') break;
          uVar11 = (**(code **)(*plVar7 + 0x4d8))();
          uVar12 = (**(code **)(*plVar7 + 0x4d8))();
          local_88 = (float)uVar11;
          fStack_84 = (float)((uint64_t)uVar11 >> 0x20);
          fStack_80 = (float)extraout_XMM0_Qb;
          fStack_7c = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
          auVar15._0_4_ = local_88 + (float)local_58._0_4_;
          auVar15._4_4_ = fStack_84 + (float)local_58._4_4_;
          auVar15._8_4_ = fStack_80 + (float)uStack_50;
          auVar15._12_4_ = fStack_7c + uStack_50._4_4_;
          auVar13._0_4_ = (float)uVar12 + (float)local_58._0_4_;
          auVar13._4_4_ = (float)((uint64_t)uVar12 >> 0x20) + (float)local_58._4_4_;
          auVar13._8_4_ = (float)extraout_XMM0_Qb_00 + (float)uStack_50;
          auVar13._12_4_ = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20) + uStack_50._4_4_;
          _local_58 = blendps(auVar13,auVar15,0xd);
          plVar8 = (int64_t *)plVar7[6];
          if ((int64_t *)plVar7[6] == plVar7) {
            plVar8 = plVar7;
          }
          plVar7 = plVar8;
        } while (plVar8 != (int64_t *)0x0);
        do {
          cVar6 = (**(code **)(*plVar9 + 0x4b8))();
          if (cVar6 != '\0') break;
          uVar11 = (**(code **)(*plVar9 + 0x4d8))();
          uVar12 = (**(code **)(*plVar9 + 0x4d8))();
          local_88 = (float)uVar11;
          fStack_84 = (float)((uint64_t)uVar11 >> 0x20);
          fStack_80 = (float)extraout_XMM0_Qb_03;
          fStack_7c = (float)((uint64_t)extraout_XMM0_Qb_03 >> 0x20);
          auVar17._0_4_ = (float)local_58._0_4_ - (float)uVar12;
          auVar17._4_4_ = (float)local_58._4_4_ - (float)((uint64_t)uVar12 >> 0x20);
          auVar17._8_4_ = (float)uStack_50 - (float)extraout_XMM0_Qb_04;
          auVar17._12_4_ = uStack_50._4_4_ - (float)((uint64_t)extraout_XMM0_Qb_04 >> 0x20);
          auVar1._4_4_ = (float)local_58._4_4_ - fStack_84;
          auVar1._0_4_ = (float)local_58._0_4_ - local_88;
          auVar1._8_4_ = (float)uStack_50 - fStack_80;
          auVar1._12_4_ = uStack_50._4_4_ - fStack_7c;
          _local_58 = blendps(auVar17,auVar1,0xd);
          plVar7 = (int64_t *)plVar9[6];
          if ((int64_t *)plVar9[6] == plVar9) {
            plVar7 = plVar9;
          }
          plVar9 = plVar7;
        } while (plVar7 != (int64_t *)0x0);
      }
      if (local_48 == plVar10) {
        plVar7 = plVar10;
        bVar3 = bVar2;
        if (!bVar2) {
          FUN_00d50b00();
          bVar3 = true;
        }
      }
      else {
        FUN_00d50b00();
        plVar7 = local_48;
        bVar3 = true;
        if ((bVar2) && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
          bVar3 = true;
        }
      }
      bVar2 = bVar3;
      FUN_00d50b20();
      plVar10 = plVar7;
    }
    if ((plVar10 == arg1) || (*(char *)((int64_t)plVar10 + 0xa9) == '\0')) {
      *(void*)(this_ptr + 1) = 0;
      if ((!bVar2) && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      *this_ptr = plVar10;
      *(void*)(this_ptr + 1) = 1;
      if ((bVar4) && (local_38 != (void*)0x0)) {
        FUN_00d50b20();
      }
      return this_ptr;
    }
    if (local_38 == (void*)0x0) {
      local_38 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_38 = &g_02572358;
      (*pcVar5)();
      bVar4 = true;
    }
    local_40 = '\0';
    FUN_00d21140();
    local_48 = plVar10;
  } while( true );
}

