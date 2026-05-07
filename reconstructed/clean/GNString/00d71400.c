// Function: FUN_00d71400
// Address: 00d71400
// Size: 1766 bytes
// Class: GNString
// String references:
//   "XML encoding of preferences failed"
//   "Preferences cannot be encoded: %@"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00d71400(uint64_t param_1)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t this_ptr;
  int iVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *local_118;
  uint8_t local_110;
  int64_t local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int local_b4;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  int64_t *local_78;
  int64_t *local_70;
  uint local_68;
  int64_t local_60;
  char local_58;
  uint64_t local_50;
  uint32_t local_44;
  int64_t *local_40;
  
  plVar8 = *(int64_t **)(this_ptr + 0x10);
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  uVar5 = (**(code **)(*plVar8 + 0x3c0))();
  local_80 = local_70;
  if ((char)local_68 == '\0') {
    if (local_70 == (int64_t *)0x0) goto LAB_00d714e4;
    FUN_00d50b00();
    if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_00d7147a:
    local_a8 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0x30);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    local_b0 = lVar1;
    cVar3 = (**(code **)(*local_80 + 0x50))();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    local_50 = 0;
    local_44 = 0;
    if (cVar3 == '\0') goto LAB_00d714ea;
LAB_00d71719:
    local_98 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0x18);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    local_a0 = lVar1;
    uVar5 = FUN_01e2f100();
    plVar9 = local_70;
    if (local_70 == (int64_t *)0x0) {
      plVar9 = (int64_t *)0x0;
    }
    else if ((char)local_68 == '\0') {
      uVar5 = FUN_00d50b00();
      local_44 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = local_68 & 0xffffff00;
      local_44 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    plVar6 = *(int64_t **)(this_ptr + 0x18);
    if (plVar6 == plVar9) goto LAB_00d717e7;
  }
  else {
    if (local_70 != (int64_t *)0x0) goto LAB_00d7147a;
LAB_00d714e4:
    local_50 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
LAB_00d714ea:
    local_110 = 0;
    local_118 = plVar8;
    uVar5 = FUN_00d6e310(param_1,&local_118);
    plVar9 = local_70;
    if (local_70 == (int64_t *)0x0) {
      plVar9 = (int64_t *)0x0;
      local_44 = 0;
      plVar6 = *(int64_t **)(this_ptr + 0x30);
      local_78 = (int64_t *)0x0;
      if (plVar6 != local_80) goto LAB_00d7154f;
    }
    else {
      local_44 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      if ((char)local_68 == '\0') {
        FUN_00d50b00();
      }
      plVar6 = *(int64_t **)(this_ptr + 0x30);
      local_78 = plVar9;
      if (plVar6 != local_80) {
LAB_00d7154f:
        plVar9 = local_78;
        if ((char)local_50 == '\0') {
          FUN_00d50b00();
        }
        *(int64_t **)(this_ptr + 0x30) = local_80;
        if (plVar6 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if (plVar9 == (int64_t *)0x0) goto LAB_00d71719;
    if (*(int64_t *)(this_ptr + 0x20) == 0) {
LAB_00d71776:
      plVar6 = *(int64_t **)(this_ptr + 0x18);
      if (plVar6 == plVar9) goto LAB_00d717e7;
    }
    else {
      local_40 = plVar8;
      iVar4 = FUN_00c8d620();
      if (0 < iVar4) {
        iVar7 = 0;
        bVar2 = true;
        local_b4 = iVar4;
        do {
          do {
            plVar6 = (int64_t *)FUN_00c8df10();
          } while (plVar6 == (int64_t *)0x0);
          plVar8 = local_40;
          plVar9 = local_78;
          if (!bVar2) break;
          local_f0 = '\0';
          local_f8 = plVar6;
          FUN_000175c0(param_1,&local_f8);
          plVar8 = local_70;
          if ((char)local_68 == '\0') {
            if (local_70 != (int64_t *)0x0) {
              FUN_00d50b00();
              if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_68 = local_68 & 0xffffff00;
          }
          if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_70 = plVar6;
          if (plVar8 == (int64_t *)0x0) {
            local_68 = (uint)local_68._1_3_ << 8;
            FUN_00ca13a0();
            if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_e8 = plVar8;
            local_e0 = '\0';
            local_68 = (uint)local_68._1_3_ << 8;
            FUN_00ca0840(param_1,&local_70);
            if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          iVar7 = iVar7 + 1;
          bVar2 = iVar7 < local_b4;
          plVar8 = local_40;
          plVar9 = local_78;
        } while (iVar7 != local_b4);
        goto LAB_00d71776;
      }
      plVar6 = *(int64_t **)(this_ptr + 0x18);
      plVar8 = local_40;
      if (plVar6 == plVar9) goto LAB_00d717e7;
    }
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  *(int64_t **)(this_ptr + 0x18) = plVar9;
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_00d717e7:
  local_78 = plVar9;
  (**(code **)(*plVar8 + 0x380))();
  plVar9 = local_70;
  local_d8 = g_0277e5e0;
  if (g_0277e5e0 != 0) {
    FUN_00d50b00();
  }
  local_d0 = '\x01';
  cVar3 = (**(code **)(*plVar9 + 0x50))();
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_00d720a0();
    plVar9 = local_70;
    if (((char)local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_88 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0x18);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    local_90 = lVar1;
    (**(code **)(*plVar9 + 0x5f0))(param_1,&local_90);
    plVar6 = local_70;
    if (local_70 == (int64_t *)0x0) {
      bVar2 = false;
      plVar6 = (int64_t *)0x0;
    }
    else if ((char)local_68 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = local_68 & 0xffffff00;
      bVar2 = true;
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (int64_t *)0x0) {
      local_40 = plVar8;
      (**(code **)(*plVar9 + 0x5d8))();
      local_60 = local_108;
      local_68 = 1;
      local_70 = &g_024c5048;
      local_58 = 0;
      if (local_108 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      FUN_00e828a0();
      local_70 = &g_024c5048;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      plVar8 = local_40;
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  else {
    FUN_00ca5c10();
    plVar6 = local_70;
    if (local_70 == (int64_t *)0x0) {
      plVar6 = (int64_t *)0x0;
      bVar2 = false;
      FUN_00e828a0();
    }
    else {
      if ((char)local_68 == '\0') {
        FUN_00d50b00();
        if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar2 = true;
    }
  }
  local_c0 = '\0';
  local_c8 = plVar8;
  cVar3 = FUN_00c91cf0(param_1,1);
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    FUN_00d7a2d0();
  }
  if ((bVar2) && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = local_78;
  if ((char)local_50 == '\0') {
    FUN_00d50b20();
  }
  if (((char)local_44 != '\0') && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

