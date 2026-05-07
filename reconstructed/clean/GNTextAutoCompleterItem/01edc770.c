// Function: FUN_01edc770
// Address: 01edc770
// Size: 880 bytes
// Class: GNTextAutoCompleterItem

uint64_t FUN_01edc770(uint64_t param_1,char param_2)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
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
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  plVar8 = local_40;
  lVar2 = g_027fe828;
  if (g_027fe828 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar8 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027e7c20;
  if (cVar3 == '\0') {
    local_78 = *arg1;
    local_70 = '\0';
    uVar4 = FUN_01d827c0(param_1,param_2);
    uVar7 = (uint64_t)uVar4;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_01edcacb;
  }
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar2;
  local_a0 = '\x01';
  FUN_01ccaae0(param_1,&local_a8);
  plVar8 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  uVar7 = CONCAT71((int7)((uint64_t)arg1 >> 8),1);
  if ((plVar8 == (int64_t *)0x0) || (param_2 == '\0')) goto LAB_01edcacb;
  FUN_01ccad60();
  plVar8 = local_40;
  if ((local_38 == '\0') &&
     (((local_40 != (int64_t *)0x0 && (FUN_00d50b00(), local_38 != '\0')) &&
      (local_40 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  uVar6 = (**(code **)(*plVar8 + 0x960))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01edc94d;
    }
LAB_01edc985:
    local_48 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
LAB_01edc98b:
    plVar8 = (int64_t *)0x0;
    bVar1 = false;
  }
  else {
    if (local_40 == (int64_t *)0x0) goto LAB_01edc985;
LAB_01edc94d:
    iVar5 = FUN_00d8c7a0();
    if (iVar5 == 0) {
      local_48 = 0;
      goto LAB_01edc98b;
    }
    (**(code **)(*plVar8 + 0x960))();
    local_58 = local_68;
    local_50 = 0;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_50 = '\x01';
    FUN_01d51a40();
    plVar8 = local_40;
    if (local_40 == (int64_t *)0x0) {
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    local_48 = 0;
  }
  lVar2 = g_027e7c20;
  local_90 = '\0';
  local_98 = plVar8;
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar2;
  local_80 = '\x01';
  (**(code **)(*this_ptr + 0x4d0))(param_1,&local_88);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_48 == '\0') {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01edcacb:
  return uVar7 & 0xffffffff;
}

