// Function: FUN_01ebfd60
// Address: 01ebfd60
// Size: 734 bytes
// Class: GNMultipleValue

void FUN_01ebfd60(uint64_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  char cVar5;
  undefined7 uVar6;
  void*this_ptr;
  int64_t lVar7;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  uint64_t local_48;
  int64_t local_40;
  char local_38;
  
  lVar7 = g_027e7c20;
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar7;
  local_90 = '\x01';
  FUN_01ccab60(param_1,&local_98);
  lVar7 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_02800140;
  lVar2 = g_027e7c20;
  if (lVar7 == 0) {
    if (g_02800140 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar3;
    local_60 = '\x01';
    uVar4 = FUN_01ccaae0(param_1,&local_68);
    lVar7 = local_40;
    if (local_40 == 0) {
      bVar1 = true;
      lVar7 = 0;
      local_48 = 0;
    }
    else {
      if (local_38 == '\0') {
        uVar4 = FUN_00d50b00();
        bVar1 = false;
        local_48 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
        if ((local_38 == '\0') || (local_40 == 0)) goto LAB_01ebffe2;
        FUN_00d50b20();
      }
      else {
        local_38 = '\0';
        local_48 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      }
      bVar1 = false;
    }
LAB_01ebffe2:
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    uVar4 = local_48;
    if (!bVar1) {
      cVar5 = (char)local_48;
      FUN_01d25f70();
      goto LAB_01ec001b;
    }
  }
  else {
    if (g_027e7c20 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar2;
    local_80 = '\x01';
    FUN_01ccaae0(param_1,&local_88);
    lVar7 = local_40;
    if (local_40 == 0) {
      lVar7 = 0;
      uVar4 = 0;
    }
    else {
      uVar6 = (undefined7)((uint64_t)lVar2 >> 8);
      if (local_38 == '\0') {
        FUN_00d50b00();
        uVar4 = CONCAT71(uVar6,1);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        uVar4 = CONCAT71(uVar6,1);
      }
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d25f70();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01ebfef5;
      }
    }
    else if (local_40 != 0) {
LAB_01ebfef5:
      lVar2 = g_027e7c20;
      local_48 = uVar4;
      if (g_027e7c20 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar2;
      local_70 = '\x01';
      FUN_01ccab60(param_1,&local_78);
      local_58 = local_40;
      local_50 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_50 = '\x01';
      cVar5 = (char)local_48;
      FUN_00c85450(param_1,&local_58);
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_01ec001b;
    }
  }
  cVar5 = (char)uVar4;
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_01ec001b:
  if ((cVar5 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return;
}

