// Function: FUN_00c91cf0
// Address: 00c91cf0
// Size: 706 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00c91cf0(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  char cVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_48;
  int64_t *local_40;
  char local_38;
  
  plVar5 = (int64_t *)(param_2 & 0xffffffff);
  cVar4 = (**(code **)(*(int64_t *)*arg1 + 0x398))();
  local_48 = 0;
  cVar2 = '\0';
  if ((cVar4 != '\0') && ((char)plVar5 != '\0')) {
    local_48 = *arg1;
    if (local_48 == 0) {
      cVar2 = '\0';
      local_48 = 0;
    }
    else {
      cVar2 = (char)arg1[1];
      if (cVar2 != '\0') {
        FUN_00d50b00();
      }
    }
    FUN_00ce9330(1,0x80);
    plVar1 = (int64_t *)*arg1;
    plVar5 = local_40;
    if (plVar1 == local_40) {
      if (((char)arg1[1] != '\0') || (local_40 == (int64_t *)0x0)) goto LAB_00c91dfc;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_00c91df7;
      }
    }
    else {
      lVar3 = arg1[1];
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)local_40;
        if (((char)lVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_00c91df7:
        *(void*)(arg1 + 1) = 1;
LAB_00c91dfc:
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00c91e10;
      }
      *arg1 = (int64_t)local_40;
      if (((char)lVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(arg1 + 1) = 1;
  }
LAB_00c91e10:
  FUN_00ccb910();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (local_40 == (int64_t *)0x0) {
    uVar6 = 0;
    goto LAB_00c91f8d;
  }
  if (*(int *)(this_ptr + 0x18) == 0) {
LAB_00c91f12:
    (**(code **)(*local_40 + 0x368))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    uVar6 = CONCAT71((int7)((uint64_t)plVar5 >> 8),1);
    if ((local_48 != 0) && (cVar4 = (**(code **)(*(int64_t *)*arg1 + 0x438))(), cVar4 == '\0')
       ) {
      (**(code **)(*(int64_t *)*arg1 + 0x408))();
      goto LAB_00c91f83;
    }
  }
  else {
    (**(code **)(*local_40 + 0x388))(*(int *)(this_ptr + 0x18),*(void*)(this_ptr + 0x10));
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) goto LAB_00c91f12;
      FUN_00d50b00();
    }
    else if (local_40 == (int64_t *)0x0) goto LAB_00c91f12;
    (**(code **)(*local_40 + 0x368))();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x408))();
    FUN_00d50b20();
LAB_00c91f83:
    uVar6 = 0;
  }
  FUN_00d50b20();
LAB_00c91f8d:
  if ((cVar2 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return uVar6 & 0xffffffff;
}

