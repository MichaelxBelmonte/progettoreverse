// Function: FUN_015ffad0
// Address: 015ffad0
// Size: 1868 bytes
// Class: MUTempoAnalyzerEvent


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_015ffad0(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char *pcVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *unaff_RSI;
  longlong lVar12;
  undefined8 *unaff_RDI;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  double dVar18;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  undefined8 *local_50;
  longlong local_48;
  char local_40 [12];
  float local_34;
  
  FUN_018acae0();
  lVar10 = DAT_027db9f8;
  if (DAT_027db9f8 != 0) {
    FUN_00d50b00();
  }
  dVar18 = (double)FUN_018ade30();
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar10 = *unaff_RSI;
  pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar4 != (void *)0x0) {
    lVar10 = *unaff_RSI;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  lVar10 = *(longlong *)(lVar10 + 0x38);
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar10;
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  local_50 = puVar6;
  FUN_01600500();
  local_58 = local_48;
  if ((local_40[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  uVar13 = *(uint *)(local_58 + 0xc);
  uVar14 = (ulonglong)uVar13;
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*pcVar2)();
  uVar15 = uVar14;
  if ((int)uVar13 < 1) {
    local_68 = (longlong *)(local_60 + 0x10);
  }
  else {
    do {
      FUN_00c8e690();
      lVar10 = local_48;
      if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      local_40[0] = '\0';
      local_48 = lVar10;
      FUN_00d21140();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      uVar13 = (int)uVar15 - 1;
      uVar15 = (ulonglong)uVar13;
    } while (uVar13 != 0);
    local_68 = (longlong *)(local_60 + 0x10);
    local_34 = 0.0;
    uVar15 = 0;
    do {
      lVar10 = *(longlong *)(*(longlong *)(local_58 + 0x10) + uVar15 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
      lVar10 = *(longlong *)(lVar10 + 0x38);
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      lVar5 = 0;
      do {
        iVar3 = FUN_015ff8d0();
        param_1 = *local_68;
        fVar17 = 0.0;
        lVar12 = 4;
        do {
          iVar1 = iVar3 + 1 >> 0x1f;
          fVar17 = (float)((uint)(*(float *)(*(longlong *)(lVar10 + 0x10) +
                                            (longlong)
                                            (int)((((uint)((iVar3 + 1) / 6 + iVar1) >> 2) - iVar1) *
                                                  -0x18 + iVar3 + 1) * 4) -
                                 *(float *)(param_1 + lVar12)) & _DAT_02390140) +
                   (float)((uint)(*(float *)(*(longlong *)(lVar10 + 0x10) +
                                            (longlong)
                                            (int)(iVar3 + (((uint)(iVar3 / 6 + (iVar3 >> 0x1f)) >> 2
                                                           ) - (iVar3 >> 0x1f)) * -0x18) * 4) -
                                 *(float *)(param_1 + -4 + lVar12)) & _DAT_02390140) + fVar17;
          lVar12 = lVar12 + 8;
          iVar3 = iVar3 + 2;
        } while (lVar12 != 100);
        fVar17 = (DAT_023908ec - fVar17) * DAT_02391090;
        *(float *)(*(longlong *)(*(longlong *)(puVar6[2] + uVar15 * 8) + 0x10) + lVar5 * 4) = fVar17
        ;
        if (fVar17 <= local_34) {
          fVar17 = local_34;
        }
        lVar5 = lVar5 + 1;
        local_34 = fVar17;
      } while (lVar5 != 0xc);
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar14);
    local_34 = local_34 * DAT_023b3888;
    uVar15 = 0;
    do {
      uVar16 = 0;
      do {
        fVar17 = *(float *)(*(longlong *)(*(longlong *)(puVar6[2] + uVar15 * 8) + 0x10) + uVar16 * 4
                           );
        if (local_34 <= fVar17) {
          lVar10 = *(longlong *)(*(longlong *)(local_58 + 0x10) + uVar15 * 8);
          if (lVar10 != 0) {
            FUN_00d50b00();
            fVar17 = *(float *)(*(longlong *)(*(longlong *)(puVar6[2] + uVar15 * 8) + 0x10) +
                               uVar16 * 4);
          }
          FUN_015fec80(fVar17,uVar16 & 0xffffffff);
          lVar5 = CONCAT71(uStack_77,local_78);
          if (local_70 == '\0') {
            if (lVar5 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          local_40[0] = '\0';
          local_48 = lVar5;
          FUN_00d21140();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0xc);
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar14);
  }
  fVar17 = (float)dVar18;
  if ((fVar17 < DAT_02394244) && (0 < *(int *)((longlong)local_50 + 0xc))) {
    lVar10 = 0;
    do {
      pVar9 = (pthread_key_t)param_1;
      lVar5 = *(longlong *)(local_50[2] + lVar10 * 8);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(pVar9);
      lVar12 = lVar5;
      if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        lVar12 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
      }
      iVar3 = *(int *)(lVar12 + 0x48) * 7;
      iVar3 = iVar3 + (((uint)(iVar3 / 6 + (iVar3 >> 0x1f)) >> 1) - (iVar3 >> 0x1f)) * -0xc;
      iVar3 = (iVar3 >> 0x1f & 0xcU) + iVar3;
      iVar1 = iVar3 * 2;
      iVar3 = iVar3 * 2 + 0x11;
      pVar9 = iVar3 + (((uint)(iVar3 / 6 + (iVar3 >> 0x1f)) >> 2) - (iVar3 >> 0x1f)) * -0x18;
      param_1 = (longlong)(int)pVar9;
      local_34 = *(float *)(*local_68 + param_1 * 4);
      fVar17 = *(float *)(*local_68 +
                         (longlong)
                         (int)(iVar1 + (((uint)(iVar1 / 6 + (iVar1 >> 0x1f)) >> 2) - (iVar1 >> 0x1f)
                                       ) * -0x18) * 4);
      if (local_34 <= fVar17) {
        local_34 = fVar17;
      }
      fVar17 = DAT_0239011c;
      if (local_34 < DAT_0239011c) {
        pvVar4 = _pthread_getspecific(pVar9);
        lVar12 = lVar5;
        if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar12 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        fVar17 = (local_34 + local_34) * *(float *)(lVar12 + 0x4c);
        *(float *)(lVar12 + 0x4c) = fVar17;
      }
      if (lVar5 != 0) {
        fVar17 = (float)FUN_00d50b20();
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)((longlong)local_50 + 0xc));
  }
  FUN_00d242c0(fVar17,0);
  puVar11 = local_50;
  while (*(int *)((longlong)puVar11 + 0xc) != 0) {
    FUN_00d23340();
    lVar10 = local_48;
    local_78 = local_40[0];
    pcVar8 = local_40;
    if (local_40[0] == '\0') {
      pcVar8 = &local_78;
    }
    *pcVar8 = '\0';
    if ((local_40[0] != '\0') && (lVar10 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
      local_34 = *(float *)(lVar10 + 0x4c);
    }
    else {
      local_34 = *(float *)(*(longlong *)
                             (lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 0x4c)
      ;
    }
    if ((local_78 != '\0') && (lVar10 != 0)) {
      FUN_00d50b20();
    }
    puVar11 = local_50;
    if (DAT_02391090 <= local_34) break;
    FUN_00d23740();
  }
  *unaff_RDI = puVar11;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


