// Function: FUN_00d8c0b0
// Address: 00d8c0b0
// Size: 1367 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00d8c0b0(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  int iVar5;
  void*arg1;
  int64_t this_ptr;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint64_t local_38;
  
  cVar2 = (**(code **)(*(int64_t *)*arg1 + 0x378))();
  lVar4 = g_027815c8;
  if (cVar2 != '\0') {
    plVar1 = (int64_t *)*arg1;
    if (g_027815c8 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x488))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    iVar3 = *(int *)(this_ptr + 0x20);
    if ((iVar3 != -1) && (g_028a84f0 == '\0')) {
      if (iVar3 == -1) {
        FUN_00d931c0();
      }
      lVar4 = g_027815b0;
      plVar1 = (int64_t *)*arg1;
      if (g_027815b0 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = '\x01';
      (**(code **)(*plVar1 + 0x498))();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      lVar4 = g_027815b8;
      plVar1 = (int64_t *)*arg1;
      if (g_027815b8 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar4;
      local_60 = '\x01';
      (**(code **)(*plVar1 + 0x498))();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      iVar3 = *(int *)(this_ptr + 0x20);
      if (iVar3 == -1) {
        if (*(int64_t *)(this_ptr + 0x10) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_00e7dde0();
        }
      }
      lVar4 = g_027648d0;
      plVar1 = (int64_t *)*arg1;
      if (g_027648d0 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = '\x01';
      (**(code **)(*plVar1 + 0x500))(&local_58,iVar3 * 2 + 2);
      if (local_50 == '\0') {
        return;
      }
      if (local_58 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    if ((iVar3 != -1) && (*(int64_t *)(this_ptr + 0x10) == 0)) {
      if (iVar3 < 0x18) {
        lVar4 = this_ptr + 0x28;
      }
      else {
        lVar4 = FUN_00e83010(iVar3 + 1);
        iVar3 = *(int *)(this_ptr + 0x20);
      }
      FUN_00da41a0(iVar3,0);
      *(void*)(lVar4 + *(int *)(this_ptr + 0x20)) = 0;
      local_38 = 0;
      cVar2 = FUN_00e31450(3,lVar4);
      if ((cVar2 == '\0') && (lVar4 != this_ptr + 0x28)) {
        FUN_00e83070();
      }
    }
    lVar4 = g_027815b0;
    plVar1 = (int64_t *)*arg1;
    if (g_027815b0 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x498))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    iVar3 = *(int *)(this_ptr + 0x20);
    local_98 = g_027648d0;
    if (iVar3 == -1) {
      if (*(int64_t *)(this_ptr + 0x10) == 0) goto LAB_00d8c4f1;
      iVar3 = FUN_00e7dde0();
      local_98 = g_027648d0;
    }
    g_027648d0 = local_98;
    if (iVar3 != 0) {
      plVar1 = (int64_t *)*arg1;
      if (local_98 != 0) {
        FUN_00d50b00();
      }
      local_90 = '\x01';
      (**(code **)(*plVar1 + 0x500))(&local_98,iVar3 + 1);
      if (local_90 == '\0') {
        return;
      }
      if (local_98 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
LAB_00d8c4f1:
    lVar4 = g_027648d0;
    plVar1 = (int64_t *)*arg1;
    if (g_027648d0 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar4;
    local_80 = '\x01';
    (**(code **)(*plVar1 + 0x500))(&local_88,1);
    if (local_80 == '\0') {
      return;
    }
    if (local_88 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  iVar3 = *(int *)(this_ptr + 0x20);
  if (iVar3 == -1) {
    if (*(int64_t *)(this_ptr + 0x10) == 0) {
      iVar3 = 0;
      plVar1 = (int64_t *)*arg1;
      lVar4 = g_027815c0;
      goto joined_r0x00d8c244;
    }
    iVar3 = FUN_00e7dde0();
  }
  plVar1 = (int64_t *)*arg1;
  lVar4 = g_027815c0;
joined_r0x00d8c244:
  g_027815c0 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\x01';
  local_48 = lVar4;
  (**(code **)(*plVar1 + 0x5a0))();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  iVar5 = *(int *)(this_ptr + 0x20);
  if ((iVar5 == -1) || (g_028a84f0 != '\0')) {
    if ((iVar5 != -1) && (*(int64_t *)(this_ptr + 0x10) == 0)) {
      if (iVar5 < 0x18) {
        lVar4 = this_ptr + 0x28;
      }
      else {
        lVar4 = FUN_00e83010(iVar5 + 1);
        iVar5 = *(int *)(this_ptr + 0x20);
      }
      FUN_00da41a0(iVar5,0);
      *(void*)(lVar4 + *(int *)(this_ptr + 0x20)) = 0;
      local_38 = 0;
      cVar2 = FUN_00e31450(3,lVar4);
      if ((cVar2 == '\0') && (lVar4 != this_ptr + 0x28)) {
        FUN_00e83070();
      }
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
    if (iVar3 == 0) {
      lVar4 = *(int64_t *)*arg1;
    }
    else {
      lVar4 = *(int64_t *)*arg1;
    }
  }
  else {
    local_38 = CONCAT62(local_38._2_6_,0xfeff);
    if (iVar5 == -1) {
      FUN_00d931c0();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
    (**(code **)(*(int64_t *)*arg1 + 0x410))();
    lVar4 = *(int64_t *)*arg1;
  }
  (**(code **)(lVar4 + 0x410))();
  (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
  return;
}

