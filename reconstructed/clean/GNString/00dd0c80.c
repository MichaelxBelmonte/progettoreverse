// Function: FUN_00dd0c80
// Address: 00dd0c80
// Size: 917 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_00dd0c80(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar8;
  uint64_t uVar9;
  double dVar10;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_70;
  char local_68;
  int64_t local_48;
  char local_40;
  
  if ((g_028a8690 == (int64_t *)0x0) || (g_028a8699 == '\0')) {
    FUN_00e8cb50();
    if (g_028a8690 == (int64_t *)0x0) {
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar6 + 0x18))();
      if (g_028a8690 == plVar6) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar8 = g_028a8690 != (int64_t *)0x0;
        g_028a8690 = plVar6;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      if (g_028a8698 == '\0') {
        g_028a8698 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      g_028a8699 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a8699 = '\x01';
      FUN_00e8cb70();
    }
  }
  uVar9 = FUN_00d99300();
  lVar5 = local_48;
  lVar1 = *arg1;
  if (lVar1 == local_48) {
    if (((char)arg1[1] != '\0') || (local_48 == 0)) goto LAB_00dd0de3;
    if (local_40 == '\0') {
      uVar9 = FUN_00d50b00();
      goto LAB_00dd0dde;
    }
LAB_00dd0daa:
    *(void*)(arg1 + 1) = 1;
  }
  else {
    lVar4 = arg1[1];
    if (local_40 != '\0') {
      *arg1 = local_48;
      if (((char)lVar4 != '\0') && (lVar1 != 0)) {
        uVar9 = FUN_00d50b20();
      }
      goto LAB_00dd0daa;
    }
    if (local_48 != 0) {
      uVar9 = FUN_00d50b00();
    }
    *arg1 = lVar5;
    if (((char)lVar4 != '\0') && (lVar1 != 0)) {
      uVar9 = FUN_00d50b20();
    }
LAB_00dd0dde:
    *(void*)(arg1 + 1) = 1;
LAB_00dd0de3:
    if ((local_40 != '\0') && (local_48 != 0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  local_a0 = *arg1;
  local_98 = '\0';
  FUN_000175c0(uVar9,&local_a0);
  lVar1 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 == 0) {
    bVar2 = true;
  }
  else {
    dVar10 = (double)FUN_00c93980();
    if (0.0 <= dVar10) {
      *this_ptr = lVar1;
      goto LAB_00dd0fff;
    }
    local_48 = *arg1;
    local_40 = '\0';
    FUN_00ca13a0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    bVar2 = false;
  }
  plVar6 = (int64_t *)0x0;
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00cfab40();
  (**(code **)(*plVar7 + 0x18))();
  if (plVar7 == (int64_t *)0x0) {
    if (lVar1 == 0) {
      FUN_00d50b20();
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = true;
    plVar6 = plVar7;
  }
  local_90 = *arg1;
  local_88 = '\0';
  uVar9 = FUN_00dd1ab0();
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    local_68 = '\0';
    local_48 = *arg1;
    local_40 = '\0';
    local_70 = plVar6;
    FUN_00ca0840(uVar9,&local_48);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  if (!bVar2) {
    if (plVar6 == (int64_t *)0x0) {
      plVar6 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  *this_ptr = (int64_t)plVar6;
LAB_00dd0fff:
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

