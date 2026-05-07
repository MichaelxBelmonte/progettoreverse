// Function: FUN_01ca93d0
// Address: 01ca93d0
// Size: 746 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01ca93d0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
  uint32_t uVar7;
  int64_t local_90;
  uint8_t local_88;
  int64_t *local_68;
  int64_t local_48;
  char local_40;
  
  plVar6 = (int64_t *)*arg1;
  if (plVar6 == (int64_t *)0x0) {
    return;
  }
  if (*param_2 == 0) {
    return;
  }
  if ((g_027048b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026cd478 = FUN_00d4fe50();
    g_026cd460 = "GNList";
    g_026cd468 = 0x20;
    g_026cd470 = FUN_00018210;
    g_026cd480 = 0;
    ram_00000000026cd488 = 0;
    g_026cd490 = 0;
    g_026cd508 = 0;
    ram_00000000026cd510 = 0;
    g_026cd518 = 0;
    g_026cd51a = 6;
    g_026cd498 = 0;
    ram_00000000026cd4a0 = 0;
    g_026cd4a8 = 0;
    ram_00000000026cd4b0 = 0;
    g_026cd4b8 = 0;
    ram_00000000026cd4c0 = 0;
    g_026cd4c8 = 0;
    ram_00000000026cd4d0 = 0;
    g_026cd4d8 = 0;
    ram_00000000026cd4e0 = 0;
    g_026cd4e8 = 0;
    ram_00000000026cd4f0 = 0;
    g_026cd4f8 = 0;
    ram_00000000026cd500 = 0;
    g_026cd523 = 0;
    g_026cd51b = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar6 + 0x360))();
  cVar4 = FUN_00e85ea0();
  plVar6 = arg1;
  if (cVar4 == '\0') {
    plVar6 = &g_02802688;
  }
  lVar1 = *plVar6;
  if (lVar1 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = (char)plVar6[1];
    if (cVar4 != '\0') {
      FUN_00d50b00();
    }
    FUN_01ca5b70();
    lVar2 = *arg1;
    if (lVar2 == local_48) {
      if (((char)arg1[1] != '\0') || (local_48 == 0)) {
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01ca9513;
      }
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      lVar3 = arg1[1];
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        *arg1 = local_48;
        if (((char)lVar3 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *arg1 = local_48;
        if (((char)lVar3 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    local_68 = arg1 + 1;
    *(void*)local_68 = 1;
  }
LAB_01ca9513:
  uVar7 = FUN_002edd50();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_90 = *param_2;
  local_88 = 0;
  FUN_01cac7f0(uVar7,&local_90);
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  return;
}

