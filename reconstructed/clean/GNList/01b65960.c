// Function: FUN_01b65960
// Address: 01b65960
// Size: 1321 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01b65960(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  char cVar6;
  int iVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  int64_t local_38;
  char local_30;
  
  plVar1 = (int64_t *)*arg1;
  if ((g_027048b0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
  plVar9 = &g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 != '\0') {
      FUN_00053ac0();
      cVar6 = FUN_00e8da30();
      plVar9 = arg1;
      if (cVar6 == '\0') {
        plVar9 = &g_02802688;
      }
    }
  }
  lVar2 = *plVar9;
  lVar8 = this_ptr[0x27];
  lVar5 = lVar8;
  if (lVar8 != lVar2) {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0x27] = lVar2;
    lVar5 = lVar2;
    if (lVar8 != 0) {
      FUN_00d50b20();
      lVar5 = this_ptr[0x27];
    }
  }
  if (lVar5 == 0) {
    if (this_ptr[0x29] != 0) {
      this_ptr[0x29] = 0;
      FUN_00d50b20();
    }
    if (this_ptr[0x2a] != 0) {
      this_ptr[0x2a] = 0;
      FUN_00d50b20();
    }
    if (this_ptr[0x2b] != 0) {
      this_ptr[0x2b] = 0;
      FUN_00d50b20();
    }
    goto LAB_01b65d95;
  }
  FUN_01b57f70();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  uVar10 = FUN_00d45bc0();
  uVar3 = FUN_00d45bc0();
  uVar4 = FUN_00d45bc0();
  uVar11 = FUN_00d45bc0();
  FUN_01b57fb0(uVar10,uVar3,uVar4,uVar11);
  lVar2 = this_ptr[0x29];
  lVar8 = lVar2;
  if (lVar2 != local_38) {
    lVar8 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar8 = 0;
        goto LAB_01b65ae3;
      }
      FUN_00d50b00();
      lVar2 = this_ptr[0x29];
      this_ptr[0x29] = local_38;
    }
    else {
      local_30 = '\0';
LAB_01b65ae3:
      this_ptr[0x29] = lVar8;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar8 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  uVar10 = FUN_00d45bc0();
  uVar3 = FUN_00d45bc0();
  uVar4 = FUN_00d45bc0();
  uVar11 = FUN_00d45bc0();
  FUN_01b57fb0(uVar10,uVar3,uVar4,uVar11);
  lVar2 = this_ptr[0x2a];
  lVar8 = lVar2;
  if (lVar2 != local_38) {
    lVar8 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar8 = 0;
        goto LAB_01b65c42;
      }
      FUN_00d50b00();
      lVar2 = this_ptr[0x2a];
      this_ptr[0x2a] = local_38;
    }
    else {
      local_30 = '\0';
LAB_01b65c42:
      this_ptr[0x2a] = lVar8;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar8 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  uVar10 = FUN_00d45bc0();
  uVar3 = FUN_00d45bc0();
  uVar4 = FUN_00d45bc0();
  uVar11 = FUN_00d45bc0();
  FUN_01b57fb0(uVar10,uVar3,uVar4,uVar11);
  lVar2 = this_ptr[0x2b];
  lVar8 = lVar2;
  if (lVar2 != local_38) {
    lVar8 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar8 = 0;
        goto LAB_01b65d31;
      }
      FUN_00d50b00();
      lVar2 = this_ptr[0x2b];
      this_ptr[0x2b] = local_38;
    }
    else {
      local_30 = '\0';
LAB_01b65d31:
      this_ptr[0x2b] = lVar8;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar8 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
LAB_01b65d95:
  (**(code **)(*this_ptr + 0x620))();
  return;
}

