// Function: FUN_0183ce70
// Address: 0183ce70
// Size: 2446 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0183ce70(double param_1,double param_2,float param_3,float param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  pthread_key_t pVar16;
  longlong in_RCX;
  longlong lVar17;
  longlong lVar18;
  longlong in_RDX;
  longlong lVar19;
  longlong *plVar20;
  longlong unaff_RSI;
  longlong lVar21;
  ulonglong uVar22;
  longlong in_R8;
  longlong in_R9;
  longlong lVar23;
  float fVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  longlong *local_res8;
  undefined1 *local_res10;
  longlong *local_res18;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_80;
  char local_78;
  longlong local_38;
  
  lVar10 = in_RCX;
  pvVar9 = _pthread_getspecific((pthread_key_t)in_RCX);
  pVar16 = (pthread_key_t)lVar10;
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df480();
  pvVar9 = _pthread_getspecific(pVar16);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar25 = (double)FUN_01327990();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  pvVar9 = _pthread_getspecific(pVar16);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar10 = FUN_013de790();
  lVar11 = FUN_00e7dae0((double)lVar10 * param_1);
  pvVar9 = _pthread_getspecific(pVar16);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar12 = FUN_013de650();
  lVar1 = lVar12 + lVar10;
  lVar13 = *local_res18;
  lVar2 = lVar13 + lVar12;
  lVar18 = in_R8 + in_RCX;
  lVar3 = lVar12 + unaff_RSI;
  lVar21 = lVar1 - in_RDX;
  lVar17 = lVar2 + unaff_RSI;
  if (in_RCX == -1) {
    local_38 = -1;
    lVar19 = -1;
    lVar18 = -1;
  }
  else {
    fVar24 = DAT_02390d34;
    if (param_3 <= DAT_02390d34) {
      fVar24 = param_3;
    }
    fVar4 = 0.0;
    if (0.0 <= fVar24) {
      fVar4 = fVar24;
    }
    local_38 = (lVar11 - in_RDX) - unaff_RSI;
    lVar23 = in_RCX - lVar3;
    lVar19 = lVar21 - lVar18;
    lVar13 = lVar23;
    if (param_1 < DAT_0238fee8) {
      dVar27 = (double)local_38;
      lVar13 = FUN_00e7dae0(((double)lVar23 / (double)(lVar21 - lVar3)) * dVar27);
      lVar19 = FUN_00e7dae0(((double)lVar19 / (double)(lVar21 - lVar3)) * dVar27);
    }
    local_38 = local_38 - lVar19;
    if (DAT_02390124 <= fVar4) {
      iVar6 = FUN_00e7d780((float)(local_38 - lVar13) * (DAT_02390d34 - fVar4));
      lVar13 = (longlong)iVar6;
    }
    else {
      iVar6 = FUN_00e7d780(fVar4 * (float)lVar13);
      lVar13 = local_38 - iVar6;
    }
    iVar6 = FUN_00e7d850((double)in_R9 / param_2);
    fVar24 = 0.0;
    if (0.0 <= (float)lVar13 / (float)iVar6) {
      fVar24 = (float)lVar13 / (float)iVar6;
    }
    iVar7 = FUN_00e7d780();
    iVar8 = FUN_00e7d780(fVar24);
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    if ((iVar8 < iVar7) &&
       (lVar19 = FUN_00e7da10((float)lVar23 * DAT_02394288), lVar19 <= local_38 - iVar7 * iVar6)) {
      iVar8 = iVar7;
    }
    if (iVar8 < 1) {
      *local_res10 = 0;
    }
    else {
      lVar13 = (longlong)(iVar8 * iVar6);
    }
    lVar23 = 1;
    if (0 < lVar13) {
      lVar23 = lVar13;
    }
    local_38 = local_38 + lVar17;
    lVar19 = local_38 - lVar23;
    FUN_00e7dae0((double)in_R8 * _DAT_0240cfc8);
    FUN_00e7dae0((double)param_4 * (double)lVar23 * _DAT_0240cfc8);
    lVar13 = *local_res18;
  }
  lVar13 = (lVar11 - lVar10) + lVar13;
  *local_res18 = lVar13;
  puVar14 = (undefined8 *)FUN_00e8fc40();
  pVar16 = (pthread_key_t)lVar13;
  FUN_00d4ff40();
  *puVar14 = &DAT_025683c0;
  pcVar5 = DAT_025683d8;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  puVar15 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar15 = &DAT_025683c0;
  (*pcVar5)();
  FUN_00c92170();
  FUN_00c92160();
  plVar20 = (longlong *)*local_res8;
  pvVar9 = _pthread_getspecific(pVar16);
  if (pvVar9 != (void *)0x0) {
    plVar20 = (longlong *)*local_res8;
    lVar10 = FUN_00e8b990();
    if (lVar10 != 0) {
      plVar20 = (longlong *)plVar20[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
  }
  uVar26 = (**(code **)(*plVar20 + 0x410))((double)lVar2 / dVar25,(double)lVar12 / dVar25);
  if ((local_128 != '\0') && (local_130 != 0)) {
    uVar26 = FUN_00d50b20();
  }
  iVar6 = *(int *)(puVar14 + 3);
  FUN_00c8e340(uVar26,1);
  *(longlong *)(puVar14[2] + (longlong)iVar6) = lVar12;
  iVar6 = *(int *)(puVar15 + 3);
  uVar26 = FUN_00c8e340(lVar12,1);
  *(longlong *)(puVar15[2] + (longlong)iVar6) = lVar2;
  lVar10 = lVar2;
  if (unaff_RSI != 0) {
    plVar20 = (longlong *)*local_res8;
    pvVar9 = _pthread_getspecific((pthread_key_t)lVar2);
    if (pvVar9 != (void *)0x0) {
      plVar20 = (longlong *)*local_res8;
      lVar10 = FUN_00e8b990();
      if (lVar10 != 0) {
        plVar20 = (longlong *)plVar20[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
    }
    uVar26 = (**(code **)(*plVar20 + 0x410))((double)lVar17 / dVar25,(double)lVar3 / dVar25);
    if ((local_118 != '\0') && (local_120 != 0)) {
      uVar26 = FUN_00d50b20();
    }
    iVar6 = *(int *)(puVar14 + 3);
    FUN_00c8e340(uVar26,1);
    *(longlong *)(puVar14[2] + (longlong)iVar6) = lVar3;
    iVar6 = *(int *)(puVar15 + 3);
    uVar26 = FUN_00c8e340(lVar3,1);
    *(longlong *)(puVar15[2] + (longlong)iVar6) = lVar17;
    lVar10 = lVar17;
  }
  pVar16 = (pthread_key_t)lVar10;
  if (lVar19 != -1) {
    plVar20 = (longlong *)*local_res8;
    pvVar9 = _pthread_getspecific(pVar16);
    if (pvVar9 != (void *)0x0) {
      plVar20 = (longlong *)*local_res8;
      lVar10 = FUN_00e8b990();
      if (lVar10 != 0) {
        plVar20 = (longlong *)plVar20[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar20 + 0x410))((double)lVar19 / dVar25,(double)in_RCX / dVar25);
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    plVar20 = (longlong *)*local_res8;
    pvVar9 = _pthread_getspecific(pVar16);
    if (pvVar9 != (void *)0x0) {
      plVar20 = (longlong *)*local_res8;
      lVar10 = FUN_00e8b990();
      if (lVar10 != 0) {
        plVar20 = (longlong *)plVar20[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
    }
    uVar26 = (**(code **)(*plVar20 + 0x410))((double)local_38 / dVar25,(double)lVar18 / dVar25);
    if ((local_f8 != '\0') && (local_100 != 0)) {
      uVar26 = FUN_00d50b20();
    }
    iVar6 = *(int *)(puVar14 + 3);
    FUN_00c8e340(uVar26,1);
    *(longlong *)(puVar14[2] + (longlong)iVar6) = in_RCX;
    iVar6 = *(int *)(puVar14 + 3);
    FUN_00c8e340(in_RCX,1);
    *(longlong *)(puVar14[2] + (longlong)iVar6) = lVar18;
    iVar6 = *(int *)(puVar15 + 3);
    uVar26 = FUN_00c8e340(lVar18,1);
    pVar16 = (pthread_key_t)lVar18;
    *(longlong *)(puVar15[2] + (longlong)iVar6) = lVar19;
    iVar6 = *(int *)(puVar15 + 3);
    uVar26 = FUN_00c8e340(uVar26,1);
    *(longlong *)(puVar15[2] + (longlong)iVar6) = local_38;
  }
  if (in_RDX != 0) {
    plVar20 = (longlong *)*local_res8;
    pvVar9 = _pthread_getspecific(pVar16);
    if (pvVar9 != (void *)0x0) {
      plVar20 = (longlong *)*local_res8;
      lVar10 = FUN_00e8b990();
      if (lVar10 != 0) {
        plVar20 = (longlong *)plVar20[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
    }
    in_RDX = (lVar2 + lVar11) - in_RDX;
    uVar26 = (**(code **)(*plVar20 + 0x410))((double)in_RDX / dVar25,(double)lVar21 / dVar25);
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      uVar26 = FUN_00d50b20();
    }
    iVar6 = *(int *)(puVar14 + 3);
    FUN_00c8e340(uVar26,1);
    *(longlong *)(puVar14[2] + (longlong)iVar6) = lVar21;
    iVar6 = *(int *)(puVar15 + 3);
    uVar26 = FUN_00c8e340(lVar21,1);
    *(longlong *)(puVar15[2] + (longlong)iVar6) = in_RDX;
  }
  iVar6 = *(int *)(puVar14 + 3);
  FUN_00c8e340(uVar26,1);
  *(longlong *)(puVar14[2] + (longlong)iVar6) = lVar1;
  iVar6 = *(int *)(puVar15 + 3);
  FUN_00c8e340(lVar1,1);
  lVar10 = puVar15[2];
  *(longlong *)(lVar10 + iVar6) = lVar2 + lVar11;
  if (0xf < (int)*(uint *)(puVar14 + 3)) {
    uVar22 = 1;
    lVar11 = *(longlong *)puVar14[2];
    do {
      lVar1 = ((longlong *)puVar14[2])[uVar22];
      if ((lVar1 < lVar11) ||
         (*(longlong *)(lVar10 + uVar22 * 8) < *(longlong *)(lVar10 + -8 + uVar22 * 8))) {
        if (puVar15 == (undefined8 *)0x0) goto LAB_0183d7df;
        break;
      }
      uVar22 = uVar22 + 1;
      lVar11 = lVar1;
    } while (*(uint *)(puVar14 + 3) >> 3 != uVar22);
  }
  FUN_00d50b20();
LAB_0183d7df:
  if (puVar14 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


