// Function: FUN_002d1180
// Address: 002d1180
// Size: 1454 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


uint64_t FUN_002d1180(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int iVar10;
  int64_t this_ptr;
  int64_t lVar11;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68 [8];
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  int64_t local_38;
  
  if (*(int64_t *)(this_ptr + 0xf0) == 0) {
    uVar9 = 0;
    goto LAB_002d172b;
  }
  uVar3 = FUN_00788ea0();
  local_100 = g_026fcf00;
  uVar9 = (uint64_t)uVar3;
  if (((char)uVar3 == '\0') || (param_2 == '\0')) goto LAB_002d172b;
  local_110 = 0;
  local_108 = '\0';
  if (g_026fcf00 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  FUN_01e57260();
  local_88 = 0;
  lVar7 = CONCAT71(uStack_47,local_48);
  if (local_40 == '\0') {
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_88 = '\x01';
  local_90 = lVar7;
  FUN_01f4f940(1,&local_110,0,&local_90);
  lVar11 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)(lVar11 + 0xc) == 1) {
    FUN_00d23310();
    lVar7 = local_70;
    pcVar5 = local_68;
    if (local_68[0] == '\0') {
      pcVar5 = &local_48;
    }
    local_48 = local_68[0];
    *pcVar5 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 == '\0') && (lVar7 != 0)) {
      FUN_00d50b00();
    }
    FUN_00788ba0();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    FUN_002d0ef0();
    lVar7 = local_70;
    if (local_68[0] == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
        goto LAB_002d1413;
      }
LAB_002d161a:
      bVar2 = true;
    }
    else {
      if (local_70 == 0) goto LAB_002d161a;
LAB_002d1413:
      local_38 = lVar11;
      local_68[0] = '\0';
      local_70 = 0;
      local_60 = lVar7;
      local_58 = 0xffffffff;
      local_50 = 0;
      iVar10 = 0;
      while( true ) {
        iVar4 = 0;
        if (iVar10 != 0) {
          if (iVar10 < 1) {
            iVar4 = -iVar10;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - iVar10);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar4 = 0;
          }
          local_58 = CONCAT44(iVar4,(int)local_58);
        }
        lVar7 = (int64_t)(int)local_58;
        iVar10 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar10);
        if (*(int *)(local_60 + 0xc) <= iVar10) break;
        lVar7 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + 8 + lVar7 * 8);
        local_70 = lVar7;
        iVar10 = iVar4;
        if (*(int *)(lVar7 + 0x24) == 2) {
          plVar1 = *(int64_t **)(lVar7 + 0x10);
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific((void*)lVar7);
          plVar8 = plVar1;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            plVar8 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          FUN_0075c8d0();
          local_78 = 0;
          lVar7 = CONCAT71(uStack_47,local_48);
          if (local_40 == '\0') {
            if (lVar7 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_78 = '\x01';
          local_e8 = '\0';
          local_f0 = (int64_t *)0x0;
          local_e0 = (int64_t *)0x0;
          local_d8 = '\0';
          local_80 = lVar7;
          (**(code **)(*plVar8 + 0x488))(&local_e0,&local_f0,1,0);
          if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
            (**(code **)(*local_e0 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
            (**(code **)(*local_f0 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          FUN_002c2560();
          iVar10 = local_58._4_4_;
        }
      }
      FUN_002d7300();
      bVar2 = false;
      lVar11 = local_38;
    }
    FUN_00d403d0();
    lVar7 = g_026fce60;
    if (g_026fce60 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar7;
    local_c8 = '\x01';
    if (this_ptr != 0) {
      FUN_00d50b00();
    }
    local_c0 = 0;
    local_b8 = '\0';
    FUN_00d40470(&local_c0,&stack0xffffffffffffff50,1,3);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar2) {
      FUN_00d50b20();
    }
    if (lVar11 == 0) {
      uVar9 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
      goto LAB_002d172b;
    }
  }
  uVar9 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
  FUN_00d50b20();
LAB_002d172b:
  return uVar9 & 0xffffffff;
}

