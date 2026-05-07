// Function: FUN_015ab850
// Address: 015ab850
// Size: 527 bytes
// Class: GNFilePath

void FUN_015ab850(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t arg1;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar5 = *param_2;
  lVar1 = *(int64_t *)(arg1 + 0x18);
  if (lVar1 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(arg1 + 0x18) = lVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_000649c0();
  (**(code **)(*plVar4 + 0x18))();
  cVar3 = (**(code **)(*plVar4 + 0x620))();
  lVar5 = g_027c79d8;
  if (cVar3 == '\0') {
    FUN_00c8e830();
    lVar5 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar5 == 0) {
      bVar2 = false;
      lVar5 = 0;
    }
    else {
      FUN_00c92170();
      bVar2 = true;
    }
  }
  else {
    if (g_027c79d8 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar5;
    local_58 = '\x01';
    local_50 = *param_2;
    local_48 = '\0';
    (**(code **)(*plVar4 + 0x648))(&local_50,&local_60);
    lVar5 = local_40;
    if (local_40 == 0) {
      bVar2 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar2 = true;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_0159bec0();
  if ((bVar2) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

