// Function: FUN_014e2330
// Address: 014e2330
// Size: 3596 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x014e2da2) */
/* WARNING: Removing unreachable block (ram,0x014e2dae) */
/* WARNING: Removing unreachable block (ram,0x014e2d88) */
/* WARNING: Removing unreachable block (ram,0x014e3181) */
/* WARNING: Removing unreachable block (ram,0x014e3170) */
/* WARNING: Removing unreachable block (ram,0x014e2d94) */
/* WARNING: Removing unreachable block (ram,0x014e2e00) */
/* WARNING: Removing unreachable block (ram,0x014e2e0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_014e2330(double param_1,double param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  double dVar7;
  double dVar8;
  byte bVar9;
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
  float fVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  bool bVar36;
  longlong lVar37;
  int iVar38;
  void *pvVar39;
  longlong lVar40;
  longlong lVar41;
  undefined8 *puVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  pthread_key_t pVar45;
  int iVar46;
  undefined8 in_RCX;
  undefined4 *puVar47;
  longlong *plVar48;
  ulonglong uVar49;
  void *pvVar50;
  double dVar51;
  longlong *plVar52;
  longlong *unaff_RSI;
  ulonglong uVar53;
  longlong lVar54;
  longlong *unaff_RDI;
  longlong lVar55;
  longlong *plVar56;
  float fVar57;
  undefined4 uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  longlong local_98;
  char local_90;
  double local_88;
  double local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40 [8];
  
  if ((*unaff_RDI == 0) || (*(int *)(*unaff_RDI + 0xc) == 0)) {
    uVar44 = 0;
    goto LAB_014e30ba;
  }
  local_88 = param_1;
  pvVar39 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar39 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  local_80 = (double)local_48[7];
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  pvVar39 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar39 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  lVar37 = local_48[6];
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  pvVar39 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar39 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar40 = FUN_0134c2c0();
  local_58 = (longlong *)param_2;
  pvVar39 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar39 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d23340();
  plVar52 = local_48;
  pVar45 = (pthread_key_t)CONCAT71((int7)((ulonglong)in_RCX >> 8),local_40[0]);
  plVar48 = &local_98;
  if (local_40[0] != '\0') {
    plVar48 = (longlong *)local_40;
  }
  local_98 = CONCAT71(local_98._1_7_,local_40[0]);
  *(char *)plVar48 = '\0';
  if ((local_40[0] != '\0') && (plVar52 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_78 = (longlong *)FUN_0134c2c0();
  if ((char)local_98 != '\0') {
    FUN_00d50b20();
  }
  pvVar39 = _pthread_getspecific(pVar45);
  if (pvVar39 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  plVar52 = local_48;
  pvVar39 = _pthread_getspecific(pVar45);
  plVar48 = local_48;
  if ((pvVar39 != (void *)0x0) && (lVar41 = FUN_00e8b990(), plVar52 = plVar48, lVar41 != 0)) {
    plVar52 = (longlong *)plVar48[(ulonglong)(*(uint *)(lVar41 + 0x154) & 1) + 4];
  }
  local_60 = (longlong *)(**(code **)(*plVar52 + 0x370))();
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar59 = *(uint *)(*unaff_RDI + 0xc);
  uVar44 = (ulonglong)uVar59;
  FUN_00c8e690();
  plVar52 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_70 = plVar52;
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  local_68 = local_48;
  if (((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (0 < (int)uVar59) {
    lVar41 = *(longlong *)(*unaff_RDI + 0x10);
    lVar54 = plVar52[2];
    if (uVar44 - 1 < 3) {
      uVar43 = 0;
    }
    else {
      uVar43 = 0;
      do {
        *(undefined4 *)(lVar54 + uVar43 * 4) =
             *(undefined4 *)(*(longlong *)(lVar41 + uVar43 * 8) + 0x14);
        *(undefined4 *)(lVar54 + 4 + uVar43 * 4) =
             *(undefined4 *)(*(longlong *)(lVar41 + 8 + uVar43 * 8) + 0x14);
        *(undefined4 *)(lVar54 + 8 + uVar43 * 4) =
             *(undefined4 *)(*(longlong *)(lVar41 + 0x10 + uVar43 * 8) + 0x14);
        *(undefined4 *)(lVar54 + 0xc + uVar43 * 4) =
             *(undefined4 *)(*(longlong *)(lVar41 + 0x18 + uVar43 * 8) + 0x14);
        uVar43 = uVar43 + 4;
      } while ((uVar59 & 0xfffffffc) != uVar43);
    }
    plVar52 = local_70;
    if ((ulonglong)(uVar59 & 3) != 0) {
      uVar53 = 0;
      do {
        *(undefined4 *)(lVar54 + uVar43 * 4 + uVar53 * 4) =
             *(undefined4 *)(*(longlong *)(lVar41 + uVar43 * 8 + uVar53 * 8) + 0x14);
        uVar53 = uVar53 + 1;
      } while ((uVar59 & 3) != uVar53);
    }
  }
  puVar42 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar42 = &DAT_025f0d98;
  puVar42[2] = 0;
  puVar42[3] = 0;
  puVar42[4] = 0;
  puVar42[5] = 0;
  puVar42[6] = 0;
  puVar42[7] = 0;
  (*DAT_025f0db0)();
  local_50 = (longlong *)CONCAT44(local_50._4_4_,(float)local_80);
  FUN_015c1500(DAT_0240e348 / (float)local_80,uVar44,1);
  plVar48 = local_68;
  fVar57 = DAT_0240d3b4 / local_50._0_4_;
  if ((int)uVar59 < 2) {
    puVar47 = (undefined4 *)local_68[2];
  }
  else {
    puVar6 = (undefined4 *)plVar52[2];
    puVar47 = (undefined4 *)local_68[2];
    uVar43 = uVar44 - 1;
    uVar53 = 1;
    if ((7 < uVar43) && ((puVar6 + uVar44 <= puVar47 + 1 || (puVar47 + uVar44 <= puVar6)))) {
      uVar53 = uVar43 & 0xfffffffffffffff8;
      uVar49 = (uVar53 - 8 >> 3) + 1;
      if (uVar53 - 8 == 0) {
        lVar41 = 0;
LAB_014e2887:
        uVar49 = lVar41 * 4 | 4;
        pfVar1 = (float *)((longlong)puVar6 + uVar49);
        fVar10 = pfVar1[1];
        fVar11 = pfVar1[2];
        fVar12 = pfVar1[3];
        pfVar3 = (float *)((longlong)puVar6 + uVar49 + 0x10);
        fVar13 = *pfVar3;
        fVar14 = pfVar3[1];
        fVar15 = pfVar3[2];
        fVar16 = pfVar3[3];
        pfVar3 = (float *)(puVar6 + lVar41);
        fVar17 = pfVar3[1];
        fVar18 = pfVar3[2];
        fVar19 = pfVar3[3];
        pfVar2 = (float *)(puVar6 + lVar41 + 4);
        fVar20 = *pfVar2;
        fVar21 = pfVar2[1];
        fVar22 = pfVar2[2];
        fVar23 = pfVar2[3];
        pfVar2 = (float *)((longlong)puVar47 + uVar49);
        *pfVar2 = *pfVar1 - *pfVar3;
        pfVar2[1] = fVar10 - fVar17;
        pfVar2[2] = fVar11 - fVar18;
        pfVar2[3] = fVar12 - fVar19;
        pfVar1 = (float *)((longlong)puVar47 + uVar49 + 0x10);
        *pfVar1 = fVar13 - fVar20;
        pfVar1[1] = fVar14 - fVar21;
        pfVar1[2] = fVar15 - fVar22;
        pfVar1[3] = fVar16 - fVar23;
      }
      else {
        lVar54 = -(uVar49 & 0xfffffffffffffffe);
        lVar41 = 0;
        do {
          pfVar1 = (float *)(puVar6 + lVar41);
          fVar10 = pfVar1[1];
          fVar11 = pfVar1[2];
          fVar12 = pfVar1[3];
          pfVar3 = (float *)(puVar6 + lVar41 + 1);
          fVar13 = pfVar3[1];
          fVar14 = pfVar3[2];
          fVar15 = pfVar3[3];
          pfVar2 = (float *)(puVar6 + lVar41 + 4);
          fVar16 = *pfVar2;
          fVar17 = pfVar2[1];
          fVar18 = pfVar2[2];
          fVar19 = pfVar2[3];
          pfVar2 = (float *)(puVar6 + lVar41 + 5);
          fVar20 = *pfVar2;
          fVar21 = pfVar2[1];
          fVar22 = pfVar2[2];
          fVar23 = pfVar2[3];
          pfVar2 = (float *)(puVar47 + lVar41 + 1);
          *pfVar2 = *pfVar3 - *pfVar1;
          pfVar2[1] = fVar13 - fVar10;
          pfVar2[2] = fVar14 - fVar11;
          pfVar2[3] = fVar15 - fVar12;
          pfVar1 = (float *)(puVar47 + lVar41 + 5);
          *pfVar1 = fVar20 - fVar16;
          pfVar1[1] = fVar21 - fVar17;
          pfVar1[2] = fVar22 - fVar18;
          pfVar1[3] = fVar23 - fVar19;
          pfVar1 = (float *)(puVar6 + lVar41 + 8);
          fVar10 = pfVar1[1];
          fVar11 = pfVar1[2];
          fVar12 = pfVar1[3];
          pfVar3 = (float *)(puVar6 + lVar41 + 9);
          fVar13 = pfVar3[1];
          fVar14 = pfVar3[2];
          fVar15 = pfVar3[3];
          pfVar2 = (float *)(puVar6 + lVar41 + 0xc);
          fVar16 = *pfVar2;
          fVar17 = pfVar2[1];
          fVar18 = pfVar2[2];
          fVar19 = pfVar2[3];
          pfVar2 = (float *)(puVar6 + lVar41 + 0xd);
          fVar20 = *pfVar2;
          fVar21 = pfVar2[1];
          fVar22 = pfVar2[2];
          fVar23 = pfVar2[3];
          pfVar2 = (float *)(puVar47 + lVar41 + 9);
          *pfVar2 = *pfVar3 - *pfVar1;
          pfVar2[1] = fVar13 - fVar10;
          pfVar2[2] = fVar14 - fVar11;
          pfVar2[3] = fVar15 - fVar12;
          pfVar1 = (float *)(puVar47 + lVar41 + 0xd);
          *pfVar1 = fVar20 - fVar16;
          pfVar1[1] = fVar21 - fVar17;
          pfVar1[2] = fVar22 - fVar18;
          pfVar1[3] = fVar23 - fVar19;
          lVar41 = lVar41 + 0x10;
          lVar54 = lVar54 + 2;
        } while (lVar54 != 0);
        if ((uVar49 & 1) != 0) goto LAB_014e2887;
      }
      if (uVar43 == uVar53) goto LAB_014e291a;
      uVar53 = uVar53 | 1;
    }
    uVar43 = ~uVar53;
    if ((uVar59 & 1) == 0) {
      puVar47[uVar53] = (float)puVar6[uVar53] - (float)puVar6[uVar53 - 1];
      uVar53 = uVar53 + 1;
    }
    if (uVar43 + uVar44 != 0) {
      do {
        puVar47[uVar53] = (float)puVar6[uVar53] - (float)puVar6[uVar53 - 1];
        puVar47[uVar53 + 1] = (float)puVar6[uVar53 + 1] - (float)puVar6[uVar53];
        uVar53 = uVar53 + 2;
      } while (uVar44 != uVar53);
    }
  }
LAB_014e291a:
  *puVar47 = puVar47[1];
  uVar53 = 3;
  uVar43 = 1;
  FUN_015c1500(fVar57,uVar44);
  uVar63 = _UNK_0239014c;
  uVar62 = _UNK_02390148;
  uVar61 = _UNK_02390144;
  uVar60 = _DAT_02390140;
  if (1 < (int)uVar59) {
    lVar41 = plVar48[2];
    uVar43 = uVar44 - 1;
    uVar53 = 1;
    uVar59 = _DAT_02390140;
    if (7 < uVar43) {
      uVar53 = uVar43 & 0xfffffffffffffff8;
      uVar49 = (uVar53 - 8 >> 3) + 1;
      if (uVar53 - 8 == 0) {
        lVar54 = 0;
LAB_014e29e3:
        uVar49 = lVar54 << 2 | 4;
        puVar4 = (uint *)(lVar41 + uVar49);
        puVar5 = (uint *)(lVar41 + 0x10 + uVar49);
        uVar59 = puVar4[1] & _UNK_02390144;
        uVar60 = puVar4[2] & _UNK_02390148;
        uVar61 = puVar4[3] & _UNK_0239014c;
        uVar62 = *puVar5 & _DAT_02390140;
        uVar63 = puVar5[1] & _UNK_02390144;
        uVar64 = puVar5[2] & _UNK_02390148;
        uVar65 = puVar5[3] & _UNK_0239014c;
        puVar5 = (uint *)(lVar41 + uVar49);
        *puVar5 = *puVar4 & _DAT_02390140;
        puVar5[1] = uVar59;
        puVar5[2] = uVar60;
        puVar5[3] = uVar61;
        puVar4 = (uint *)(lVar41 + 0x10 + uVar49);
        *puVar4 = uVar62;
        puVar4[1] = uVar63;
        puVar4[2] = uVar64;
        puVar4[3] = uVar65;
      }
      else {
        lVar55 = -(uVar49 & 0xfffffffffffffffe);
        lVar54 = 0;
        do {
          puVar4 = (uint *)(lVar41 + 4 + lVar54 * 4);
          uVar59 = puVar4[1];
          uVar64 = puVar4[2];
          uVar65 = puVar4[3];
          puVar5 = (uint *)(lVar41 + 0x14 + lVar54 * 4);
          uVar24 = *puVar5;
          uVar25 = puVar5[1];
          uVar26 = puVar5[2];
          uVar27 = puVar5[3];
          puVar5 = (uint *)(lVar41 + 0x24 + lVar54 * 4);
          uVar28 = *puVar5;
          uVar29 = puVar5[1];
          uVar30 = puVar5[2];
          uVar31 = puVar5[3];
          puVar5 = (uint *)(lVar41 + 0x34 + lVar54 * 4);
          uVar32 = *puVar5;
          uVar33 = puVar5[1];
          uVar34 = puVar5[2];
          uVar35 = puVar5[3];
          puVar5 = (uint *)(lVar41 + 4 + lVar54 * 4);
          *puVar5 = *puVar4 & uVar60;
          puVar5[1] = uVar59 & uVar61;
          puVar5[2] = uVar64 & uVar62;
          puVar5[3] = uVar65 & uVar63;
          puVar4 = (uint *)(lVar41 + 0x14 + lVar54 * 4);
          *puVar4 = uVar24 & uVar60;
          puVar4[1] = uVar25 & uVar61;
          puVar4[2] = uVar26 & uVar62;
          puVar4[3] = uVar27 & uVar63;
          puVar4 = (uint *)(lVar41 + 0x24 + lVar54 * 4);
          *puVar4 = uVar28 & uVar60;
          puVar4[1] = uVar29 & uVar61;
          puVar4[2] = uVar30 & uVar62;
          puVar4[3] = uVar31 & uVar63;
          puVar4 = (uint *)(lVar41 + 0x34 + lVar54 * 4);
          *puVar4 = uVar32 & uVar60;
          puVar4[1] = uVar33 & uVar61;
          puVar4[2] = uVar34 & uVar62;
          puVar4[3] = uVar35 & uVar63;
          lVar54 = lVar54 + 0x10;
          lVar55 = lVar55 + 2;
        } while (lVar55 != 0);
        if ((uVar49 & 1) != 0) goto LAB_014e29e3;
      }
      if (uVar43 == uVar53) goto LAB_014e2a36;
      uVar53 = uVar53 | 1;
      uVar59 = _DAT_02390140;
    }
    do {
      *(uint *)(lVar41 + uVar53 * 4) = *(uint *)(lVar41 + uVar53 * 4) & uVar59;
      uVar53 = uVar53 + 1;
    } while (uVar44 != uVar53);
  }
LAB_014e2a36:
  pVar45 = (pthread_key_t)uVar53;
  FUN_015b3350(DAT_023908ec,uVar44);
  plVar52 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_50 = plVar52;
  pvVar39 = _pthread_getspecific(pVar45);
  if (pvVar39 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  plVar52 = local_48;
  pvVar39 = _pthread_getspecific(pVar45);
  plVar48 = local_48;
  if ((pvVar39 != (void *)0x0) && (lVar41 = FUN_00e8b990(), plVar52 = plVar48, lVar41 != 0)) {
    plVar52 = (longlong *)plVar48[(ulonglong)(*(uint *)(lVar41 + 0x154) & 1) + 4];
  }
  dVar51 = (double)(**(code **)(*plVar52 + 0x370))();
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar39 = (void *)(ulonglong)*(uint *)((longlong)local_50 + 0xc);
  if (-1 < (int)*(uint *)((longlong)local_50 + 0xc)) {
    local_58 = (longlong *)((double)((longlong)local_78 - lVar40) / (double)local_60);
    uVar59 = 0xffffffff;
    do {
      bVar9 = 1;
      if (((int)uVar59 < 0) ||
         (lVar41 = *(longlong *)(local_50[2] + (ulonglong)uVar59 * 8), lVar41 == 0)) {
        bVar36 = true;
        lVar41 = 0;
        if ((int)uVar59 < (int)pvVar39 + -1) goto LAB_014e2bbd;
LAB_014e2c00:
        lVar54 = 0;
        if (lVar41 == 0) goto LAB_014e2be2;
LAB_014e2c08:
        dVar7 = *(double *)(lVar41 + 0x10) * local_80;
      }
      else {
        FUN_00d50b00();
        bVar36 = false;
        if (*(int *)((longlong)local_50 + 0xc) + -1 <= (int)uVar59) goto LAB_014e2c00;
LAB_014e2bbd:
        lVar54 = *(longlong *)(local_50[2] + 8 + (longlong)(int)uVar59 * 8);
        if (lVar54 == 0) goto LAB_014e2c00;
        FUN_00d50b00();
        bVar9 = 0;
        if (lVar41 != 0) goto LAB_014e2c08;
LAB_014e2be2:
        dVar7 = 0.0;
      }
      dVar8 = (double)local_58;
      if (lVar54 != 0) {
        dVar8 = *(double *)(lVar54 + 0x10) * local_80;
      }
      if (dVar8 - dVar7 < local_88) {
        if ((lVar41 == 0) ||
           ((lVar54 != 0 &&
            (*(double *)(lVar54 + 0x18) < *(double *)(lVar41 + 0x18) ||
             *(double *)(lVar54 + 0x18) == *(double *)(lVar41 + 0x18))))) {
          FUN_00d23620();
        }
        else {
          FUN_00d23620();
        }
        uVar59 = uVar59 - 1;
      }
      if (!(bool)(bVar9 | lVar54 == 0)) {
        FUN_00d50b20();
      }
      if (!bVar36 && lVar41 != 0) {
        FUN_00d50b20();
      }
      uVar59 = uVar59 + 1;
      pvVar39 = (void *)(ulonglong)*(uint *)((longlong)local_50 + 0xc);
    } while ((int)uVar59 < (int)*(uint *)((longlong)local_50 + 0xc));
  }
  local_98 = *unaff_RSI;
  local_90 = '\0';
  FUN_00c8e4f0();
  plVar52 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  local_78 = plVar52;
  FUN_00c92170();
  uVar58 = FUN_00c92160();
  FUN_00c8e340(uVar58,0);
  FUN_0161e150(SUB84(DAT_0238fee8 / local_80,0));
  plVar48 = local_50;
  local_60 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  FUN_0161e1a0(DAT_02394288,DAT_02391090);
  plVar56 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  local_58 = plVar56;
  if (0 < *(int *)((longlong)plVar48 + 0xc)) {
    lVar41 = 0;
    do {
      iVar38 = FUN_00e7d850((int)*(undefined8 *)(*(longlong *)(plVar48[2] + lVar41 * 8) + 0x10));
      if (7 < (int)*(uint *)(plVar56 + 3)) {
        pvVar39 = (void *)(ulonglong)(*(uint *)(plVar56 + 3) >> 3);
        pvVar50 = (void *)0x0;
        do {
          iVar46 = *(int *)(plVar56[2] + (longlong)pvVar50 * 8);
          if ((iVar46 <= iVar38) &&
             (iVar38 < iVar46 + *(int *)(plVar56[2] + 4 + (longlong)pvVar50 * 8)))
          goto LAB_014e2e30;
          pvVar50 = (void *)((longlong)pvVar50 + 1);
        } while (pvVar39 != pvVar50);
      }
      lVar54 = *unaff_RSI;
      iVar46 = *(int *)(lVar54 + 0x18);
      FUN_00c8e340();
      pvVar39 = *(void **)(lVar54 + 0x10);
      *(longlong *)((longlong)pvVar39 + (longlong)iVar46) =
           (longlong)iVar38 * (longlong)(int)lVar37 + lVar40;
      plVar56 = local_58;
LAB_014e2e30:
      lVar41 = lVar41 + 1;
      plVar48 = local_50;
    } while (lVar41 < *(int *)((longlong)local_50 + 0xc));
  }
  if (7 < (int)plVar52[3]) {
    local_88 = (double)(longlong)(dVar51 * local_88 + DAT_023942d0);
    dVar51 = 0.0;
    do {
      lVar37 = *(longlong *)(plVar52[2] + (longlong)dVar51 * 8);
      lVar40 = *unaff_RSI;
      iVar38 = *(int *)(lVar40 + 0x18);
      iVar46 = iVar38 + 7;
      if (-1 < iVar38) {
        iVar46 = iVar38;
      }
      uVar59 = iVar46 >> 3;
      if (7 < iVar38) {
        pvVar39 = *(void **)(lVar40 + 0x10);
        uVar44 = 0;
        do {
          if (lVar37 < *(longlong *)((longlong)pvVar39 + uVar44 * 8)) {
            uVar59 = (uint)uVar44;
            break;
          }
          uVar44 = uVar44 + 1;
        } while (uVar59 != uVar44);
      }
      local_80 = dVar51;
      FUN_00c8e340();
      lVar40 = *(longlong *)(lVar40 + 0x10);
      _memmove(pvVar39,(void *)(longlong)(int)(iVar38 + uVar59 * -8),(size_t)uVar43);
      *(longlong *)(lVar40 + (longlong)(int)uVar59 * 8) = lVar37;
      iVar38 = *(int *)(*unaff_RSI + 0x18);
      iVar46 = iVar38 + 7;
      if (-1 < iVar38) {
        iVar46 = iVar38;
      }
      if (((int)uVar59 < (iVar46 >> 3) + -1) &&
         (*(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + 8 + (longlong)(int)uVar59 * 8) - lVar37 <
          (longlong)local_88)) {
        FUN_00e7b4e0();
        FUN_00c921e0();
      }
      plVar52 = local_78;
      if ((0 < (int)uVar59) &&
         (lVar37 - *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + (ulonglong)(uVar59 - 1) * 8) <
          (longlong)local_88)) {
        FUN_00e7b4e0();
        FUN_00c921e0();
      }
      dVar51 = (double)((longlong)local_80 + 1);
      iVar38 = (int)plVar52[3];
      iVar46 = iVar38 + 7;
      if (-1 < iVar38) {
        iVar46 = iVar38;
      }
      pvVar39 = (void *)(ulonglong)(uint)(iVar46 >> 3);
    } while ((longlong)dVar51 < (longlong)(iVar46 >> 3));
  }
  plVar52 = local_60;
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar48 = local_68;
  if (plVar52 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (puVar42 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (plVar48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  uVar44 = CONCAT71((int7)((ulonglong)plVar48 >> 8),1);
  if (local_70 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_014e30ba:
  return uVar44 & 0xffffffff;
}


