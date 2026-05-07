// Function: FUN_01d8f390
// Address: 01d8f390
// Size: 902 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01d8f390(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  char cVar2;
  uint uVar3;
  undefined7 uVar6;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t this_ptr;
  int64_t *plVar7;
  bool bVar8;
  int64_t local_78;
  char local_70;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if ((*(char *)(this_ptr + 0x1a1) == '\0') &&
     (*(int64_t **)(this_ptr + 0x150) != (int64_t *)0x0)) {
    *(void*)(this_ptr + 0x1a1) = 1;
    uVar3 = (**(code **)(**(int64_t **)(this_ptr + 0x150) + 0x3b8))(param_1,param_2);
    uVar5 = (uint64_t)uVar3;
    *(void*)(this_ptr + 0x1a1) = 0;
    goto LAB_01d8f705;
  }
  if (*(int64_t *)(this_ptr + 0x168) == 0) {
    plVar7 = (int64_t *)0x0;
LAB_01d8f5a6:
    uVar3 = FUN_01e47f50(param_1,param_2);
    uVar5 = (uint64_t)uVar3;
LAB_01d8f5d7:
    if (plVar7 == (int64_t *)0x0) goto LAB_01d8f705;
  }
  else {
    FUN_01cae990();
    plVar1 = local_50;
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_40 = plVar1;
    local_38 = '\0';
    cVar2 = FUN_00d23d70();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      uVar4 = *(void*)(this_ptr + 0x168);
      FUN_01cae990();
      local_58 = 0;
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_58 = '\x01';
      local_60 = local_78;
      FUN_000175c0(param_1,&local_60);
      plVar7 = local_40;
      uVar6 = (undefined7)((uint64_t)uVar4 >> 8);
      if (local_40 == (int64_t *)0x0) {
        plVar7 = (int64_t *)0x0;
LAB_01d8f511:
        bVar8 = plVar7 != (int64_t *)0x0;
        uVar4 = CONCAT71(uVar6,bVar8);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_01d8f511;
        }
        local_38 = '\0';
        uVar4 = CONCAT71(uVar6,1);
        bVar8 = true;
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar7 = (int64_t *)0x0;
      uVar4 = 0;
      bVar8 = false;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar8) goto LAB_01d8f5a6;
    uVar5 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    if (param_2 == '\0') goto LAB_01d8f5d7;
    FUN_01cae990();
    plVar1 = local_50;
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_40 = plVar1;
    local_38 = '\0';
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar7 + 0x3b8))(param_1,1);
    FUN_01cae990();
    plVar7 = local_50;
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_40 = plVar7;
    local_38 = '\0';
    FUN_00d23f50();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar5 = CONCAT71((int7)((uint64_t)plVar7 >> 8),1);
  }
  FUN_00d50b20();
LAB_01d8f705:
  return uVar5 & 0xffffffff;
}

