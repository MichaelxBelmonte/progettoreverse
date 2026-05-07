// Function: FUN_016cf400
// Address: 016cf400
// Size: 2439 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x016cfc54) */

double FUN_016cf400(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  void *pvVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  uint uVar26;
  void **ppvVar27;
  void *pvVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  void *pvVar31;
  pthread_key_t pVar32;
  undefined *puVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined8 *unaff_RSI;
  longlong lVar36;
  void **ppvVar37;
  longlong lVar38;
  bool bVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 *local_88;
  double local_80;
  void *local_78;
  char local_70;
  uint local_64;
  double local_60;
  void *local_58;
  void *local_50;
  void *local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar30 = *unaff_RSI;
  local_c8 = 0;
  local_d0 = uVar30;
  FUN_016d0130(uVar30,&local_d0);
  pvVar23 = local_48;
  pVar32 = (pthread_key_t)uVar30;
  if ((local_40[0] == '\0') && (local_48 != (void *)0x0)) {
    FUN_00d50b00();
  }
  if (*(int *)((longlong)pvVar23 + 0xc) < 2) {
    local_80 = DAT_02395720;
    goto LAB_016cfd49;
  }
  FUN_00d23340();
  pvVar31 = local_48;
  local_38[0] = local_40[0];
  ppvVar27 = (void **)local_38;
  if (local_40[0] != '\0') {
    ppvVar27 = (void **)local_40;
  }
  *(char *)ppvVar27 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (void *)0x0)) {
    FUN_00d50b20();
  }
  pvVar28 = _pthread_getspecific(pVar32);
  if (pvVar28 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_78 = (void *)FUN_019079b0();
  local_80 = (double)FUN_00e7c860();
  pvVar28 = _pthread_getspecific(pVar32);
  if (pvVar28 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_48 = (void *)FUN_019079b0();
  local_60 = (double)FUN_00e7c860();
  if ((local_38[0] != '\0') && (pvVar31 != (void *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d23340();
  pvVar31 = local_48;
  ppvVar27 = &local_78;
  ppvVar37 = (void **)local_40;
  if (local_40[0] == '\0') {
    ppvVar37 = ppvVar27;
  }
  local_78 = (void *)CONCAT71(local_78._1_7_,local_40[0]);
  *(char *)ppvVar37 = '\0';
  if ((local_40[0] != '\0') && (pvVar31 != (void *)0x0)) {
    FUN_00d50b20();
  }
  pVar32 = (pthread_key_t)ppvVar27;
  pvVar28 = _pthread_getspecific(pVar32);
  if (pvVar28 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_a0 = (double)FUN_01907950();
  pvVar28 = _pthread_getspecific(pVar32);
  if (pvVar28 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_98 = (double)FUN_01907950();
  if (((char)local_78 != '\0') && (pvVar31 != (void *)0x0)) {
    FUN_00d50b20();
  }
  local_80 = ((local_80 - local_60) * DAT_023b4df8) / (local_a0 - local_98);
  local_60 = local_80 + local_80;
  local_90 = (double)_log(SUB84(DAT_023942d0 * local_80,0));
  local_60 = (double)_log(SUB84(local_60,0));
  FUN_00c8e690();
  pvVar31 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (void *)0x0)) && (FUN_00d50b00(), local_40[0] != '\0')
      ) && (local_48 != (void *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_50 = pvVar31;
  ___bzero();
  FUN_00c8e690();
  pvVar31 = local_48;
  if (((local_40[0] == '\0') && (local_48 != (void *)0x0)) &&
     ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (void *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_58 = pvVar31;
  if (3 < (int)*(uint *)((longlong)pvVar31 + 0x18)) {
    _memset_pattern16(pvVar31,(void *)((ulonglong)((*(uint *)((longlong)pvVar31 + 0x18) >> 2) - 1) *
                                       4 + 4),param_3);
  }
  puVar29 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar33 = &DAT_025f0d98;
  *puVar29 = &DAT_025f0d98;
  puVar29[2] = 0;
  puVar29[3] = 0;
  puVar29[4] = 0;
  puVar29[5] = 0;
  puVar29[6] = 0;
  puVar29[7] = 0;
  uVar30 = (*DAT_025f0db0)();
  local_a8 = DAT_02411988 / (local_60 - local_90);
  local_64 = (uint)CONCAT71((int7)((ulonglong)uVar30 >> 8),1);
  local_88 = puVar29;
  do {
    if (1 < *(int *)((longlong)pvVar23 + 0xc)) {
      lVar38 = 0;
      do {
        pvVar31 = _pthread_getspecific((pthread_key_t)puVar33);
        if (pvVar31 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_48 = (void *)FUN_019079b0();
        local_a0 = (double)FUN_00e7c860();
        pvVar31 = _pthread_getspecific((pthread_key_t)puVar33);
        if (pvVar31 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_78 = (void *)FUN_019079b0();
        local_98 = (double)FUN_00e7c860();
        pvVar31 = _pthread_getspecific((pthread_key_t)puVar33);
        if (pvVar31 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_60 = (double)FUN_01907950();
        pvVar31 = _pthread_getspecific((pthread_key_t)puVar33);
        if (pvVar31 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar4 = (double)FUN_01907950();
        local_60 = local_60 - dVar4;
        dVar4 = (double)_log(SUB84(((local_a0 - local_98) * DAT_023b4df8) / local_60,0));
        uVar26 = FUN_00e7d850(SUB84((dVar4 - local_90) * local_a8,0));
        lVar38 = lVar38 + 1;
        if (uVar26 < 0x400) {
          uVar34 = (ulonglong)uVar26;
          puVar33 = *(undefined **)((longlong)local_50 + 0x10);
          *(float *)(puVar33 + uVar34 * 4) =
               (float)local_60 * *(float *)(*(longlong *)((longlong)local_58 + 0x10) + uVar34 * 4) +
               *(float *)(puVar33 + uVar34 * 4);
        }
      } while (lVar38 < (longlong)*(int *)((longlong)pvVar23 + 0xc) + -1);
    }
    local_c0 = *(undefined8 *)((longlong)local_50 + 0x10);
    puVar33 = (undefined *)0x0;
    FUN_015c15b0(DAT_023908ec,0x400);
    if ((local_64 & 1) == 0) break;
    local_78 = local_50;
    local_70 = '\0';
    FUN_00c8e4f0();
    pvVar31 = local_48;
    if (local_40[0] == '\0') {
      if (((local_48 != (void *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != (void *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if ((local_70 != '\0') && (local_78 != (void *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    if (pvVar31 == local_58) {
      bVar39 = pvVar31 != (void *)0x0;
      pvVar31 = local_58;
      if (bVar39) {
        FUN_00d50b20();
        pvVar31 = local_58;
      }
    }
    else if (local_58 != (void *)0x0) {
      FUN_00d50b20();
    }
    local_b8 = *(undefined8 *)((longlong)pvVar31 + 0x10);
    local_58 = pvVar31;
    FUN_015b3230();
    uVar26 = *(uint *)((longlong)pvVar31 + 0x18);
    if (3 < (int)uVar26) {
      uVar7 = uVar26 >> 2;
      puVar33 = *(undefined **)((longlong)local_58 + 0x10);
      if (uVar26 < 0x20) {
        uVar34 = 0;
      }
      else {
        uVar34 = (ulonglong)(uVar7 & 0xfffffff8);
        uVar35 = (uVar34 - 8 >> 3) + 1;
        if (uVar34 - 8 == 0) {
          lVar38 = 0;
LAB_016cfb81:
          pfVar1 = (float *)(puVar33 + lVar38 * 4);
          fVar8 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar10 = pfVar1[3];
          pfVar2 = (float *)(puVar33 + lVar38 * 4 + 0x10);
          fVar11 = *pfVar2;
          fVar12 = pfVar2[1];
          fVar13 = pfVar2[2];
          fVar14 = pfVar2[3];
          pfVar2 = (float *)(puVar33 + lVar38 * 4);
          *pfVar2 = *pfVar1 * *pfVar1;
          pfVar2[1] = fVar8 * fVar8;
          pfVar2[2] = fVar9 * fVar9;
          pfVar2[3] = fVar10 * fVar10;
          auVar6._4_4_ = fVar12 * fVar12;
          auVar6._0_4_ = fVar11 * fVar11;
          auVar6._8_4_ = fVar13 * fVar13;
          auVar6._12_4_ = fVar14 * fVar14;
          *(undefined1 (*) [16])(puVar33 + lVar38 * 4 + 0x10) = auVar6;
        }
        else {
          lVar36 = -(uVar35 & 0xfffffffffffffffe);
          lVar38 = 0;
          do {
            pfVar1 = (float *)(puVar33 + lVar38 * 4);
            fVar8 = pfVar1[1];
            fVar9 = pfVar1[2];
            fVar10 = pfVar1[3];
            pfVar2 = (float *)(puVar33 + lVar38 * 4 + 0x10);
            fVar11 = *pfVar2;
            fVar12 = pfVar2[1];
            fVar13 = pfVar2[2];
            fVar14 = pfVar2[3];
            pfVar2 = (float *)(puVar33 + lVar38 * 4 + 0x20);
            fVar15 = *pfVar2;
            fVar16 = pfVar2[1];
            fVar17 = pfVar2[2];
            fVar18 = pfVar2[3];
            pfVar2 = (float *)(puVar33 + lVar38 * 4 + 0x30);
            fVar19 = *pfVar2;
            fVar20 = pfVar2[1];
            fVar21 = pfVar2[2];
            fVar22 = pfVar2[3];
            pfVar2 = (float *)(puVar33 + lVar38 * 4);
            *pfVar2 = *pfVar1 * *pfVar1;
            pfVar2[1] = fVar8 * fVar8;
            pfVar2[2] = fVar9 * fVar9;
            pfVar2[3] = fVar10 * fVar10;
            auVar5._4_4_ = fVar12 * fVar12;
            auVar5._0_4_ = fVar11 * fVar11;
            auVar5._8_4_ = fVar13 * fVar13;
            auVar5._12_4_ = fVar14 * fVar14;
            *(undefined1 (*) [16])(puVar33 + lVar38 * 4 + 0x10) = auVar5;
            pfVar1 = (float *)(puVar33 + lVar38 * 4 + 0x20);
            *pfVar1 = fVar15 * fVar15;
            pfVar1[1] = fVar16 * fVar16;
            pfVar1[2] = fVar17 * fVar17;
            pfVar1[3] = fVar18 * fVar18;
            pfVar1 = (float *)(puVar33 + lVar38 * 4 + 0x30);
            *pfVar1 = fVar19 * fVar19;
            pfVar1[1] = fVar20 * fVar20;
            pfVar1[2] = fVar21 * fVar21;
            pfVar1[3] = fVar22 * fVar22;
            lVar38 = lVar38 + 0x10;
            lVar36 = lVar36 + 2;
          } while (lVar36 != 0);
          if ((uVar35 & 1) != 0) goto LAB_016cfb81;
        }
        if (uVar34 == uVar7) goto LAB_016cfbb7;
      }
      do {
        *(float *)(puVar33 + uVar34 * 4) =
             *(float *)(puVar33 + uVar34 * 4) * *(float *)(puVar33 + uVar34 * 4);
        uVar34 = uVar34 + 1;
      } while (uVar7 != uVar34);
    }
LAB_016cfbb7:
    FUN_00c8e690();
    pvVar31 = local_48;
    if ((((local_40[0] == '\0') && (local_48 != (void *)0x0)) &&
        (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (void *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    if (pvVar31 == local_50) {
      FUN_00d50b20();
    }
    else if (local_50 == (void *)0x0) {
      local_50 = pvVar31;
    }
    else {
      FUN_00d50b20();
      local_50 = pvVar31;
    }
    uVar26 = local_64 & 1;
    local_64 = 0;
  } while (uVar26 != 0);
  local_b0 = *(undefined8 *)((longlong)local_50 + 0x10);
  FUN_015b3350(0);
  pvVar31 = local_48;
  if (((local_40[0] == '\0') && (local_48 != (void *)0x0)) &&
     ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (void *)0x0)))) {
    FUN_00d50b20();
  }
  uVar26 = *(uint *)((longlong)pvVar31 + 0xc);
  if ((int)uVar26 < 1) {
LAB_016cfd12:
    FUN_00d50b20();
  }
  else {
    lVar38 = *(longlong *)((longlong)pvVar31 + 0x10);
    uVar42 = (undefined4)DAT_023908c8;
    uVar43 = (undefined4)((ulonglong)DAT_023908c8 >> 0x20);
    if (uVar26 == 1) {
      uVar40 = 0;
      uVar41 = 0;
      uVar34 = 0;
    }
    else {
      uVar40 = 0;
      uVar41 = 0;
      uVar34 = 0;
      do {
        lVar36 = *(longlong *)(lVar38 + uVar34 * 8);
        dVar4 = *(double *)(lVar36 + 0x18);
        if (dVar4 < (double)CONCAT44(uVar41,uVar40) || dVar4 == (double)CONCAT44(uVar41,uVar40)) {
          lVar36 = *(longlong *)(lVar38 + 8 + uVar34 * 8);
          dVar4 = *(double *)(lVar36 + 0x18);
          uVar24 = SUB84(dVar4,0);
          uVar25 = (int)((ulonglong)dVar4 >> 0x20);
          if ((double)CONCAT44(uVar41,uVar40) <= dVar4 && dVar4 != (double)CONCAT44(uVar41,uVar40))
          goto LAB_016cfdd0;
        }
        else {
          uVar30 = *(undefined8 *)(lVar36 + 0x10);
          uVar42 = (undefined4)uVar30;
          uVar43 = (undefined4)((ulonglong)uVar30 >> 0x20);
          lVar36 = *(longlong *)(lVar38 + 8 + uVar34 * 8);
          dVar3 = *(double *)(lVar36 + 0x18);
          uVar40 = SUB84(dVar4,0);
          uVar41 = (int)((ulonglong)dVar4 >> 0x20);
          uVar24 = SUB84(dVar3,0);
          uVar25 = (int)((ulonglong)dVar3 >> 0x20);
          if (dVar4 < dVar3) {
LAB_016cfdd0:
            uVar41 = uVar25;
            uVar40 = uVar24;
            uVar42 = (undefined4)*(undefined8 *)(lVar36 + 0x10);
            uVar43 = (undefined4)((ulonglong)*(undefined8 *)(lVar36 + 0x10) >> 0x20);
          }
        }
        uVar34 = uVar34 + 2;
      } while ((uVar26 & 0xfffffffe) != uVar34);
    }
    if (((uVar26 & 1) != 0) &&
       (lVar38 = *(longlong *)(lVar38 + uVar34 * 8), dVar4 = *(double *)(lVar38 + 0x18),
       (double)CONCAT44(uVar41,uVar40) <= dVar4 && dVar4 != (double)CONCAT44(uVar41,uVar40))) {
      uVar30 = *(undefined8 *)(lVar38 + 0x10);
      uVar42 = (undefined4)uVar30;
      uVar43 = (undefined4)((ulonglong)uVar30 >> 0x20);
    }
    if (!NAN((double)CONCAT44(uVar43,uVar42)) && !NAN((double)CONCAT44(uVar43,uVar42))) {
      local_80 = (double)_exp(SUB84(local_90 + (double)CONCAT44(uVar43,uVar42) / local_a8,0));
    }
    if (pvVar31 != (void *)0x0) goto LAB_016cfd12;
  }
  if (local_88 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_58 != (void *)0x0) {
    FUN_00d50b20();
  }
  if (local_50 != (void *)0x0) {
    FUN_00d50b20();
  }
  if (pvVar23 == (void *)0x0) {
    return local_80;
  }
LAB_016cfd49:
  FUN_00d50b20();
  return local_80;
}


