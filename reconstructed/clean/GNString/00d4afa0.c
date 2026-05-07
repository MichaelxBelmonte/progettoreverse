// Function: FUN_00d4afa0
// Address: 00d4afa0
// Size: 1117 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00d4afa0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar7;
  float fVar8;
  float fVar9;
  int64_t local_f0;
  uint8_t local_e8;
  int64_t local_e0;
  uint8_t local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  float local_4c;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  local_38 = (int64_t *)((uint64_t)local_38 & 0xffffffff00000000);
  if ((*arg1 == 0) || (iVar6 = FUN_00d8c7a0(), iVar6 == 0)) goto LAB_00d4b3c8;
  cVar4 = FUN_00d495a0();
  if (cVar4 != '\0') {
    local_f0 = *arg1;
    local_e8 = 0;
    FUN_00d496b0(extraout_XMM0_Da,&local_f0);
    if (local_48 != (int64_t *)0x0) {
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
      uVar7 = FUN_00d459e0();
      local_38 = (int64_t *)CONCAT44(local_38._4_4_,uVar7);
      FUN_00d50b20();
      goto LAB_00d4b3c8;
    }
  }
  lVar2 = g_0277dcb8;
  if (g_0277dcb8 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar2;
  local_c8 = '\x01';
  cVar4 = FUN_00d90eb0();
  lVar2 = g_0277dcc0;
  cVar5 = '\x01';
  if (cVar4 == '\0') {
    if (g_0277dcc0 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar2;
    local_b8 = '\x01';
    cVar5 = FUN_00d90eb0();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_0277dcc8;
  fVar8 = g_023b26e8;
  if (cVar5 == '\0') {
    if (g_0277dcc8 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar2;
    local_a8 = '\x01';
    cVar4 = FUN_00d90eb0();
    lVar2 = g_0277dcd0;
    cVar5 = '\x01';
    if (cVar4 == '\0') {
      if (g_0277dcd0 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar2;
      local_98 = '\x01';
      cVar5 = FUN_00d90eb0();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_0277dcd8;
    if (cVar5 == '\0') {
      local_e0 = *arg1;
      local_d8 = 0;
      FUN_00d498d0();
      plVar3 = local_48;
      plVar1 = (int64_t *)*arg1;
      if (plVar1 == local_48) {
        if (((char)arg1[1] == '\0') && (local_48 != (int64_t *)0x0)) {
          local_38 = arg1 + 1;
          if (local_40 == '\0') {
            FUN_00d50b00();
          }
          goto LAB_00d4b346;
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = arg1 + 1;
        lVar2 = arg1[1];
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          *arg1 = (int64_t)plVar3;
          if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          *arg1 = (int64_t)local_48;
          if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_00d4b346:
        *(void*)local_38 = 1;
      }
      local_60 = *arg1;
      local_58 = '\0';
      FUN_00ddb860();
      cVar4 = (**(code **)(*local_48 + 0x470))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        local_4c = 0.0;
      }
      fVar9 = *(float *)(this_ptr + 0x10);
      if (*(float *)(this_ptr + 0x10) <= local_4c) {
        fVar9 = local_4c;
      }
      fVar8 = *(float *)(this_ptr + 0x14);
      if (fVar9 <= *(float *)(this_ptr + 0x14)) {
        fVar8 = fVar9;
      }
    }
    else {
      if (g_0277dcd8 != 0) {
        FUN_00d50b00();
      }
      local_90 = lVar2;
      local_88 = '\x01';
      cVar4 = FUN_00d90eb0();
      lVar2 = g_0277dce0;
      cVar5 = '\x01';
      if (cVar4 == '\0') {
        if (g_0277dce0 != 0) {
          FUN_00d50b00();
        }
        local_80 = lVar2;
        local_78 = '\x01';
        cVar4 = FUN_00d90eb0();
        lVar2 = g_026fce10;
        cVar5 = '\x01';
        if (cVar4 == '\0') {
          if (g_026fce10 != 0) {
            FUN_00d50b00();
          }
          local_70 = lVar2;
          local_68 = '\x01';
          cVar5 = FUN_00d90eb0();
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      fVar8 = g_02391074;
      if (cVar5 == '\0') {
        fVar8 = g_02391078;
      }
    }
  }
  local_38 = (int64_t *)(uint64_t)(uint)fVar8;
LAB_00d4b3c8:
  return (uint64_t)local_38 & 0xffffffff;
}

