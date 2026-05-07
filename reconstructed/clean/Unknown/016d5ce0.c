// Function: FUN_016d5ce0
// Address: 016d5ce0
// Size: 956 bytes
// Class: Unknown

void FUN_016d5ce0(uint64_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  uint64_t uVar3;
  char cVar4;
  void *pvVar5;
  int extraout_var;
  uint64_t uVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar9;
  bool bVar10;
  int64_t local_50;
  char local_48;
  uint64_t local_40;
  char local_38 [8];
  
  if ((*arg1 == 0) || (*(int *)(*arg1 + 0xc) == 0)) {
    pvVar5 = _pthread_getspecific((void*)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    lVar2 = local_50;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_016ebac0();
    uVar8 = local_40;
    if (local_40 == 0) {
      uVar8 = 0;
      bVar1 = false;
    }
    else if (local_38[0] == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
      bVar1 = true;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar5 = _pthread_getspecific((void*)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01901690();
    uVar8 = local_40;
    if (local_40 == 0) {
      uVar8 = 0;
      bVar1 = false;
    }
    else if (local_38[0] == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
      bVar1 = true;
    }
  }
  if (1 < *(int *)(uVar8 + 0xc)) {
    FUN_00d23340();
    uVar9 = local_40;
    uVar6 = CONCAT71((int7)((uint64_t)param_1 >> 8),local_38[0]);
    plVar7 = &local_50;
    if (local_38[0] != '\0') {
      plVar7 = (int64_t *)local_38;
    }
    local_50 = CONCAT71(local_50._1_7_,local_38[0]);
    *(char *)plVar7 = '\0';
    if ((local_38[0] != '\0') && (uVar9 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((void*)uVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    if (((char)local_50 != '\0') && (uVar9 != 0)) {
      FUN_00d50b20();
    }
    uVar9 = **(uint64_t **)(uVar8 + 0x10);
    if (uVar9 != 0) {
      FUN_00d50b00();
    }
    while( true ) {
      pvVar5 = _pthread_getspecific((void*)uVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40 = FUN_019079b0();
      local_50 = *(int64_t *)(this_ptr + 0x68);
      FUN_00e7b820();
      uVar6 = local_40;
      if (((local_40 >> 0x20 != 0) && (extraout_var != 0)) &&
         (cVar4 = FUN_00e7c020(), cVar4 == '\0')) break;
      FUN_016da710(uVar6,uVar6);
      uVar3 = local_40;
      if (local_40 == uVar9) {
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (local_38[0] == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar10 = uVar9 != 0;
        uVar9 = uVar3;
        if (bVar10) {
          FUN_00d50b20();
        }
      }
      else {
        bVar10 = uVar9 != 0;
        uVar9 = uVar3;
        if (bVar10) {
          FUN_00d50b20();
        }
      }
    }
    if (uVar9 != 0) {
      FUN_00d50b20();
    }
  }
  if ((bVar1) && (uVar8 != 0)) {
    FUN_00d50b20();
  }
  return;
}

