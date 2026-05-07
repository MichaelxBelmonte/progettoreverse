// Function: FUN_002b7ee0
// Address: 002b7ee0
// Size: 1540 bytes
// Class: MUTempoEditorView
// String references:
//   "MUTempoEditorView"
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_002b7ee0(void)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  uint8_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t **pplVar11;
  int iVar12;
  int64_t *this_ptr;
  int64_t *plVar13;
  bool bVar14;
  int64_t local_f8;
  char local_f0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_68;
  char local_60 [8];
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar8 = (**(code **)(*this_ptr + 0x10))();
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  FUN_01d99a50();
  plVar13 = local_68;
  if (local_60[0] == '\0') {
    if (local_68 == (int64_t *)0x0) goto LAB_002b80f8;
    FUN_00d50b00();
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_68 == (int64_t *)0x0) {
LAB_002b80f8:
    plVar13 = (int64_t *)0x0;
    bVar2 = false;
    goto LAB_002b813f;
  }
  local_60[0] = '\0';
  local_68 = (int64_t *)0x0;
  local_58 = plVar13;
  local_50 = 0xffffffff;
  local_48 = 0;
  while( true ) {
    lVar9 = (int64_t)(int)local_50;
    iVar12 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar12);
    if (*(int *)((int64_t)local_58 + 0xc) <= iVar12) break;
    plVar13 = *(int64_t **)(local_58[2] + 8 + lVar9 * 8);
    local_68 = plVar13;
    if ((g_027ebf10 == '\0') && (iVar12 = ___cxa_guard_acquire(), iVar12 != 0)) {
      g_0273ced8 = FUN_0006d940();
      g_0273cec0 = "MUTempoEditorView";
      g_0273cec8 = 0x2e8;
      g_0273ced0 = FUN_0010c150;
      g_0273cee0 = 0;
      ram_000000000273cee8 = 0;
      g_0273cef0 = 0;
      g_0273cf68 = 0;
      ram_000000000273cf70 = 0;
      g_0273cf78 = 0;
      g_0273cf7a = 1;
      g_0273cef8 = 0;
      ram_000000000273cf00 = 0;
      g_0273cf08 = 0;
      ram_000000000273cf10 = 0;
      g_0273cf18 = 0;
      ram_000000000273cf20 = 0;
      g_0273cf28 = 0;
      ram_000000000273cf30 = 0;
      g_0273cf38 = 0;
      ram_000000000273cf40 = 0;
      g_0273cf48 = 0;
      ram_000000000273cf50 = 0;
      g_0273cf58 = 0;
      ram_000000000273cf60 = 0;
      g_0273cf83 = 0;
      g_0273cf7b = 0;
      ___cxa_guard_release();
    }
    pplVar11 = (int64_t **)&g_02802688;
    if (plVar13 != (int64_t *)0x0) {
      (**(code **)(*plVar13 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pplVar11 = &local_68;
      if (cVar6 == '\0') {
        pplVar11 = (int64_t **)&g_02802688;
      }
    }
    plVar13 = *pplVar11;
    if (plVar13 != (int64_t *)0x0) {
      if (*(char *)(pplVar11 + 1) == '\0') {
        FUN_00d50b00();
        bVar2 = true;
      }
      else {
        *(void*)(pplVar11 + 1) = 0;
        bVar2 = true;
      }
      goto LAB_002b812d;
    }
    if (local_50._4_4_ != 0) {
      if (local_50._4_4_ < 1) {
        iVar12 = -local_50._4_4_;
      }
      else {
        local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
        FUN_00d23690();
        local_48 = local_48 + local_50._4_4_;
        iVar12 = 0;
      }
      local_50 = CONCAT44(iVar12,(int)local_50);
    }
  }
  bVar2 = false;
  plVar13 = (int64_t *)0x0;
LAB_002b812d:
  FUN_000a9680();
  FUN_00d50b20();
LAB_002b813f:
  (**(code **)(*this_ptr + 0x58))();
  plVar4 = local_68;
  local_40[0] = local_60[0];
  pcVar10 = local_40;
  if (local_60[0] != '\0') {
    pcVar10 = local_60;
  }
  *pcVar10 = '\0';
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar6 = (**(code **)(*this_ptr + 0x48))();
  if (cVar6 != '\0') {
    (**(code **)(*plVar4 + 0x4a0))();
    plVar1 = *(int64_t **)(local_68[2] + 8);
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x918))();
  }
  (**(code **)(*plVar4 + 0x4a0))();
  plVar1 = *(int64_t **)local_68[2];
  if (local_60[0] != '\0') {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x30))();
  plVar5 = local_68;
  pcVar10 = local_60;
  if (local_60[0] == '\0') {
    pcVar10 = local_38;
  }
  local_38[0] = local_60[0];
  *pcVar10 = '\0';
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_001060a0();
    if (local_68 == (int64_t *)0x0) {
      bVar14 = false;
    }
    else {
      FUN_01d77a20();
      bVar14 = local_f8 != 0;
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar14) {
      FUN_00556e50();
      FUN_001060a0();
      uVar7 = (**(code **)(*local_68 + 0x3c8))();
      *(void*)(plVar4 + 0x29) = uVar7;
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar9 = g_026f6f70;
      if (g_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_026fc528;
      if (g_026fc528 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar3;
      local_b0 = '\x01';
      local_a8 = 0;
      local_a0 = '\0';
      FUN_00d31230(&local_a8,&local_b8);
      plVar4 = local_68;
      if (local_60[0] == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60[0] = '\0';
      }
      (**(code **)(*plVar1 + 0x6a8))();
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar13 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  return;
}

