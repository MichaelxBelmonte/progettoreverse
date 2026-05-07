// Function: FUN_01b17840
// Address: 01b17840
// Size: 1955 bytes
// Class: MUScalePitchSystem
// String references:
//   "MUScalePitchSystem"


/* WARNING: Removing unreachable block (ram,0x01b17b67) */
/* WARNING: Removing unreachable block (ram,0x01b17b70) */
/* WARNING: Removing unreachable block (ram,0x01b17c1a) */
/* WARNING: Removing unreachable block (ram,0x01b17c23) */
/* WARNING: Removing unreachable block (ram,0x01b17b05) */
/* WARNING: Removing unreachable block (ram,0x01b17b0e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b17840(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  int iVar12;
  longlong *plVar13;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar14;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dd;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 in_XMM1 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong local_88;
  char local_80;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  longlong *local_48;
  char local_40;
  
  plVar13 = (longlong *)*unaff_RSI;
  if ((DAT_027c0160 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_0270ab28 = FUN_0015ea50();
    _DAT_0270ab10 = "MUScalePitchSystem";
    _DAT_0270ab18 = 0x78;
    _DAT_0270ab20 = FUN_0015ecf0;
    _DAT_0270ab30 = 0;
    uRam000000000270ab38 = 0;
    _DAT_0270ab40 = 0;
    uRam000000000270ab48 = 0;
    _DAT_0270ab50 = 0;
    uRam000000000270ab58 = 0;
    _DAT_0270ab60 = 0;
    uRam000000000270ab68 = 0;
    _DAT_0270ab70 = 0;
    uRam000000000270ab78 = 0;
    _DAT_0270ab80 = 0;
    uRam000000000270ab88 = 0;
    _DAT_0270ab90 = 0;
    uRam000000000270ab98 = 0;
    _DAT_0270aba0 = 0;
    uRam000000000270aba8 = 0;
    _DAT_0270abb0 = 0;
    uRam000000000270abb8 = 0;
    _DAT_0270abc0 = 0;
    uRam000000000270abc8 = 0;
    _DAT_0270abd0 = 0;
    ___cxa_guard_release();
  }
  if (plVar13 == (longlong *)0x0) {
LAB_01b17899:
    plVar13 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar13 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar13 = unaff_RSI;
    if (cVar2 == '\0') goto LAB_01b17899;
  }
  if (*plVar13 != 0) {
    if (*param_2 != 0) {
      FUN_00d74120();
      lVar1 = DAT_027e3cf0;
      if (DAT_027e3cf0 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*local_48 + 0x50))();
      bVar14 = true;
      if (cVar2 == '\0') {
        bVar14 = *param_2 == 0;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar14) goto LAB_01b1794a;
    }
    FUN_01b14f90();
    FUN_01ad48c0();
  }
LAB_01b1794a:
  FUN_01ad3cb0();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01b1797f;
    }
LAB_01b17aaa:
    bVar14 = true;
  }
  else {
    if (local_48 == (longlong *)0x0) goto LAB_01b17aaa;
LAB_01b1797f:
    plVar13 = (longlong *)*unaff_RSI;
    FUN_011a7c20();
    if (plVar13 == (longlong *)0x0) {
LAB_01b179b7:
      plVar13 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar13 = unaff_RSI;
      if (cVar2 == '\0') goto LAB_01b179b7;
    }
    if ((*plVar13 != 0) && (*param_2 != 0)) {
      FUN_00d74120();
      lVar1 = DAT_027e13b0;
      pVar11 = (pthread_key_t)plVar13;
      if (DAT_027e13b0 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*local_48 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        lVar1 = *unaff_RSI;
        cVar2 = (char)unaff_RSI[1];
        if ((cVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific(pVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific(pVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01770f00();
        cVar3 = FUN_00d23d70();
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((cVar2 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar9 = _pthread_getspecific(pVar11);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01770f00();
          iVar4 = FUN_00d237a0();
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          FUN_01e436c0();
          auVar17 = in_XMM1;
          pvVar9 = _pthread_getspecific(pVar11);
          plVar13 = local_48;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar13 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          (**(code **)(*unaff_RDI + 0x920))();
          iVar5 = (**(code **)(*plVar13 + 0x3a8))();
          pvVar9 = _pthread_getspecific(pVar11);
          plVar13 = local_48;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar13 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          local_78._4_4_ = in_XMM1._4_4_;
          uStack_70._4_4_ = in_XMM1._12_4_;
          auVar15._4_4_ = extraout_XMM0_Db + (float)local_78._4_4_;
          auVar15._12_4_ = extraout_XMM0_Dd + uStack_70._4_4_;
          auVar15._0_4_ = auVar15._4_4_;
          auVar15._8_4_ = auVar15._12_4_;
          auVar16._4_12_ = auVar15._4_12_;
          auVar16._0_4_ = auVar15._4_4_ + DAT_02390d00;
          (**(code **)(*unaff_RDI + 0x920))(auVar16._0_8_);
          iVar6 = (**(code **)(*plVar13 + 0x3a8))();
          if ((*(int *)((longlong)unaff_RDI + 0x284) != 1) &&
             (*(int *)((longlong)unaff_RDI + 0x284) != 0)) {
            local_78 = (undefined1  [8])FUN_01e3f820();
            uStack_70 = extraout_XMM0_Qb;
            if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
              auVar15 = auVar17;
              FUN_01e3f820();
              auVar18 = blendps(auVar15,_DAT_0241c700,0xd);
            }
            else {
              auVar18._8_8_ = 0;
              auVar18._0_8_ = DAT_023dccf4;
            }
            auVar19._0_4_ = auVar18._0_4_ + SUB84(local_78,0);
            auVar19._4_4_ = auVar18._4_4_ + (float)((ulonglong)local_78 >> 0x20);
            auVar19._8_4_ = auVar18._8_4_ + (float)extraout_XMM0_Qb;
            auVar19._12_4_ = auVar18._12_4_ + (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
            blendps(auVar19,_local_78,2);
            blendps(auVar17,_DAT_0241c710,0xd);
          }
          FUN_01adad50();
          FUN_00d052e0();
          FUN_01adabe0();
          FUN_00d052e0();
          pvVar9 = _pthread_getspecific(pVar11);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_01770870();
          pVar11 = 0x2802558;
          if (cVar3 == '\0') {
            pvVar9 = _pthread_getspecific(0x2802558);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01770ea0();
            FUN_01b17610();
          }
          else {
            pvVar9 = _pthread_getspecific(0x2802558);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar7 = FUN_01770c70();
            pvVar9 = _pthread_getspecific(pVar11);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar8 = FUN_01770ea0();
            iVar12 = iVar4 + iVar7 + iVar8;
            iVar4 = iVar4 + iVar8 + iVar7 * 2;
            do {
              iVar12 = iVar12 - iVar7;
              iVar4 = iVar4 - iVar7;
            } while (iVar6 < iVar12);
            for (; iVar4 < iVar5; iVar4 = iVar4 + iVar7) {
              FUN_01b17610();
            }
          }
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((cVar2 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
        }
        goto LAB_01b17abe;
      }
    }
    bVar14 = false;
  }
  (**(code **)(*unaff_RDI + 0x620))();
  if (bVar14) {
    return;
  }
LAB_01b17abe:
  FUN_00d50b20();
  return;
}


