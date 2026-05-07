// Function: FUN_01ec1500
// Address: 01ec1500
// Size: 650 bytes
// Class: GNMultipleValue

uint64_t FUN_01ec1500(uint64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = g_027e7c20;
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar1;
  local_88 = '\x01';
  FUN_01ccaae0(param_1,&local_90);
  plVar4 = local_40;
  if (local_40 == (int64_t *)0x0) {
    plVar2 = (int64_t *)CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
    plVar4 = (int64_t *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      plVar2 = (int64_t *)0x0;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01ec1585;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    plVar2 = (int64_t *)0x0;
  }
LAB_01ec1585:
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_02800140;
  if ((char)plVar2 == '\0') goto LAB_01ec1641;
  if (g_02800140 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar1;
  local_78 = '\x01';
  FUN_01ccaae0(param_1,&local_80);
  plVar2 = local_40;
  if (local_40 == plVar4) {
LAB_01ec1619:
    if (local_38 != '\0') {
LAB_01ec161f:
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar4 = plVar2;
        goto LAB_01ec1619;
      }
      plVar4 = plVar2;
      if (local_38 == '\0') goto LAB_01ec162d;
      goto LAB_01ec161f;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
    plVar4 = plVar2;
  }
LAB_01ec162d:
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
LAB_01ec1641:
  if (plVar4 == (int64_t *)0x0) {
    uVar3 = 0;
  }
  else {
    (**(code **)(*plVar4 + 0x3f8))();
    plVar4 = local_40;
    if (local_40 != (int64_t *)0x0) {
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01ca5d90();
      local_70 = plVar4;
      local_68 = '\0';
      FUN_01d28610();
      plVar2 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      local_50 = plVar2;
      FUN_01ca97a0(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_60 = plVar4;
      local_58 = '\0';
      FUN_01ca86b0();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    uVar3 = CONCAT71((int7)((uint64_t)plVar2 >> 8),plVar4 != (int64_t *)0x0);
    FUN_00d50b20();
  }
  return uVar3 & 0xffffffff;
}

