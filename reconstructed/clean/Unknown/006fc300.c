// Function: FUN_006fc300
// Address: 006fc300
// Size: 1130 bytes
// Class: Unknown

void* FUN_006fc300(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  byte bVar3;
  char cVar4;
  uint64_t uVar5;
  void*puVar6;
  char *pcVar7;
  int64_t *arg1;
  void*this_ptr;
  double dVar8;
  uint64_t uVar9;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  if (arg1[2] != 0) {
    FUN_00d50b00();
    local_68 = g_026f6fd0;
    if (g_026f6fd0 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    dVar8 = (double)FUN_00e7d6f0();
    uVar5 = (uint64_t)(dVar8 * g_023907c0);
    dVar8 = dVar8 * g_023907c0 - g_023907c8;
    uVar9 = FUN_0071a120();
    if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
        (uVar9 = FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    bVar3 = (byte)(((int64_t)dVar8 & (int64_t)uVar5 >> 0x3f | uVar5) / 3);
    local_50 = local_68;
    local_48 = '\0';
    FUN_000175c0(uVar9,&local_50);
    plVar2 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      local_38[0] = '\0';
      local_40 = plVar2;
      bVar3 = FUN_00c70bc0();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if ((plVar2 != (int64_t *)0x0 & bVar3) != 0) {
      lVar1 = arg1[2];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_002eacb0();
      if (lVar1 == 0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
  }
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_40 + 0x450))();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_006f3f00();
    FUN_0078b9c0();
    FUN_00d23310();
    pcVar7 = &local_88;
    if (local_38[0] != '\0') {
      pcVar7 = local_38;
    }
    local_88 = local_38[0];
    *pcVar7 = '\0';
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_58 = 0;
    if ((local_88 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_60 = local_40;
    local_58 = '\x01';
    FUN_000ba510();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_70 == '\0') {
      return this_ptr;
    }
    if (local_78 == (int64_t *)0x0) {
      return this_ptr;
    }
    FUN_00d50b20();
    return this_ptr;
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  (**(code **)(*arg1 + 0x5d8))();
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_006fc64f;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_006fc64f:
    FUN_0063f230();
    plVar2 = local_40;
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_0063f230();
      FUN_0021a630();
      uVar9 = (**(code **)(*local_78 + 0xe28))();
      plVar2 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          uVar9 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_40 = plVar2;
      local_38[0] = '\0';
      FUN_00d214d0(uVar9,*(void*)((int64_t)puVar6 + 0xc));
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
        FUN_00d50b20();
      }
    }
    *this_ptr = puVar6;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    return this_ptr;
  }
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

