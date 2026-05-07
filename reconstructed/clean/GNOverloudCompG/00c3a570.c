// Function: FUN_00c3a570
// Address: 00c3a570
// Size: 1510 bytes
// Class: GNOverloudCompG
// === GNOverloudCompG properties ===
//   float           _minValue
//   float           _maxValue
//   float           _offValue


uint64_t FUN_00c3a570(uint64_t param_1,byte param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da_00;
  float fVar8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
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
  float local_7c;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  float local_44;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  plVar2 = local_40;
  lVar1 = g_027ef7e8;
  if (g_027ef7e8 != 0) {
    FUN_00d50b00();
  }
  bVar3 = (**(code **)(*plVar2 + 0x50))();
  uVar7 = extraout_XMM0_Da;
  if (lVar1 != 0) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((bVar3 & param_2) == 0) {
    local_90 = *arg1;
    local_88 = '\0';
    uVar5 = FUN_01d16950(uVar7,param_2);
    uVar6 = (uint64_t)uVar5;
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_00c3ab42;
  }
  FUN_01ccad60();
  iVar4 = (**(code **)(*local_40 + 0x920))();
  uVar7 = extraout_XMM0_Da_00;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  lVar1 = g_027e7c20;
  if (iVar4 == 0) {
    if (g_027e7c20 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_c0 = lVar1;
    local_b8 = '\x01';
    uVar7 = (**(code **)(*this_ptr + 0x4c8))(uVar7,&local_c0);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (uVar7 = FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        uVar7 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      uVar7 = FUN_00d46dc0((int)this_ptr[0xd]);
      local_58 = local_40;
      local_50 = 0;
      local_b0 = g_027e7c20;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          uVar7 = FUN_00d50b00();
          local_b0 = g_027e7c20;
        }
      }
      else {
        local_38 = '\0';
      }
      local_50 = '\x01';
      g_027e7c20 = local_b0;
      if (local_b0 != 0) {
        local_50 = '\x01';
        uVar7 = FUN_00d50b00();
      }
      local_a8 = '\x01';
      (**(code **)(*this_ptr + 0x4d0))(uVar7,&local_b0);
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar7 = FUN_00d50b20();
    }
  }
  else {
    local_7c = *(float *)(this_ptr + 0xc);
    fVar8 = *(float *)((int64_t)this_ptr + 100);
    local_44 = fVar8;
    if (g_027e7c20 != 0) {
      fVar8 = (float)FUN_00d50b00();
    }
    local_f0 = lVar1;
    local_e8 = '\x01';
    FUN_01ccaae0(fVar8,&local_f0);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    local_44 = (local_44 - local_7c) * g_0239011c + local_7c;
    if (plVar2 != (int64_t *)0x0) {
      uVar7 = FUN_01d836c0();
      plVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          uVar7 = FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            uVar7 = FUN_00d50b20();
          }
          goto LAB_00c3a856;
        }
      }
      else if (local_40 != (int64_t *)0x0) {
LAB_00c3a856:
        local_70 = 0;
        lVar1 = this_ptr[0xe];
        if (lVar1 != 0) {
          uVar7 = FUN_00d50b00();
        }
        local_70 = '\x01';
        local_78 = lVar1;
        (**(code **)(*plVar2 + 0x88))(uVar7,&local_78);
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          local_e0 = plVar2;
          local_d8 = '\0';
          local_44 = (float)FUN_00c71d60();
          if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    uVar7 = FUN_00d46dc0(local_44);
    local_68 = local_40;
    local_60 = 0;
    local_d0 = g_027e7c20;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        uVar7 = FUN_00d50b00();
        local_d0 = g_027e7c20;
      }
    }
    else {
      local_38 = '\0';
    }
    local_60 = '\x01';
    g_027e7c20 = local_d0;
    if (local_d0 != 0) {
      local_60 = '\x01';
      uVar7 = FUN_00d50b00();
    }
    local_c8 = '\x01';
    uVar7 = (**(code **)(*this_ptr + 0x4d0))(uVar7,&local_d0);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  lVar1 = g_027e7c20;
  if (g_027e7c20 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_a0 = lVar1;
  local_98 = '\x01';
  FUN_01ccaae0(uVar7,&local_a0);
  FUN_01d243a0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  uVar6 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
LAB_00c3ab42:
  return uVar6 & 0xffffffff;
}

