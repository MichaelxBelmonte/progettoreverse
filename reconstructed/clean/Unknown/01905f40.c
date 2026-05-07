// Function: FUN_01905f40
// Address: 01905f40
// Size: 2866 bytes
// Class: Unknown

void FUN_01905f40(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint uVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  void*puVar7;
  void *pvVar8;
  int64_t lVar9;
  int64_t *plVar10;
  void *pvVar11;
  byte bVar12;
  void* pVar13;
  int iVar14;
  int iVar15;
  uint unaff_ESI;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  int64_t *this_ptr;
  int64_t lVar19;
  size_t sVar20;
  uint64_t uVar21;
  int64_t lVar22;
  bool bVar23;
  uint64_t uVar24;
  int64_t lVar25;
  int64_t lVar26;
  uint64_t uVar27;
  float fVar28;
  float fVar29;
  int iStack_84;
  int64_t local_58;
  char local_50;
  int local_44;
  int64_t local_40;
  char local_38 [8];
  
  if (*(int *)(*this_ptr + 0xc) < 3) {
    return;
  }
  uVar6 = 2;
  if (unaff_ESI != 0) {
    uVar6 = (uint64_t)unaff_ESI;
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar13 = 0x25f0d98;
  *puVar7 = &g_025f0d98;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  (*g_025f0db0)();
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
  lVar9 = *this_ptr;
  iVar4 = *(int *)(lVar9 + 0xc);
  iVar15 = (int)uVar6;
  if (1 < iVar4) {
    bVar23 = true;
    lVar25 = 1;
    do {
      pVar13 = (void*)lVar9;
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
      iVar4 = (int)((uint64_t)local_40 >> 0x20);
      if (local_44 < iVar4) {
        local_44 = iVar4;
      }
      if (((iVar4 == 0) || (iStack_84 = (int)((uint64_t)lVar26 >> 0x20), iStack_84 == 0)) ||
         (cVar3 = FUN_00e7c000(), cVar3 == '\0')) {
        bVar23 = false;
      }
      sVar20 = (size_t)param_3;
      lVar25 = lVar25 + 1;
      lVar9 = *this_ptr;
      iVar4 = *(int *)(lVar9 + 0xc);
    } while (lVar25 < iVar4);
    if (!bVar23) {
      pvVar8 = _pthread_getspecific((void*)lVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      FUN_00d23340();
      lVar26 = local_40;
      pvVar8 = (void *)CONCAT71((int7)((uint64_t)lVar9 >> 8),local_38[0]);
      plVar10 = (int64_t *)local_38;
      if (local_38[0] == '\0') {
        plVar10 = &local_58;
      }
      local_58 = CONCAT71(local_58._1_7_,local_38[0]);
      *(char *)plVar10 = '\0';
      if ((local_38[0] != '\0') && (lVar26 != 0)) {
        FUN_00d50b20();
      }
      pvVar11 = _pthread_getspecific((void*)pvVar8);
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
        _memset_pattern16(pvVar8,(void *)((uint64_t)((*(uint *)(lVar9 + 0x18) >> 2) - 1) * 4 + 4),
                          sVar20);
      }
      if (0 < *(int *)(*this_ptr + 0xc)) {
        lVar26 = 0;
        do {
          pVar13 = (void*)pvVar8;
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
          *(float *)(*(int64_t *)(lVar9 + 0x10) + (int64_t)iVar5 * 4) = (float)dVar2;
          lVar26 = lVar26 + 1;
          pvVar8 = (void *)(int64_t)*(int *)(*this_ptr + 0xc);
        } while (lVar26 < (int64_t)pvVar8);
      }
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (7 < (int)uVar1) {
        lVar26 = *(int64_t *)(lVar9 + 0x10);
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
            uVar24 = (uint64_t)((int)uVar16 + 1);
          } while (NAN(fVar29));
          iVar5 = (int)lVar19;
          uVar24 = (uint64_t)(uint)((int)uVar18 + iVar5);
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
      FUN_015c15b0((float)(local_44 * iVar15) + g_02391090,iVar14 >> 2);
      fVar28 = g_02390124;
      if ((iVar15 <= iVar4) && (0 < iVar15)) {
        lVar22 = *(int64_t *)(lVar26 + 0x10);
        lVar25 = *(int64_t *)(lVar9 + 0x10);
        uVar18 = 0;
        do {
          uVar27 = uVar18 + 1;
          fVar29 = (float)(int)uVar27 / (float)(iVar15 + 1);
          *(float *)(lVar22 + uVar18 * 4) =
               *(float *)(lVar25 + uVar18 * 4) * (fVar28 - fVar29) +
               *(float *)(lVar22 + uVar18 * 4) * fVar29;
          lVar19 = (int64_t)iVar4;
          *(float *)(lVar22 + lVar19 * 4) =
               (fVar28 - fVar29) * *(float *)(lVar25 + lVar19 * 4) +
               fVar29 * *(float *)(lVar22 + lVar19 * 4);
          iVar4 = iVar4 + -1;
          uVar18 = uVar27;
        } while (uVar6 != uVar27);
      }
      if (*(int *)(*this_ptr + 0xc) < 1) {
        if (lVar26 != 0) goto LAB_01906a57;
      }
      else {
        lVar22 = 0;
        do {
          pVar13 = (void*)lVar25;
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
          FUN_01907cc0(SUB84((double)*(float *)(*(int64_t *)(lVar26 + 0x10) + (int64_t)iVar4 * 4),
                             0));
          lVar22 = lVar22 + 1;
          lVar25 = (int64_t)*(int *)(*this_ptr + 0xc);
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
  if (0 < *(int *)(*this_ptr + 0xc)) {
    lVar25 = 0;
    do {
      pvVar8 = _pthread_getspecific((void*)lVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar2 = (double)FUN_01907950();
      *(float *)(*(int64_t *)(lVar26 + 0x10) + lVar25 * 4) = (float)dVar2;
      lVar25 = lVar25 + 1;
      lVar9 = (int64_t)*(int *)(*this_ptr + 0xc);
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
  FUN_015c15b0((float)iVar15 + g_02391090,iVar14 >> 2);
  fVar28 = g_02390124;
  if ((iVar15 < iVar4) && (0 < iVar15)) {
    lVar22 = *(int64_t *)(lVar9 + 0x10);
    lVar25 = *(int64_t *)(lVar26 + 0x10);
    uVar18 = 0;
    do {
      iVar4 = iVar4 + -1;
      uVar27 = uVar18 + 1;
      fVar29 = (float)(int)uVar27 / (float)(iVar15 + 1);
      *(float *)(lVar22 + uVar18 * 4) =
           *(float *)(lVar25 + uVar18 * 4) * (fVar28 - fVar29) +
           *(float *)(lVar22 + uVar18 * 4) * fVar29;
      lVar19 = (int64_t)iVar4;
      *(float *)(lVar22 + lVar19 * 4) =
           (fVar28 - fVar29) * *(float *)(lVar25 + lVar19 * 4) +
           fVar29 * *(float *)(lVar22 + lVar19 * 4);
      uVar18 = uVar27;
    } while (uVar6 != uVar27);
  }
  if (*(int *)(*this_ptr + 0xc) < 1) {
    if (lVar9 != 0) goto LAB_019064d6;
  }
  else {
    lVar22 = 0;
    do {
      pvVar8 = _pthread_getspecific((void*)lVar25);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01907cc0(SUB84((double)*(float *)(*(int64_t *)(lVar9 + 0x10) + lVar22 * 4),0));
      lVar22 = lVar22 + 1;
      lVar25 = (int64_t)*(int *)(*this_ptr + 0xc);
    } while (lVar22 < lVar25);
LAB_019064d6:
    FUN_00d50b20();
  }
  if (lVar26 != 0) {
    FUN_00d50b20();
  }
joined_r0x019064f2:
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

