// Function: FUN_002813d0
// Address: 002813d0
// Size: 1256 bytes
// Class: Unknown

void FUN_002813d0(void)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  char *pcVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t unaff_R14;
  undefined7 uVar9;
  uint64_t uVar8;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint8_t local_d0;
  int64_t local_c8;
  uint64_t local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  undefined7 uStack_9f;
  char local_98;
  int64_t local_90;
  char local_88;
  void*local_80;
  int64_t local_78;
  int64_t local_70;
  char local_68 [8];
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  uint32_t local_44;
  int64_t local_40;
  char local_38;
  
  FUN_01f28c30();
  lVar7 = local_70;
  if ((((local_68[0] == '\0') && (local_70 != 0)) && (FUN_00d50b00(), local_68[0] != '\0')) &&
     (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_a8 = lVar7;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  local_b8 = g_026fb7e8;
  local_80 = puVar3;
  if (g_026fb7e8 != 0) {
    FUN_00d50b00();
  }
  local_b0 = '\x01';
  FUN_01d5e6e0();
  local_78 = local_70;
  if (local_70 == 0) {
    local_44 = 1;
    local_78 = 0;
    uVar8 = 0;
  }
  else {
    uVar9 = (undefined7)((uint64_t)unaff_R14 >> 8);
    if (local_68[0] == '\0') {
      FUN_00d50b00();
      local_44 = 0;
      uVar8 = CONCAT71(uVar9,1);
      if ((local_68[0] == '\0') || (local_70 == 0)) goto LAB_002814e1;
      FUN_00d50b20();
    }
    else {
      local_68[0] = '\0';
    }
    uVar8 = CONCAT71(uVar9,1);
    local_44 = 0;
  }
LAB_002814e1:
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_44 == '\0') {
    local_c0 = uVar8;
    FUN_01d64cb0();
    FUN_01d5e2b0();
    lVar4 = local_70;
    if (local_68[0] == '\0') {
      if (((local_70 != 0) && (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68[0] = '\0';
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    puVar3 = local_80;
    if (lVar4 != 0) {
      local_68[0] = '\0';
      local_70 = 0;
      local_c8 = lVar4;
      local_60 = lVar4;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar6 = -local_58._4_4_;
          }
          else {
            iVar6 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar6);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar6 = 0;
          }
          local_58 = CONCAT44(iVar6,(int)local_58);
        }
        lVar4 = (int64_t)(int)local_58;
        iVar6 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar6);
        if (*(int *)(local_60 + 0xc) <= iVar6) break;
        local_70 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + 8 + lVar4 * 8);
        FUN_01d66da0();
        lVar4 = g_02726cf0;
        if (g_02726cf0 != 0) {
          FUN_00d50b00();
        }
        local_40 = lVar4;
        local_38 = '\0';
        cVar2 = FUN_00c9ff50();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          local_40 = local_70;
          local_38 = '\0';
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_002a0a30();
      FUN_00d50b20();
      puVar3 = local_80;
    }
    while (*(int *)((int64_t)puVar3 + 0xc) != 0) {
      FUN_01d64cb0();
      FUN_00d23340();
      lVar7 = local_70;
      local_a0 = local_68[0];
      pcVar5 = local_68;
      if (local_68[0] == '\0') {
        pcVar5 = &local_a0;
      }
      *pcVar5 = '\0';
      if ((local_68[0] != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      local_88 = 0;
      if ((local_a0 == '\0') && (lVar7 != 0)) {
        FUN_00d50b00();
      }
      local_90 = lVar7;
      local_88 = '\x01';
      FUN_01d5dde0();
      lVar7 = local_a8;
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      puVar3 = local_80;
      FUN_00d23740();
    }
    FUN_01d64cb0();
    lVar1 = local_70;
    lVar4 = g_026fb7f0;
    if (local_68[0] == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
        lVar4 = g_026fb7f0;
      }
    }
    else {
      local_68[0] = '\0';
    }
    local_d0 = 1;
    local_d8 = lVar1;
    g_026fb7f0 = lVar4;
    if (lVar4 != 0) {
      local_d0 = 1;
      FUN_00d50b00();
    }
    local_e0 = 1;
    local_e8 = lVar4;
    FUN_0027b070(0,&local_e8,1);
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if ((char)local_44 == '\0' && local_78 != 0) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  return;
}

