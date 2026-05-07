// Function: FUN_00781710
// Address: 00781710
// Size: 1129 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00781710(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  byte bVar3;
  char cVar4;
  uint64_t uVar5;
  int64_t *this_ptr;
  double dVar6;
  uint64_t uVar7;
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
  
  lVar1 = g_026f6fa0;
  if (g_026f6fa0 != 0) {
    FUN_00d50b00();
  }
  dVar6 = (double)FUN_00e7d6f0();
  uVar5 = (uint64_t)(dVar6 * g_023907c0);
  dVar6 = dVar6 * g_023907c0 - g_023907c8;
  uVar7 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar7 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  bVar3 = (byte)(((int64_t)dVar6 & (int64_t)uVar5 >> 0x3f | uVar5) / 3);
  local_50 = lVar1;
  local_48 = '\0';
  FUN_000175c0(uVar7,&local_50);
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
  if (plVar2 != (int64_t *)0x0) {
    local_38 = '\0';
    local_40 = plVar2;
    bVar3 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((plVar2 != (int64_t *)0x0 & bVar3) != 0) {
    (**(code **)(*this_ptr + 0x468))();
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (int64_t *)0x0) {
      (**(code **)(*this_ptr + 0x460))();
      local_70 = local_50;
      local_68 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_68 = '\x01';
      (**(code **)(*this_ptr + 0x458))();
      local_60 = local_90;
      local_58 = 0;
      if (local_88 == '\0') {
        if (local_90 != 0) {
          FUN_00d50b00();
        }
        lVar1 = this_ptr[0xd];
      }
      else {
        local_88 = '\0';
        lVar1 = this_ptr[0xd];
      }
      local_58 = '\x01';
      if (lVar1 != 0) {
        local_58 = '\x01';
        FUN_00d50b00();
      }
      local_a8 = '\x01';
      local_b0 = lVar1;
      FUN_01f53880(&local_60,&local_70,&local_b0);
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
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (plVar2 == (int64_t *)0x0) {
        return;
      }
      local_a0 = plVar2;
      local_98 = '\0';
      (**(code **)(*this_ptr + 0x470))();
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      cVar4 = FUN_00780680();
      if (cVar4 == '\0') {
        return;
      }
    }
    FUN_00756ee0();
    (**(code **)(*this_ptr + 0x5f0))();
    plVar2 = local_40;
    (**(code **)(*this_ptr + 0x628))();
    local_80 = local_50;
    local_78 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_78 = '\x01';
    (**(code **)(*plVar2 + 0x648))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d349f0();
  }
  return;
}

