// Function: FUN_00537dc0
// Address: 00537dc0
// Size: 1418 bytes
// Class: MUAudioFileSource

void FUN_00537dc0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  uint64_t uVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar8;
  double dVar9;
  uint64_t uVar10;
  int64_t local_60;
  char local_58;
  uint64_t local_50;
  int64_t *local_40;
  char local_38;
  
  lVar3 = g_026f6fd0;
  if (g_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar9 * g_023907c0);
  dVar9 = dVar9 * g_023907c0 - g_023907c8;
  uVar10 = FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b00();
  }
  bVar5 = (byte)(((int64_t)dVar9 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_60 = lVar3;
  local_58 = '\0';
  FUN_000175c0(uVar10,&local_60);
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    local_38 = '\0';
    bVar5 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((local_40 != (int64_t *)0x0 & bVar5) == 0) {
    cVar6 = *(char *)((int64_t)this_ptr + 0x35a);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (cVar6 == '\0') goto LAB_00537f8b;
    uVar10 = FUN_0051be00();
    if (local_40 == (int64_t *)0x0) {
      local_50 = 0;
    }
    else {
      local_50 = CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
LAB_00537f8b:
    local_50 = 0;
    local_40 = (int64_t *)0x0;
  }
  plVar1 = (int64_t *)*arg1;
  FUN_00d21140();
  lVar3 = g_026f6fd0;
  if (g_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar9 * g_023907c0);
  dVar9 = dVar9 * g_023907c0 - g_023907c8;
  uVar10 = FUN_0071a120();
  if (plVar1 != (int64_t *)0x0) {
    uVar10 = FUN_00d50b00();
  }
  bVar5 = (byte)(((int64_t)dVar9 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_60 = lVar3;
  local_58 = '\0';
  FUN_000175c0(uVar10,&local_60);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    bVar5 = FUN_00c70bc0();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((plVar1 != (int64_t *)0x0 & bVar5) != 0) {
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00538328;
  }
  cVar6 = *(char *)((int64_t)this_ptr + 0x35a);
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') goto LAB_00538328;
  FUN_0051be00();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if (local_40 != plVar1) {
    FUN_000ba510();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    plVar2 = (int64_t *)this_ptr[0x66];
    plVar8 = plVar1;
    if (plVar1 == plVar2) {
      if (plVar1 == (int64_t *)0x0) goto LAB_00538231;
LAB_00538278:
      FUN_00d50b20();
      bVar4 = true;
      plVar8 = (int64_t *)0x0;
    }
    else {
      bVar4 = false;
      if ((plVar1 != (int64_t *)0x0) && (bVar4 = false, plVar2 != (int64_t *)0x0)) {
        FUN_00d50b00();
        cVar6 = (**(code **)(*plVar1 + 0x50))();
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (cVar6 != '\0') goto LAB_00538278;
LAB_00538231:
        bVar4 = false;
      }
    }
    lVar3 = this_ptr[0x65];
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x618))(this_ptr[0x69],this_ptr[0x6a]);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (!bVar4 && plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_00538328:
  if (((char)local_50 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

