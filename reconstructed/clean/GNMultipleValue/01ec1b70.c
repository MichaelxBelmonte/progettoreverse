// Function: FUN_01ec1b70
// Address: 01ec1b70
// Size: 891 bytes
// Class: GNMultipleValue

uint64_t FUN_01ec1b70(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  char *pcVar4;
  uint64_t uVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t local_90;
  char local_88;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  FUN_01ebf9f0();
  local_68 = 0;
  local_70 = CONCAT71(uStack_7f,local_80);
  if (local_78 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_68 = '\x01';
  FUN_01ebfd60();
  local_58 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_58 = '\x01';
  local_60 = local_90;
  FUN_01caaf60(&local_60,&local_70);
  lVar6 = local_40;
  if (local_40 == 0) {
    bVar1 = true;
    lVar6 = 0;
  }
  else {
    if (local_38[0] == '\0') {
      FUN_00d50b00();
      bVar1 = false;
      if ((local_38[0] == '\0') || (local_40 == 0)) goto LAB_01ec1c60;
      FUN_00d50b20();
    }
    else {
      local_38[0] = '\0';
    }
    bVar1 = false;
  }
LAB_01ec1c60:
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_027e7c20;
  if (lVar6 == 0) {
    uVar5 = 0;
    goto LAB_01ec1ed7;
  }
  if (*(int *)(lVar6 + 0xc) == 1) {
    if (g_027e7c20 != 0) {
      FUN_00d50b00();
    }
    FUN_01ccab60();
    lVar6 = local_40;
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_02800140;
    if (lVar6 == 0) {
      if (g_02800140 != 0) {
        FUN_00d50b00();
      }
      FUN_01ccaae0();
      lVar6 = local_40;
      if (local_40 == 0) {
        bVar2 = true;
        lVar6 = 0;
      }
      else {
        if (local_38[0] == '\0') {
          FUN_00d50b00();
          bVar2 = false;
          if ((local_38[0] == '\0') || (local_40 == 0)) goto LAB_01ec1e9c;
          FUN_00d50b20();
        }
        else {
          local_38[0] = '\0';
        }
        bVar2 = false;
      }
LAB_01ec1e9c:
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (!bVar2 && lVar6 != 0) {
        FUN_00d50b20();
      }
      goto LAB_01ec1ec8;
    }
    FUN_00d23340();
    pcVar4 = local_38;
    if (local_38[0] == '\0') {
      pcVar4 = &local_80;
    }
    local_80 = local_38[0];
    *pcVar4 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_48 = 0;
    lVar6 = g_027e7c20;
    if (local_80 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        lVar6 = g_027e7c20;
      }
    }
    else {
      local_80 = '\0';
    }
    local_48 = '\x01';
    local_50 = local_40;
    g_027e7c20 = lVar6;
    if (lVar6 != 0) {
      local_48 = '\x01';
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x4d0))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = CONCAT71((int7)((uint64_t)lVar6 >> 8),1);
  }
  else {
LAB_01ec1ec8:
    uVar5 = 0;
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
LAB_01ec1ed7:
  return uVar5 & 0xffffffff;
}

