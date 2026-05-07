// Function: FUN_01d585e0
// Address: 01d585e0
// Size: 929 bytes
// Class: GNMultipleValue

uint64_t FUN_01d585e0(uint64_t param_1)

{
  char cVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_b0;
  char local_a8;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  uint64_t local_50;
  int64_t local_48;
  char local_40;
  char local_31;
  
  if (*(char *)((int64_t)this_ptr + 0x1f1) == '\0') {
LAB_01d5892a:
    local_60 = *arg1;
    local_58 = '\0';
    uVar2 = FUN_01d83480();
    uVar8 = (uint64_t)uVar2;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d384d0();
    lVar4 = g_027f07c8;
    if (g_027f07c8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = FUN_01cac500();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      local_50 = 0;
      lVar4 = 0;
    }
    else {
      FUN_01d384d0();
      lVar3 = g_027f07c8;
      if (g_027f07c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = FUN_01cac500();
      if (lVar4 == 0) {
        local_50 = 0;
      }
      else {
        local_50 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
        FUN_00d50b00();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d384d0();
    local_80 = g_026fcec0;
    if (g_026fcec0 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_01cacbe0(param_1,&local_80);
    lVar3 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      if (lVar4 == 0) goto LAB_01d5892a;
    }
    else {
      local_70 = lVar3;
      local_68 = '\0';
      uVar5 = FUN_01d4f320();
      lVar7 = local_48;
      if (local_48 == lVar4) {
        uVar6 = local_50;
        lVar7 = lVar4;
        cVar1 = (char)local_50;
        if (((char)local_50 == '\0') && (cVar1 = (char)local_50, local_48 != 0)) {
          if (local_40 != '\0') goto LAB_01d58825;
          local_31 = '\x01';
          uVar6 = FUN_00d50b00();
          cVar1 = local_31;
        }
LAB_01d5887d:
        local_31 = cVar1;
        lVar4 = lVar7;
        if ((local_40 == '\0') || (local_48 == 0)) {
          local_50 = CONCAT71((int7)((uint64_t)uVar6 >> 8),local_31);
        }
        else {
          uVar5 = FUN_00d50b20();
          local_50 = CONCAT71((int7)((uint64_t)uVar5 >> 8),local_31);
        }
      }
      else {
        if (local_40 == '\0') {
          uVar6 = uVar5;
          if (local_48 != 0) {
            uVar6 = FUN_00d50b00();
          }
          local_31 = '\x01';
          cVar1 = local_31;
          if (((char)local_50 != '\0') && (lVar4 != 0)) {
            uVar6 = FUN_00d50b20();
            cVar1 = local_31;
          }
          goto LAB_01d5887d;
        }
        if (((char)local_50 != '\0') && (lVar4 != 0)) {
          uVar5 = FUN_00d50b20();
        }
LAB_01d58825:
        local_40 = '\0';
        local_50 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        lVar4 = lVar7;
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 == 0) {
        FUN_00d50b20();
        goto LAB_01d5892a;
      }
    }
    lVar7 = this_ptr[0x39];
    if (lVar7 != lVar4) {
      FUN_00d50b00();
      this_ptr[0x39] = lVar4;
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x620))();
    }
    (**(code **)(*this_ptr + 0x620))();
    FUN_01d11e80();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
    if ((char)local_50 != '\0') {
      FUN_00d50b20();
    }
  }
  return uVar8 & 0xffffffff;
}

