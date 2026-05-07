// Function: FUN_00df72c0
// Address: 00df72c0
// Size: 726 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNString"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00df72c0(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar5;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar1 = (int64_t *)*param_2;
  if (plVar1 == (int64_t *)0x0) {
LAB_00df7390:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    if ((g_027048b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
LAB_00df7334:
      param_2 = &g_02802688;
    }
    else {
      if ((g_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        ___cxa_guard_release();
      }
      cVar3 = FUN_00e8da30();
      if (cVar3 == '\0') goto LAB_00df7334;
    }
    lVar2 = param_2[1];
    if (((char)lVar2 == '\0') || (*param_2 == 0)) {
      if (*param_2 == 0) goto LAB_00df7390;
    }
    else {
      FUN_00d50b00();
    }
    uVar5 = (**(code **)(*arg1 + 0x3d0))();
    local_38 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        uVar5 = FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_38 = '\x01';
    local_40 = local_50;
    FUN_00d95130(uVar5,&local_40);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((char)lVar2 != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}

