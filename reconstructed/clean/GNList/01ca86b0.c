// Function: FUN_01ca86b0
// Address: 01ca86b0
// Size: 1931 bytes
// Class: GNList
// String references:
//   "%@.%@.gids"
//   "%@.gids"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01ca86b0(void)

{
  int64_t *plVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t **pplVar5;
  int64_t *plVar6;
  int iVar7;
  int64_t *arg1;
  uint64_t local_108;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  int64_t *local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  uint64_t local_58;
  int local_50;
  uint32_t uStack_4c;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (*arg1 == 0) {
    return;
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  if ((int64_t *)*arg1 != (int64_t *)0x0) {
    local_68._0_4_ = (uint)local_68 & 0xffffff00;
    local_70 = (int64_t *)0x0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = (int64_t *)*arg1;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar7 = -local_58._4_4_;
        }
        else {
          iVar7 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar7);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar7 = 0;
        }
        local_58 = CONCAT44(iVar7,(int)local_58);
      }
      lVar4 = (int64_t)(int)local_58;
      iVar7 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar7);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar7) break;
      local_70 = *(int64_t **)(local_60[2] + 8 + lVar4 * 8);
      (**(code **)(*local_70 + 0x60))();
      plVar6 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01ca87f0;
        }
      }
      else if (local_40 != (int64_t *)0x0) {
LAB_01ca87f0:
        local_38 = '\0';
        local_40 = plVar6;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    FUN_00083b20();
  }
  if (*(int *)((int64_t)puVar3 + 0xc) == 0) goto LAB_01ca8e3b;
  FUN_00d23310();
  plVar6 = local_70;
  local_40 = (int64_t *)CONCAT71(local_40._1_7_,(char)local_68);
  pplVar5 = &local_40;
  if ((char)local_68 != '\0') {
    pplVar5 = &local_68;
  }
  *(void*)pplVar5 = 0;
  if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_90 = plVar6;
  if (((char)local_40 == '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00049200();
  (**(code **)(*plVar6 + 0x18))();
  (**(code **)(*plVar6 + 0x5f0))();
  local_b8 = local_70;
  if ((char)local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_68._0_4_ = (uint)local_68 & 0xffffff00;
  }
  if (local_b8 != (int64_t *)0x0) {
    FUN_00d23310();
    plVar6 = local_70;
    pplVar5 = &local_68;
    if ((char)local_68 == '\0') {
      pplVar5 = &local_c8;
    }
    local_c8._0_1_ = (char)local_68;
    *(void*)pplVar5 = 0;
    if (((char)local_68 != '\0') && (plVar6 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d4efa0();
    FUN_00c7e7b0();
    local_88 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_c8 != '\0') && (plVar6 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_88 != (int64_t *)0x0) {
      FUN_00ce7000();
      plVar6 = local_70;
      if (((char)local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b00();
        if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar1 = local_88;
      if (*(int *)((int64_t)puVar3 + 0xc) == 1) {
        (**(code **)(*local_90 + 0x388))();
        local_108 = CONCAT71(local_c8._1_7_,(char)local_c8);
        FUN_00083ea0(2,&local_108);
        FUN_00d8cb40();
        local_b0 = local_80;
        local_a8 = 0;
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_a8 = '\x01';
        (**(code **)(*plVar6 + 0x400))();
        if (plVar6 == local_40) {
LAB_01ca8cb7:
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar6 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
            goto LAB_01ca8cb7;
          }
          FUN_00d50b20();
          local_38 = '\0';
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        local_70 = (int64_t *)&g_0253d630;
        if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
          FUN_00d50b20();
        }
        local_70 = &g_024c5048;
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (CONCAT71(local_c8._1_7_,(char)local_c8) != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68._0_4_ = 1;
        local_70 = &g_024c5048;
        local_58 = local_58 & 0xffffffffffffff00;
        FUN_00d50b00();
        local_60 = plVar1;
        local_58 = CONCAT71(local_58._1_7_,1);
        FUN_00d8cb40();
        local_a0 = local_80;
        local_98 = 0;
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_98 = '\x01';
        (**(code **)(*plVar6 + 0x400))();
        if (plVar6 == local_40) {
LAB_01ca8c31:
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar6 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
            goto LAB_01ca8c31;
          }
          FUN_00d50b20();
          local_38 = '\0';
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        local_70 = &g_024c5048;
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      cVar2 = FUN_00c91cf0();
      lVar4 = g_026fcec0;
      if (cVar2 != '\0') {
        if (g_026fcec0 != 0) {
          FUN_00d50b00();
        }
        FUN_01ca93d0();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_90 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01ca8e3b:
  FUN_00d50b20();
  return;
}

