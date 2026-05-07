// Function: FUN_01efbe80
// Address: 01efbe80
// Size: 824 bytes
// Class: Unknown

uint64_t FUN_01efbe80(uint64_t param_1,char param_2)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  uint uVar5;
  int64_t *arg1;
  uint64_t uVar6;
  int64_t *plVar8;
  int64_t local_e0;
  char local_d8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  undefined7 uVar7;
  
  FUN_01cae990();
  plVar8 = local_40;
  lVar2 = g_027fed10;
  if (g_027fed10 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar8 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    local_90 = *arg1;
    local_88 = '\0';
    uVar5 = FUN_01e54290();
    uVar6 = (uint64_t)uVar5;
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_01efc1a3;
  }
  uVar7 = (undefined7)((uint64_t)arg1 >> 8);
  uVar6 = CONCAT71(uVar7,1);
  if (param_2 == '\0') goto LAB_01efc1a3;
  FUN_01f27fe0();
  local_c0 = 0;
  local_b8 = '\0';
  FUN_01cb3fe0();
  local_50 = local_70;
  local_48 = 0;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_48 = '\x01';
  FUN_001220c0();
  local_60 = local_80;
  local_58 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_58 = '\x01';
  local_a8 = '\0';
  local_b0 = 0;
  FUN_01f444f0(&local_60,&local_c0,&local_b0);
  plVar8 = local_40;
  if (local_40 == (int64_t *)0x0) {
    bVar1 = true;
    plVar8 = (int64_t *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01efc072;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    bVar1 = false;
  }
LAB_01efc072:
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  uVar6 = CONCAT71(uVar7,1);
  if (plVar8 != (int64_t *)0x0) {
    FUN_01d2ac30();
    plVar3 = local_40;
    if (local_40 != (int64_t *)0x0) {
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_98 = '\0';
      local_a0 = plVar8;
      (**(code **)(*plVar3 + 0x690))();
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
LAB_01efc1a3:
  return uVar6 & 0xffffffff;
}

