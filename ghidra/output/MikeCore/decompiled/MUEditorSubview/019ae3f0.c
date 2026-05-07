// Function: FUN_019ae3f0
// Address: 019ae3f0
// Size: 1268 bytes
// Class: MUEditorSubview


/* WARNING: Removing unreachable block (ram,0x019ae56a) */
/* WARNING: Removing unreachable block (ram,0x019ae573) */
/* WARNING: Removing unreachable block (ram,0x019ae538) */
/* WARNING: Removing unreachable block (ram,0x019ae541) */
/* WARNING: Removing unreachable block (ram,0x019ae7cb) */
/* WARNING: Removing unreachable block (ram,0x019ae7d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019ae3f0(float *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  float *pfVar6;
  longlong lVar7;
  double *in_RDX;
  char *pcVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  undefined1 auVar22 [16];
  longlong local_a0;
  char local_98 [8];
  float local_40;
  float local_3c;
  char local_38 [8];
  
  fVar21 = (float)((ulonglong)param_2 >> 0x20);
  fVar19 = (float)param_2;
  if ((*unaff_RSI != 0) && (*(int *)(*unaff_RSI + 0xc) != 0)) {
    pfVar6 = param_1;
    FUN_00d23310();
    lVar7 = CONCAT71((int7)((ulonglong)pfVar6 >> 8),local_98[0]);
    pcVar8 = local_38;
    if (local_98[0] != '\0') {
      pcVar8 = local_98;
    }
    local_38[0] = local_98[0];
    *pcVar8 = '\0';
    if ((local_98[0] != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (local_a0 == 0) {
      local_a0 = 0;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    pvVar3 = _pthread_getspecific((pthread_key_t)lVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_0125a280();
    pvVar3 = _pthread_getspecific((pthread_key_t)lVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar13 = (double)FUN_01259520();
    fVar11 = (float)(**(code **)(*unaff_RDI + 0xc38))();
    local_3c = (float)(**(code **)(*unaff_RDI + 0xc38))();
    FUN_01e436c0();
    FUN_01e436c0();
    lVar4 = *unaff_RSI;
    if (*(int *)(lVar4 + 0xc) < 2) {
      auVar22 = ZEXT416((uint)local_3c);
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
    }
    else {
      lVar9 = 1;
      local_40 = fVar11;
      do {
        pVar5 = (pthread_key_t)lVar7;
        lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar9 * 8);
        if (local_a0 == lVar7) {
          if ((!bVar2) && (local_a0 != 0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (local_a0 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            local_a0 = lVar7;
          }
          else {
            bVar2 = true;
            local_a0 = lVar7;
          }
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_0125a280();
        if (dVar14 < dVar12) {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar12 = (double)FUN_0125a280();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_01259520();
        if (dVar13 < dVar14) {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar13 = (double)FUN_01259520();
        }
        uVar15 = (**(code **)(*unaff_RDI + 0xc38))();
        uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
        fVar11 = (float)uVar15;
        auVar22._8_4_ = extraout_XMM0_Dc;
        auVar22._0_8_ = uVar15;
        auVar22._12_4_ = extraout_XMM0_Dd;
        if (fVar11 <= local_3c) {
          auVar22._0_4_ = local_3c;
        }
        if (local_40 <= fVar11) {
          fVar11 = local_40;
        }
        lVar9 = lVar9 + 1;
        lVar4 = *unaff_RSI;
        lVar7 = (longlong)*(int *)(lVar4 + 0xc);
        local_3c = auVar22._0_4_;
        uVar17 = extraout_XMM0_Dc;
        uVar18 = extraout_XMM0_Dd;
        local_40 = fVar11;
      } while (lVar9 < lVar7);
    }
    auVar1._4_4_ = uVar16;
    auVar1._0_4_ = fVar11;
    auVar1._8_4_ = uVar17;
    auVar1._12_4_ = uVar18;
    auVar22 = insertps(auVar22,auVar1,0x10);
    fVar11 = auVar22._0_4_ + _DAT_0241b5d0;
    fVar23 = auVar22._4_4_ + _UNK_0241b5d4;
    fVar20 = fVar11 - fVar23;
    while (fVar20 < (fVar21 / DAT_0241b640) * DAT_0239394c) {
      fVar11 = fVar11 + _DAT_0241b5e0;
      fVar23 = fVar23 + _UNK_0241b5e4;
      fVar20 = fVar11 - fVar23;
    }
    if (in_RDX != (double *)0x0) {
      dVar12 = dVar12 + DAT_0241b680;
      dVar13 = dVar13 + DAT_02390108;
      dVar14 = ((double)(fVar19 / DAT_02390d38) - (dVar13 - dVar12)) * DAT_023942d0;
      uVar10 = -(ulonglong)(dVar13 - dVar12 < (double)(fVar19 / DAT_02390d38));
      dVar12 = (double)(~uVar10 & (ulonglong)dVar12 | (ulonglong)(dVar12 - dVar14) & uVar10);
      *in_RDX = dVar12;
      in_RDX[1] = (double)(~uVar10 & (ulonglong)dVar13 | (ulonglong)(dVar14 + dVar13) & uVar10) -
                  dVar12;
    }
    if (param_1 != (float *)0x0) {
      *param_1 = fVar23;
      param_1[1] = fVar20;
    }
    if ((bVar2) && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


