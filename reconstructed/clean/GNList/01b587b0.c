// Function: FUN_01b587b0
// Address: 01b587b0
// Size: 578 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01b587b0(void)

{
  bool bVar1;
  int64_t *plVar2;
  bool bVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t this_ptr;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00d50100();
  FUN_01f27fe0();
  local_80 = g_027e48a8;
  if (g_027e48a8 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  FUN_00cac150();
  local_50 = local_60;
  local_48 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_48 = '\x01';
  (**(code **)(*local_90 + 0x5f0))(&local_50,&local_80);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar2 == (int64_t *)0x0) || (cVar4 = (**(code **)(*plVar2 + 0x398))(), cVar4 == '\0')) {
LAB_01b588fd:
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar5 + 0x18))();
    bVar1 = true;
    plVar6 = *(int64_t **)(this_ptr + 0x10);
    bVar3 = true;
    if (plVar6 == plVar5) goto LAB_01b589c9;
  }
  else {
    local_70 = plVar2;
    local_68 = '\0';
    FUN_00ca94c0();
    plVar5 = local_40;
    if (local_40 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
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
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 == (int64_t *)0x0) goto LAB_01b588fd;
    plVar6 = *(int64_t **)(this_ptr + 0x10);
    bVar3 = bVar1;
    if (plVar6 == plVar5) goto LAB_01b589c9;
  }
  bVar1 = bVar3;
  FUN_00d50b00();
  *(int64_t **)(this_ptr + 0x10) = plVar5;
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01b589c9:
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (bVar1) {
    FUN_00d50b20();
  }
  return;
}

