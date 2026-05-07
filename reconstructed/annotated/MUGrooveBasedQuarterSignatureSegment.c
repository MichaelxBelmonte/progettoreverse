// ===== MUGrooveBasedQuarterSignatureSegment — Annotated small functions =====
// 2 readable functions

// ==================================================
// @01426870 (2560 bytes) — math_loop

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
  longlong this;
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
      pvVar7 = _pthread_getspecific((pthread_key_t)this);
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
      lVar8 = *(longlong *)(*(longlong *)(this + 0x10) + 0x50);
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




// ==================================================
// @014281c0 (1075 bytes) — calculation

{
  int iVar1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_025e24d0;
  *(undefined8 *)((longlong)this + 0xc) = 0x100000000;
  if (DAT_027c11b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c1100 = FUN_00d4fe50();
      _DAT_027c10e8 = "MUGrooveBasedQuarterSignatureSegment";
      _DAT_027c10f0 = 0x70;
      _DAT_027c10f8 = FUN_01427ee0;
      _DAT_027c1108 = 0;
      uRam00000000027c1110 = 0;
      _DAT_027c1118 = 0;
      uRam00000000027c1120 = 0;
      _DAT_027c1128 = 0;
      uRam00000000027c1130 = 0;
      _DAT_027c1138 = 0;
      uRam00000000027c1140 = 0;
      _DAT_027c1148 = 0;
      uRam00000000027c1150 = 0;
      _DAT_027c1158 = 0;
      uRam00000000027c1160 = 0;
      _DAT_027c1168 = 0;
      uRam00000000027c1170 = 0;
      _DAT_027c1178 = 0;
      uRam00000000027c1180 = 0;
      _DAT_027c1188 = 0;
      uRam00000000027c1190 = 0;
      _DAT_027c1198 = 0;
      _uRam00000000027c11a0 = 0;
      _DAT_027c11a8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c11a3 == '\0') {
    FUN_014286f0();
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)this + 0x14) = 0x100000000;
  if (DAT_027c11b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c1100 = FUN_00d4fe50();
      _DAT_027c10e8 = "MUGrooveBasedQuarterSignatureSegment";
      _DAT_027c10f0 = 0x70;
      _DAT_027c10f8 = FUN_01427ee0;
      _DAT_027c1108 = 0;
      uRam00000000027c1110 = 0;
      _DAT_027c1118 = 0;
      uRam00000000027c1120 = 0;
      _DAT_027c1128 = 0;
      uRam00000000027c1130 = 0;
      _DAT_027c1138 = 0;
      uRam00000000027c1140 = 0;
      _DAT_027c1148 = 0;
      uRam00000000027c1150 = 0;
      _DAT_027c1158 = 0;
      uRam00000000027c1160 = 0;
      _DAT_027c1168 = 0;
      uRam00000000027c1170 = 0;
      _DAT_027c1178 = 0;
      uRam00000000027c1180 = 0;
      _DAT_027c1188 = 0;
      uRam00000000027c1190 = 0;
      _DAT_027c1198 = 0;
      _uRam00000000027c11a0 = 0;
      _DAT_027c11a8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c11a3 == '\0') {
    FUN_01428860();
    FUN_00e87980();
  }
  this[4] = 0;
  if (DAT_027c11b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c1100 = FUN_00d4fe50();
      _DAT_027c10e8 = "MUGrooveBasedQuarterSignatureSegment";
      _DAT_027c10f0 = 0x70;
      _DAT_027c10f8 = FUN_01427ee0;
      _DAT_027c1108 = 0;
      uRam00000000027c1110 = 0;
      _DAT_027c1118 = 0;
      uRam00000000027c1120 = 0;
      _DAT_027c1128 = 0;
      uRam00000000027c1130 = 0;
      _DAT_027c1138 = 0;
      uRam00000000027c1140 = 0;
      _DAT_027c1148 = 0;
      uRam00000000027c1150 = 0;
      _DAT_027c1158 = 0;
      uRam00000000027c1160 = 0;
      _DAT_027c1168 = 0;
      uRam00000000027c1170 = 0;
      _DAT_027c1178 = 0;
      uRam00000000027c1180 = 0;
      _DAT_027c1188 = 0;
      uRam00000000027c1190 = 0;
      _DAT_027c1198 = 0;
      _uRam00000000027c11a0 = 0;
      _DAT_027c11a8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c11a3 == '\0') {
    FUN_014289d0();
    FUN_00e87980();
  }
  this[5] = 0;
  if (DAT_027c11b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c1100 = FUN_00d4fe50();
      _DAT_027c10e8 = "MUGrooveBasedQuarterSignatureSegment";
      _DAT_027c10f0 = 0x70;
      _DAT_027c10f8 = FUN_01427ee0;
      _DAT_027c1108 = 0;
      uRam00000000027c1110 = 0;
      _DAT_027c1118 = 0;
      uRam00000000027c1120 = 0;
      _DAT_027c1128 = 0;
      uRam00000000027c1130 = 0;
      _DAT_027c1138 = 0;
      uRam00000000027c1140 = 0;
      _DAT_027c1148 = 0;
      uRam00000000027c1150 = 0;
      _DAT_027c1158 = 0;
      uRam00000000027c1160 = 0;
      _DAT_027c1168 = 0;
      uRam00000000027c1170 = 0;
      _DAT_027c1178 = 0;
      uRam00000000027c1180 = 0;
      _DAT_027c1188 = 0;
      uRam00000000027c1190 = 0;
      _DAT_027c1198 = 0;
      _uRam00000000027c11a0 = 0;
      _DAT_027c11a8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027c11a3 == '\0') {
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



