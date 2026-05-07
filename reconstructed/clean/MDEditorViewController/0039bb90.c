// Function: FUN_0039bb90
// Address: 0039bb90
// Size: 528 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_0039bb90(void)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  uint64_t uVar4;
  byte bVar5;
  int64_t *arg1;
  void*this_ptr;
  double dVar6;
  uint64_t uVar7;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_0034cc20();
  *puVar3 = &g_024edac8;
  puVar3[2] = &g_024ee4c0;
  puVar3[0x27] = &g_024ee500;
  puVar3[0x2d] = &g_024ee530;
  puVar3[0x2e] = &g_024ee580;
  *(void*)(puVar3 + 0x3f) = 0;
  FUN_00d500e0();
  cVar2 = (**(code **)(&g_00001680 + *arg1))();
  local_48 = g_026f6de0;
  if (cVar2 == '\0') {
    if (g_026f6de0 != 0) {
      FUN_00d50b00();
    }
    dVar6 = (double)FUN_00e7d6f0();
    uVar4 = (uint64_t)(dVar6 * g_023907c0);
    uVar4 = (int64_t)(dVar6 * g_023907c0 - g_023907c8) & (int64_t)uVar4 >> 0x3f | uVar4;
    uVar7 = FUN_0071a120();
    if ((local_38 == '\0') && (local_40 != 0)) {
      uVar7 = FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar7 = FUN_00d50b20();
      }
    }
    bVar5 = (char)uVar4 + (char)(uVar4 / 3) * -3;
    local_58 = local_48;
    local_50 = '\0';
    FUN_000175c0(uVar7,&local_58);
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      local_38 = '\0';
      local_40 = lVar1;
      bVar5 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    *(byte *)(puVar3 + 0x3f) = lVar1 != 0 & bVar5;
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(void*)(puVar3 + 0x3f) = 0;
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

