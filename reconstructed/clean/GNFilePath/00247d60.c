// Function: FUN_00247d60
// Address: 00247d60
// Size: 1269 bytes
// Class: GNFilePath

uint64_t FUN_00247d60(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  uint uVar5;
  int64_t *plVar6;
  uint64_t this_ptr;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t local_78;
  char local_70;
  uint32_t local_64;
  uint64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_40 + 0x450))();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
      local_38[0] = '\0';
      local_40 = (int64_t *)0x0;
    }
    else {
      FUN_006f3f00();
    }
    cVar4 = FUN_00751ba0();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      return 0;
    }
    if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
      return 0;
    }
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar3 = local_40;
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 == (int64_t *)0x0) {
      return 0;
    }
  }
  lVar1 = g_026d8938;
  local_64 = param_2;
  if (g_026d8938 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar8 = FUN_0071a120();
  if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar8 = FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  local_50 = lVar1;
  local_48 = '\0';
  FUN_000175c0(uVar8,&local_50);
  plVar3 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  uVar7 = this_ptr;
  if (plVar3 != (int64_t *)0x0) {
    local_38[0] = '\0';
    local_40 = plVar3;
    uVar5 = FUN_00c70bc0();
    uVar7 = (uint64_t)uVar5;
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar8 = FUN_00d50b20();
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b20();
  }
  if ((plVar3 != (int64_t *)0x0 & (byte)uVar7) == 0) {
    return 0;
  }
  if ((char)local_64 == '\0') {
    FUN_01caeae0();
    plVar3 = local_40;
    plVar6 = (int64_t *)local_38;
    if (local_38[0] == '\0') {
      plVar6 = &local_50;
    }
    local_50 = CONCAT71(local_50._1_7_,local_38[0]);
    *(char *)plVar6 = '\0';
    if ((local_38[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      lVar1 = *(int64_t *)(this_ptr + 0x98);
      if (lVar1 != 0) {
        FUN_00d50b00();
        FUN_01c446f0();
      }
      FUN_01d66ab0();
      if ((lVar1 != 0) && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      if ((char)local_50 != '\0') {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (*(int64_t *)(this_ptr + 0x98) != 0) {
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x98);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01c446f0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      uVar8 = FUN_00d50b20();
    }
    FUN_0023af30(uVar8,0);
    FUN_0023c090();
    if (*(int64_t *)(this_ptr + 0x98) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar1 = *(int64_t *)(this_ptr + 0x1c0);
      if (lVar1 != 0) {
        FUN_00d50b00();
        FUN_006f8ca0();
        FUN_006f9d50();
      }
      lVar2 = *(int64_t *)(this_ptr + 0x98);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_0021e520();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x648))();
    FUN_00d403d0();
    lVar1 = g_026f6e90;
    if (g_026f6e90 != 0) {
      FUN_00d50b00();
    }
    local_58 = 0;
    FUN_00d50b00();
    local_58 = '\x01';
    local_78 = 0;
    local_70 = '\0';
    local_60 = this_ptr;
    FUN_00d40470(&local_78,&local_60,1,3);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return 1;
}

