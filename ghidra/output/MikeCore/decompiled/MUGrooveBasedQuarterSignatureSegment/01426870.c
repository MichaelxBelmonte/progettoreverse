// Function: FUN_01426870
// Address: 01426870
// Size: 2560 bytes
// Class: MUGrooveBasedQuarterSignatureSegment


/* WARNING: Removing unreachable block (ram,0x01426d85) */
/* WARNING: Removing unreachable block (ram,0x01426d91) */
/* WARNING: Removing unreachable block (ram,0x01426961) */
/* WARNING: Removing unreachable block (ram,0x0142696d) */
/* WARNING: Removing unreachable block (ram,0x01426e25) */
/* WARNING: Removing unreachable block (ram,0x01426e31) */
/* WARNING: Removing unreachable block (ram,0x014269ba) */
/* WARNING: Removing unreachable block (ram,0x014269e0) */
/* WARNING: Removing unreachable block (ram,0x014269bc) */
/* WARNING: Removing unreachable block (ram,0x014269e2) */
/* WARNING: Removing unreachable block (ram,0x01426ec8) */
/* WARNING: Removing unreachable block (ram,0x01426ed4) */
/* WARNING: Removing unreachable block (ram,0x01426f9c) */
/* WARNING: Removing unreachable block (ram,0x01426fd0) */
/* WARNING: Removing unreachable block (ram,0x01426f9e) */
/* WARNING: Removing unreachable block (ram,0x01426fd4) */
/* WARNING: Removing unreachable block (ram,0x0142722f) */
/* WARNING: Removing unreachable block (ram,0x0142723c) */
/* WARNING: Removing unreachable block (ram,0x01427258) */

void FUN_01426870(pthread_key_t param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  pthread_key_t pVar12;
  int iVar13;
  longlong unaff_RDI;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  longlong local_b0;
  char local_a8;
  int local_98;
  int iStack_84;
  undefined8 local_60;
  longlong local_58;
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
      uVar3 = *(undefined8 *)(*(longlong *)(local_b0 + 0x10) + 8 + (longlong)local_98 * 8);
      iVar2 = iVar1;
      if (local_98 + 2 < iVar1) {
        iVar2 = 0;
      }
      pvVar7 = _pthread_getspecific((pthread_key_t)unaff_RDI);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017c4410();
      lVar8 = *(longlong *)(local_60 + 0x10);
      uVar4 = *(undefined8 *)(lVar8 + (longlong)((local_98 + 2) - iVar2) * 8);
      if (((char)local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific((pthread_key_t)lVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017c4410();
      pVar12 = (pthread_key_t)*(undefined8 *)(local_60 + 0x10);
      if (((char)local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar12);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar12 = (pthread_key_t)uVar3;
      }
      local_60 = FUN_017c3170();
      pvVar7 = _pthread_getspecific(pVar12);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar12 = (pthread_key_t)uVar4;
      }
      uVar9 = FUN_017c3170();
      iStack_84 = (int)((ulonglong)local_60 >> 0x20);
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
      FUN_00e7d000(uVar14,DAT_023b67d8);
      FUN_00e7b820();
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar14 = FUN_017c4c00();
      FUN_00e7d000(uVar14,DAT_023b67d8);
      FUN_00e7b820();
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar14 = FUN_017c4c00();
      FUN_00e7d000(uVar14,DAT_023b67d8);
      FUN_00e7b820();
      FUN_00e7b820();
      FUN_00e7c3c0();
      FUN_00e7b820();
      FUN_00e7c3c0();
      lVar8 = *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x50);
      local_98 = iVar6;
    } while (lVar8 == 0);
    local_50 = -1;
    lVar10 = local_60;
    while( true ) {
      local_60 = lVar10;
      lVar10 = (longlong)local_50;
      local_50 = local_50 + 1;
      iVar2 = *(int *)(lVar8 + 0x18);
      iVar13 = iVar2 + 7;
      if (-1 < iVar2) {
        iVar13 = iVar2;
      }
      local_58 = lVar8;
      if (iVar13 >> 3 <= local_50) break;
      lVar10 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + 8 + lVar10 * 8);
      FUN_00e7bcc0();
      FUN_00e7bdc0();
      local_60._4_4_ = (int)((ulonglong)lVar10 >> 0x20);
      if (((local_60._4_4_ != 0) && (iStack_84 != 0)) &&
         ((cVar5 = FUN_00e7c020(), cVar5 == '\0' && local_60._4_4_ != 0 &&
          ((iStack_84 != 0 && (cVar5 = FUN_00e7c020(), cVar5 != '\0')))))) {
        puVar11 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar11 = &DAT_025e1d30;
        *(undefined8 *)((longlong)puVar11 + 0xc) = 0;
        *(undefined4 *)((longlong)puVar11 + 0x14) = 0;
        puVar11[3] = 0x100000000;
        FUN_00d500e0();
        *(int *)((longlong)puVar11 + 0xc) = iVar6;
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
          *(float *)((longlong)puVar11 + 0x14) = fVar15 / fVar16;
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
          *(undefined4 *)((longlong)puVar11 + 0x14) = 0;
        }
        FUN_00d21140();
        FUN_00d50b20();
      }
    }
  } while( true );
}


