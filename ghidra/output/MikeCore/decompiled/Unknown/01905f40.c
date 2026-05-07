// Function: FUN_01905f40
// Address: 01905f40
// Size: 2866 bytes
// Class: Unknown


void FUN_01905f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  longlong lVar9;
  longlong *plVar10;
  void *pvVar11;
  byte bVar12;
  pthread_key_t pVar13;
  int iVar14;
  int iVar15;
  uint unaff_ESI;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong *unaff_RDI;
  longlong lVar19;
  size_t sVar20;
  ulonglong uVar21;
  longlong lVar22;
  bool bVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  float fVar28;
  float fVar29;
  int iStack_84;
  longlong local_58;
  char local_50;
  int local_44;
  longlong local_40;
  char local_38 [8];
  
  if (*(int *)(*unaff_RDI + 0xc) < 3) {
    return;
  }
  uVar6 = 2;
  if (unaff_ESI != 0) {
    uVar6 = (ulonglong)unaff_ESI;
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar13 = 0x25f0d98;
  *puVar7 = &DAT_025f0d98;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  (*DAT_025f0db0)();
  local_44 = 1;
  pvVar8 = _pthread_getspecific(pVar13);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar9 = FUN_019079b0();
  pvVar8 = _pthread_getspecific(pVar13);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_58 = FUN_019079b0();
  local_40 = lVar9;
  FUN_00e7b970();
  lVar26 = local_40;
  lVar9 = *unaff_RDI;
  iVar4 = *(int *)(lVar9 + 0xc);
  iVar15 = (int)uVar6;
  if (1 < iVar4) {
    bVar23 = true;
    lVar25 = 1;
    do {
      pVar13 = (pthread_key_t)lVar9;
      pvVar8 = _pthread_getspecific(pVar13);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar9 = FUN_019079b0();
      pvVar8 = _pthread_getspecific(pVar13);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      local_40 = lVar9;
      FUN_00e7b970();
      local_58 = local_40;
      iVar4 = (int)((ulonglong)local_40 >> 0x20);
      if (local_44 < iVar4) {
        local_44 = iVar4;
      }
      if (((iVar4 == 0) || (iStack_84 = (int)((ulonglong)lVar26 >> 0x20), iStack_84 == 0)) ||
         (cVar3 = FUN_00e7c000(), cVar3 == '\0')) {
        bVar23 = false;
      }
      sVar20 = (size_t)param_3;
      lVar25 = lVar25 + 1;
      lVar9 = *unaff_RDI;
      iVar4 = *(int *)(lVar9 + 0xc);
    } while (lVar25 < iVar4);
    if (!bVar23) {
      pvVar8 = _pthread_getspecific((pthread_key_t)lVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      FUN_00d23340();
      lVar26 = local_40;
      pvVar8 = (void *)CONCAT71((int7)((ulonglong)lVar9 >> 8),local_38[0]);
      plVar10 = (longlong *)local_38;
      if (local_38[0] == '\0') {
        plVar10 = &local_58;
      }
      local_58 = CONCAT71(local_58._1_7_,local_38[0]);
      *(char *)plVar10 = '\0';
      if ((local_38[0] != '\0') && (lVar26 != 0)) {
        FUN_00d50b20();
      }
      pvVar11 = _pthread_getspecific((pthread_key_t)pvVar8);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar9 = FUN_019079b0();
      if (((char)local_58 != '\0') && (lVar26 != 0)) {
        FUN_00d50b20();
      }
      local_40 = lVar9;
      FUN_00e7b970();
      FUN_00e7c2a0();
      iVar4 = FUN_00e7cea0();
      FUN_00c8e690();
      lVar9 = local_40;
      if ((((local_38[0] == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
         (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      if (3 < (int)*(uint *)(lVar9 + 0x18)) {
        _memset_pattern16(pvVar8,(void *)((ulonglong)((*(uint *)(lVar9 + 0x18) >> 2) - 1) * 4 + 4),
                          sVar20);
      }
      if (0 < *(int *)(*unaff_RDI + 0xc)) {
        lVar26 = 0;
        do {
          pVar13 = (pthread_key_t)pvVar8;
          pvVar8 = _pthread_getspecific(pVar13);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_40 = FUN_019079b0();
          FUN_00e7b970();
          FUN_00e7c2a0();
          iVar5 = FUN_00e7cea0();
          pvVar8 = _pthread_getspecific(pVar13);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar2 = (double)FUN_01907950();
          *(float *)(*(longlong *)(lVar9 + 0x10) + (longlong)iVar5 * 4) = (float)dVar2;
          lVar26 = lVar26 + 1;
          pvVar8 = (void *)(longlong)*(int *)(*unaff_RDI + 0xc);
        } while (lVar26 < (longlong)pvVar8);
      }
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (7 < (int)uVar1) {
        lVar26 = *(longlong *)(lVar9 + 0x10);
        uVar27 = 1;
        lVar22 = -1;
        uVar18 = 0;
        lVar25 = lVar26;
        do {
          lVar25 = lVar25 + 4;
          fVar28 = *(float *)(lVar26 + uVar18 * 4);
          uVar21 = uVar18 + 1;
          bVar12 = 3;
          lVar19 = 0;
          uVar24 = uVar27 & 0xffffffff;
          do {
            uVar16 = uVar24;
            fVar29 = *(float *)(lVar25 + lVar19 * 4);
            lVar19 = lVar19 + 1;
            bVar12 = bVar12 + 1;
            uVar24 = (ulonglong)((int)uVar16 + 1);
          } while (NAN(fVar29));
          iVar5 = (int)lVar19;
          uVar24 = (ulonglong)(uint)((int)uVar18 + iVar5);
          if (uVar21 < uVar24) {
            fVar29 = (fVar29 - fVar28) / (float)iVar5;
            uVar17 = uVar27;
            if ((iVar5 - 1U & 3) != 0) {
              uVar17 = 0;
              do {
                fVar28 = fVar28 + fVar29;
                *(float *)(lVar25 + uVar17 * 4) = fVar28;
                uVar17 = uVar17 + 1;
              } while ((bVar12 & 3) != uVar17);
              uVar17 = uVar17 - lVar22;
            }
            if (2 < (-2 - uVar18) + uVar24) {
              do {
                *(float *)(lVar26 + uVar17 * 4) = fVar28 + fVar29;
                fVar28 = fVar28 + fVar29 + fVar29;
                *(float *)(lVar26 + 4 + uVar17 * 4) = fVar28;
                fVar28 = fVar28 + fVar29;
                *(float *)(lVar26 + 8 + uVar17 * 4) = fVar28;
                fVar28 = fVar28 + fVar29;
                *(float *)(lVar26 + 0xc + uVar17 * 4) = fVar28;
                uVar17 = uVar17 + 4;
              } while (uVar16 != uVar17);
            }
          }
          uVar27 = uVar27 + 1;
          lVar22 = lVar22 + -1;
          uVar18 = uVar21;
        } while (uVar21 != (uVar1 >> 2) - 1);
      }
      local_58 = lVar9;
      local_50 = '\0';
      FUN_00c8e4f0();
      lVar26 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      iVar5 = *(int *)(lVar26 + 0x18);
      iVar14 = iVar5 + 3;
      if (-1 < iVar5) {
        iVar14 = iVar5;
      }
      lVar25 = 3;
      FUN_015c15b0((float)(local_44 * iVar15) + DAT_02391090,iVar14 >> 2);
      fVar28 = DAT_02390124;
      if ((iVar15 <= iVar4) && (0 < iVar15)) {
        lVar22 = *(longlong *)(lVar26 + 0x10);
        lVar25 = *(longlong *)(lVar9 + 0x10);
        uVar18 = 0;
        do {
          uVar27 = uVar18 + 1;
          fVar29 = (float)(int)uVar27 / (float)(iVar15 + 1);
          *(float *)(lVar22 + uVar18 * 4) =
               *(float *)(lVar25 + uVar18 * 4) * (fVar28 - fVar29) +
               *(float *)(lVar22 + uVar18 * 4) * fVar29;
          lVar19 = (longlong)iVar4;
          *(float *)(lVar22 + lVar19 * 4) =
               (fVar28 - fVar29) * *(float *)(lVar25 + lVar19 * 4) +
               fVar29 * *(float *)(lVar22 + lVar19 * 4);
          iVar4 = iVar4 + -1;
          uVar18 = uVar27;
        } while (uVar6 != uVar27);
      }
      if (*(int *)(*unaff_RDI + 0xc) < 1) {
        if (lVar26 != 0) goto LAB_01906a57;
      }
      else {
        lVar22 = 0;
        do {
          pVar13 = (pthread_key_t)lVar25;
          pvVar8 = _pthread_getspecific(pVar13);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_40 = FUN_019079b0();
          FUN_00e7b970();
          FUN_00e7c2a0();
          iVar4 = FUN_00e7cea0();
          pvVar8 = _pthread_getspecific(pVar13);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01907cc0(SUB84((double)*(float *)(*(longlong *)(lVar26 + 0x10) + (longlong)iVar4 * 4),
                             0));
          lVar22 = lVar22 + 1;
          lVar25 = (longlong)*(int *)(*unaff_RDI + 0xc);
        } while (lVar22 < lVar25);
LAB_01906a57:
        FUN_00d50b20();
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      goto joined_r0x019064f2;
    }
  }
  FUN_00c8e690();
  lVar26 = local_40;
  if (((local_38[0] == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38[0] != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (0 < *(int *)(*unaff_RDI + 0xc)) {
    lVar25 = 0;
    do {
      pvVar8 = _pthread_getspecific((pthread_key_t)lVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar2 = (double)FUN_01907950();
      *(float *)(*(longlong *)(lVar26 + 0x10) + lVar25 * 4) = (float)dVar2;
      lVar25 = lVar25 + 1;
      lVar9 = (longlong)*(int *)(*unaff_RDI + 0xc);
    } while (lVar25 < lVar9);
  }
  local_58 = lVar26;
  local_50 = '\0';
  FUN_00c8e4f0();
  lVar9 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  iVar5 = *(int *)(lVar9 + 0x18);
  iVar14 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar14 = iVar5;
  }
  lVar25 = 3;
  FUN_015c15b0((float)iVar15 + DAT_02391090,iVar14 >> 2);
  fVar28 = DAT_02390124;
  if ((iVar15 < iVar4) && (0 < iVar15)) {
    lVar22 = *(longlong *)(lVar9 + 0x10);
    lVar25 = *(longlong *)(lVar26 + 0x10);
    uVar18 = 0;
    do {
      iVar4 = iVar4 + -1;
      uVar27 = uVar18 + 1;
      fVar29 = (float)(int)uVar27 / (float)(iVar15 + 1);
      *(float *)(lVar22 + uVar18 * 4) =
           *(float *)(lVar25 + uVar18 * 4) * (fVar28 - fVar29) +
           *(float *)(lVar22 + uVar18 * 4) * fVar29;
      lVar19 = (longlong)iVar4;
      *(float *)(lVar22 + lVar19 * 4) =
           (fVar28 - fVar29) * *(float *)(lVar25 + lVar19 * 4) +
           fVar29 * *(float *)(lVar22 + lVar19 * 4);
      uVar18 = uVar27;
    } while (uVar6 != uVar27);
  }
  if (*(int *)(*unaff_RDI + 0xc) < 1) {
    if (lVar9 != 0) goto LAB_019064d6;
  }
  else {
    lVar22 = 0;
    do {
      pvVar8 = _pthread_getspecific((pthread_key_t)lVar25);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01907cc0(SUB84((double)*(float *)(*(longlong *)(lVar9 + 0x10) + lVar22 * 4),0));
      lVar22 = lVar22 + 1;
      lVar25 = (longlong)*(int *)(*unaff_RDI + 0xc);
    } while (lVar22 < lVar25);
LAB_019064d6:
    FUN_00d50b20();
  }
  if (lVar26 != 0) {
    FUN_00d50b20();
  }
joined_r0x019064f2:
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


