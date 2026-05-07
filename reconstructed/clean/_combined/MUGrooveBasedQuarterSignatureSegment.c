// ===================================================================
// MUGrooveBasedQuarterSignatureSegment — Complete reconstructed pseudocode
// 2 functions
// ===================================================================


// ============================================================
// 01426870
// ============================================================
// Function: FUN_01426870
// Address: 01426870
// Size: 2560 bytes
// Class: MUGrooveBasedQuarterSignatureSegment

void FUN_01426870(void* param_1)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t lVar10;
  void*puVar11;
  void* pVar12;
  int iVar13;
  int64_t this_ptr;
  uint32_t uVar14;
  float fVar15;
  float fVar16;
  int64_t local_b0;
  char local_a8;
  int local_98;
  int iStack_84;
  uint64_t local_60;
  int64_t local_58;
  int local_50;
  
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017c4410();
  iVar1 = *(int *)(local_b0 + 0xc);
  if (local_a8 != '\0') {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017c4410();
  if (local_a8 == '\0') {
    if (local_b0 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_b0 == 0) {
    return;
  }
  local_98 = -1;
  do {
    do {
      iVar6 = local_98 + 1;
      if (*(int *)(local_b0 + 0xc) <= iVar6) {
        FUN_0142bf90();
        FUN_00d50b20();
        return;
      }
      uVar3 = *(void*)(*(int64_t *)(local_b0 + 0x10) + 8 + (int64_t)local_98 * 8);
      iVar2 = iVar1;
      if (local_98 + 2 < iVar1) {
        iVar2 = 0;
      }
      pvVar7 = _pthread_getspecific((void*)this_ptr);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017c4410();
      lVar8 = *(int64_t *)(local_60 + 0x10);
      uVar4 = *(void*)(lVar8 + (int64_t)((local_98 + 2) - iVar2) * 8);
      if (((char)local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific((void*)lVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017c4410();
      pVar12 = (void*)*(void*)(local_60 + 0x10);
      if (((char)local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar12);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar12 = (void*)uVar3;
      }
      local_60 = FUN_017c3170();
      pvVar7 = _pthread_getspecific(pVar12);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar12 = (void*)uVar4;
      }
      uVar9 = FUN_017c3170();
      iStack_84 = (int)((uint64_t)local_60 >> 0x20);
      if (((uVar9 >> 0x20 != 0) && (iStack_84 != 0)) && (cVar5 = FUN_00e7c020(), cVar5 == '\0')) {
        pvVar7 = _pthread_getspecific(pVar12);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017c4300();
        FUN_00e7b820();
      }
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar9 = FUN_017c3170();
      if (((uVar9 >> 0x20 != 0) && (iStack_84 != 0)) && (cVar5 = FUN_00e7c020(), cVar5 == '\0')) {
        pvVar7 = _pthread_getspecific(pVar12);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017c4300();
        FUN_00e7b970();
      }
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar14 = FUN_017c4c00();
      FUN_00e7d000(uVar14,g_023b67d8);
      FUN_00e7b820();
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar14 = FUN_017c4c00();
      FUN_00e7d000(uVar14,g_023b67d8);
      FUN_00e7b820();
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar14 = FUN_017c4c00();
      FUN_00e7d000(uVar14,g_023b67d8);
      FUN_00e7b820();
      FUN_00e7b820();
      FUN_00e7c3c0();
      FUN_00e7b820();
      FUN_00e7c3c0();
      lVar8 = *(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x50);
      local_98 = iVar6;
    } while (lVar8 == 0);
    local_50 = -1;
    lVar10 = local_60;
    while( true ) {
      local_60 = lVar10;
      lVar10 = (int64_t)local_50;
      local_50 = local_50 + 1;
      iVar2 = *(int *)(lVar8 + 0x18);
      iVar13 = iVar2 + 7;
      if (-1 < iVar2) {
        iVar13 = iVar2;
      }
      local_58 = lVar8;
      if (iVar13 >> 3 <= local_50) break;
      lVar10 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + 8 + lVar10 * 8);
      FUN_00e7bcc0();
      FUN_00e7bdc0();
      local_60._4_4_ = (int)((uint64_t)lVar10 >> 0x20);
      if (((local_60._4_4_ != 0) && (iStack_84 != 0)) &&
         ((cVar5 = FUN_00e7c020(), cVar5 == '\0' && local_60._4_4_ != 0 &&
          ((iStack_84 != 0 && (cVar5 = FUN_00e7c020(), cVar5 != '\0')))))) {
        puVar11 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar11 = &g_025e1d30;
        *(void*)((int64_t)puVar11 + 0xc) = 0;
        *(void*)((int64_t)puVar11 + 0x14) = 0;
        puVar11[3] = 0x100000000;
        FUN_00d500e0();
        *(int *)((int64_t)puVar11 + 0xc) = iVar6;
        *(int *)(puVar11 + 2) = local_50;
        FUN_00e7b970();
        puVar11[3] = lVar10;
        if ((local_60._4_4_ == 0) || (iStack_84 == 0)) {
LAB_014271a1:
          FUN_00e7b970();
          fVar15 = (float)FUN_00e7c810();
          FUN_00e7b970();
          fVar16 = (float)FUN_00e7c810();
LAB_01427201:
          *(float *)((int64_t)puVar11 + 0x14) = fVar15 / fVar16;
        }
        else {
          cVar5 = FUN_00e7c000();
          if (cVar5 == '\0') {
            if (((local_60._4_4_ == 0) || (iStack_84 == 0)) ||
               (cVar5 = FUN_00e7c020(), cVar5 == '\0')) goto LAB_014271a1;
            FUN_00e7b970();
            fVar15 = (float)FUN_00e7c810();
            FUN_00e7b970();
            fVar16 = (float)FUN_00e7c810();
            goto LAB_01427201;
          }
          *(void*)((int64_t)puVar11 + 0x14) = 0;
        }
        FUN_00d21140();
        FUN_00d50b20();
      }
    }
  } while( true );
}



// ============================================================
// 014281c0
// ============================================================
// Function: FUN_014281c0
// Address: 014281c0
// Size: 1075 bytes
// Class: MUGrooveBasedQuarterSignatureSegment
// String references:
//   "MUGrooveBasedQuarterSignatureSegment"

void FUN_014281c0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025e24d0;
  *(void*)((int64_t)this_ptr + 0xc) = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027c11a3 == '\0') {
    FUN_014286f0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027c11a3 == '\0') {
    FUN_01428860();
    FUN_00e87980();
  }
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_027c11a3 == '\0') {
    FUN_014289d0();
    FUN_00e87980();
  }
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_027c11a3 == '\0') {
    FUN_01428b40();
    FUN_00e87980();
  }
  FUN_01428cb0();
  FUN_01428f30();
  FUN_01429220();
  FUN_01429510();
  FUN_01429790();
  FUN_01429a10();
  FUN_01429c90();
  FUN_01429f10();
  return;
}

