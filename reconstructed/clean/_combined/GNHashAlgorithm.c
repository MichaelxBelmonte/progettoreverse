// ===================================================================
// GNHashAlgorithm — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 00de7070
// ============================================================
// Function: FUN_00de7070
// Address: 00de7070
// Size: 536 bytes
// Class: GNHashAlgorithm
// String references:
//   "GNHashAlgorithm"

uint64_t FUN_00de7070(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint64_t uVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  
  plVar1 = (int64_t *)*arg1;
  if (plVar1 == this_ptr) {
    uVar9 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
    goto LAB_00de71b1;
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_00de719e:
    uVar9 = 0;
  }
  else {
    if ((g_027789b0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      g_02778900 = FUN_00d4fe50();
      g_027788e8 = "GNHashAlgorithm";
      g_027788f0 = 0x20;
      g_027788f8 = FUN_00cf8fe0;
      g_02778908 = 0;
      ram_0000000002778910 = 0;
      g_02778918 = 0;
      g_02778990 = 0;
      ram_0000000002778998 = 0;
      g_027789a0 = 0;
      g_027789a2 = 3;
      g_02778920 = 0;
      ram_0000000002778928 = 0;
      g_02778930 = 0;
      ram_0000000002778938 = 0;
      g_02778940 = 0;
      ram_0000000002778948 = 0;
      g_02778950 = 0;
      ram_0000000002778958 = 0;
      g_02778960 = 0;
      ram_0000000002778968 = 0;
      g_02778970 = 0;
      ram_0000000002778978 = 0;
      g_02778980 = 0;
      ram_0000000002778988 = 0;
      g_027789ab = 0;
      g_027789a3 = 0;
      ___cxa_guard_release();
    }
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') {
      arg1 = &g_02802688;
    }
    plVar1 = (int64_t *)*arg1;
    lVar4 = arg1[1];
    if (((char)lVar4 == '\0') || (plVar1 == (int64_t *)0x0)) {
      if (plVar1 == (int64_t *)0x0) goto LAB_00de719e;
    }
    else {
      FUN_00d50b00();
    }
    iVar6 = (**(code **)(*this_ptr + 0x370))();
    iVar7 = (**(code **)(*plVar1 + 0x370))();
    if (iVar6 == iVar7) {
      if ((char)this_ptr[3] == '\0') {
        (**(code **)(*this_ptr + 0x380))();
      }
      plVar2 = (int64_t *)this_ptr[2];
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if ((char)plVar1[3] == '\0') {
        (**(code **)(*plVar1 + 0x380))();
      }
      lVar3 = plVar1[2];
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      uVar8 = (**(code **)(*plVar2 + 0x50))();
      uVar9 = (uint64_t)uVar8;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      uVar9 = 0;
    }
    if ((char)lVar4 != '\0') {
      FUN_00d50b20();
    }
  }
LAB_00de71b1:
  return uVar9 & 0xffffffff;
}

