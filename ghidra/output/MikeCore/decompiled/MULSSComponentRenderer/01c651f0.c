// Function: FUN_01c651f0
// Address: 01c651f0
// Size: 2179 bytes
// Class: MULSSComponentRenderer


/* WARNING: Removing unreachable block (ram,0x01c65855) */
/* WARNING: Removing unreachable block (ram,0x01c6585e) */
/* WARNING: Removing unreachable block (ram,0x01c655ed) */
/* WARNING: Removing unreachable block (ram,0x01c655f9) */
/* WARNING: Removing unreachable block (ram,0x01c654f4) */
/* WARNING: Removing unreachable block (ram,0x01c65500) */
/* WARNING: Removing unreachable block (ram,0x01c6598f) */
/* WARNING: Removing unreachable block (ram,0x01c6599c) */

void FUN_01c651f0(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  undefined8 *puVar7;
  int extraout_var;
  int extraout_var_00;
  void *pvVar8;
  int extraout_var_01;
  int extraout_var_02;
  int extraout_var_03;
  ulonglong uVar9;
  int extraout_var_04;
  int extraout_var_05;
  int extraout_var_06;
  pthread_key_t pVar10;
  uint uVar11;
  undefined1 *puVar12;
  longlong unaff_RDI;
  longlong lVar13;
  bool bVar14;
  undefined8 uVar15;
  int iStack_94;
  longlong local_90;
  char local_88;
  int iStack_64;
  ulonglong local_60;
  char local_58;
  undefined8 local_48;
  char local_40;
  
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar12 = &DAT_02572358;
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  lVar2 = *(longlong *)(unaff_RDI + 0x2b0);
  *(undefined8 **)(unaff_RDI + 0x2b0) = puVar7;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025683c0;
  pcVar5 = DAT_025683d8;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  lVar2 = *(longlong *)(unaff_RDI + 0x2b8);
  *(undefined8 **)(unaff_RDI + 0x2b8) = puVar7;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025683c0;
  (*pcVar5)();
  FUN_00c92170();
  FUN_00c92160();
  lVar2 = *(longlong *)(unaff_RDI + 0x2c0);
  *(undefined8 **)(unaff_RDI + 0x2c0) = puVar7;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00e7bdb0();
  FUN_00e7bdb0();
  FUN_00e7bcc0();
  cVar6 = FUN_016bf360();
  iStack_94 = extraout_var;
  iStack_64 = extraout_var_00;
  if (cVar6 != '\0') {
    cVar6 = FUN_016bf500();
    if (cVar6 == '\0') {
      pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_90 = FUN_016bf0f0();
      uVar15 = FUN_00e7b970();
      FUN_016c4760(uVar15,0);
      iStack_94 = extraout_var_01;
    }
    cVar6 = FUN_016bf530();
    if (cVar6 == '\0') {
      pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_90 = FUN_016bf100();
      uVar15 = FUN_00e7b820();
      FUN_016c4760(uVar15,0);
      iStack_64 = extraout_var_02;
    }
  }
  lVar2 = local_90;
  uVar11 = *(uint *)(unaff_RDI + 0x1cc);
  if (uVar11 < 0x16) {
    puVar12 = &LAB_00330040;
    if ((0x330040U >> (uVar11 & 0x1f) & 1) == 0) {
      puVar12 = (undefined1 *)0xc0000;
      if ((0xc0000U >> (uVar11 & 0x1f) & 1) != 0) {
        FUN_00e7bdb0();
        pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar6 = FUN_016c2730();
        iStack_64 = extraout_var_05;
        if (cVar6 != '\0') {
          FUN_00e7bdb0();
          iStack_94 = extraout_var_06;
        }
      }
    }
    else {
      FUN_00e7bdb0();
      iStack_64 = extraout_var_03;
    }
  }
  pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016d8ab0();
  if ((local_88 == '\0') && (local_90 != 0)) {
    FUN_00d50b00();
  }
  cVar6 = FUN_016bf360();
  if (((cVar6 != '\0') && (uVar9 = FUN_016bf0f0(), uVar9 >> 0x20 != 0)) &&
     (uVar9 = FUN_016bf100(), uVar9 >> 0x20 != 0)) {
    local_90 = FUN_016bf100();
    FUN_00e7c260();
    local_60 = FUN_016bf0f0();
    local_48._4_4_ = (int)((ulonglong)local_90 >> 0x20);
    bVar14 = local_48._4_4_ != 0;
    local_48 = local_90;
    if (((bVar14) && (local_60 >> 0x20 != 0)) && (cVar6 = FUN_00e7c000(), cVar6 != '\0')) {
      FUN_00e7bdb0();
      iStack_64 = extraout_var_04;
    }
  }
  FUN_01c44d20();
  if (local_88 == '\0') {
    if (local_90 == 0) goto LAB_01c65a20;
    FUN_00d50b00();
  }
  else if (local_90 == 0) goto LAB_01c65a20;
  if (0 < *(int *)(local_90 + 0xc)) {
    lVar13 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(local_90 + 0x10) + lVar13 * 8);
      pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pVar10 = (pthread_key_t)puVar12;
      if (local_48 != 0) {
        pvVar8 = _pthread_getspecific(pVar10);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar8 = _pthread_getspecific(pVar10);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        pvVar8 = _pthread_getspecific(pVar10);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_60 = FUN_01507970();
        puVar12 = (undefined1 *)(local_60 >> 0x20);
        if ((iStack_94 == 0) || (uVar11 = (uint)(local_60 >> 0x20), uVar11 == 0)) {
LAB_01c657f7:
          if (((iStack_64 == 0) || ((int)puVar12 == 0)) || (cVar6 = FUN_00e7c020(), cVar6 == '\0'))
          {
            local_40 = '\0';
            FUN_00d21140();
            lVar4 = *(longlong *)(unaff_RDI + 0x2b8);
            pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar15 = FUN_016c98e0();
            iVar1 = *(int *)(lVar4 + 0x18);
            FUN_00c8e340(uVar15,1);
            *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar1) = uVar15;
            lVar4 = *(longlong *)(unaff_RDI + 0x2c0);
            pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar8 = _pthread_getspecific((pthread_key_t)puVar12);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar15 = FUN_01508610();
            uVar15 = FUN_016c98e0(uVar15,0);
            iVar1 = *(int *)(lVar4 + 0x18);
            FUN_00c8e340();
            *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar1) = uVar15;
            bVar14 = local_48 != 0;
            local_48 = lVar3;
            if (bVar14) {
              FUN_00d50b20();
            }
            goto LAB_01c65640;
          }
        }
        else {
          cVar6 = FUN_00e7c020();
          if (cVar6 == '\0') {
            puVar12 = (undefined1 *)(ulonglong)uVar11;
            goto LAB_01c657f7;
          }
        }
        if (local_48 != 0) {
          FUN_00d50b20();
        }
      }
LAB_01c65640:
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < *(int *)(local_90 + 0xc));
  }
  FUN_001159b0();
  FUN_00d50b20();
LAB_01c65a20:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}


