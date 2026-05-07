// Function: FUN_01b17840
// Address: 01b17840
// Size: 1955 bytes
// Class: MUScalePitchSystem
// String references:
//   "MUScalePitchSystem"
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_01b17840(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  int64_t lVar10;
  void* pVar11;
  int iVar12;
  int64_t *plVar13;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar14;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dd;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint64_t extraout_XMM0_Qb;
  uint8_t in_XMM1 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  int64_t local_88;
  char local_80;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  int64_t *local_48;
  char local_40;
  
  plVar13 = (int64_t *)*arg1;
  if ((g_027c0160 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_0270ab28 = FUN_0015ea50();
    g_0270ab10 = "MUScalePitchSystem";
    g_0270ab18 = 0x78;
    g_0270ab20 = FUN_0015ecf0;
    g_0270ab30 = 0;
    ram_000000000270ab38 = 0;
    g_0270ab40 = 0;
    ram_000000000270ab48 = 0;
    g_0270ab50 = 0;
    ram_000000000270ab58 = 0;
    g_0270ab60 = 0;
    ram_000000000270ab68 = 0;
    g_0270ab70 = 0;
    ram_000000000270ab78 = 0;
    g_0270ab80 = 0;
    ram_000000000270ab88 = 0;
    g_0270ab90 = 0;
    ram_000000000270ab98 = 0;
    g_0270aba0 = 0;
    ram_000000000270aba8 = 0;
    g_0270abb0 = 0;
    ram_000000000270abb8 = 0;
    g_0270abc0 = 0;
    ram_000000000270abc8 = 0;
    g_0270abd0 = 0;
    ___cxa_guard_release();
  }
  if (plVar13 == (int64_t *)0x0) {
LAB_01b17899:
    plVar13 = &g_02802688;
  }
  else {
    (**(code **)(*plVar13 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar13 = arg1;
    if (cVar2 == '\0') goto LAB_01b17899;
  }
  if (*plVar13 != 0) {
    if (*param_2 != 0) {
      FUN_00d74120();
      lVar1 = g_027e3cf0;
      if (g_027e3cf0 != 0) {
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
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
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
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01b1797f;
    }
LAB_01b17aaa:
    bVar14 = true;
  }
  else {
    if (local_48 == (int64_t *)0x0) goto LAB_01b17aaa;
LAB_01b1797f:
    plVar13 = (int64_t *)*arg1;
    FUN_011a7c20();
    if (plVar13 == (int64_t *)0x0) {
LAB_01b179b7:
      plVar13 = &g_02802688;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar13 = arg1;
      if (cVar2 == '\0') goto LAB_01b179b7;
    }
    if ((*plVar13 != 0) && (*param_2 != 0)) {
      FUN_00d74120();
      lVar1 = g_027e13b0;
      pVar11 = (void*)plVar13;
      if (g_027e13b0 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*local_48 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        lVar1 = *arg1;
        cVar2 = (char)arg1[1];
        if ((cVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific(pVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
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
          if (local_48 != (int64_t *)0x0) {
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
            plVar13 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          (**(code **)(*this_ptr + 0x920))();
          iVar5 = (**(code **)(*plVar13 + 0x3a8))();
          pvVar9 = _pthread_getspecific(pVar11);
          plVar13 = local_48;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar13 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          local_78._4_4_ = in_XMM1._4_4_;
          uStack_70._4_4_ = in_XMM1._12_4_;
          auVar15._4_4_ = extraout_XMM0_Db + (float)local_78._4_4_;
          auVar15._12_4_ = extraout_XMM0_Dd + uStack_70._4_4_;
          auVar15._0_4_ = auVar15._4_4_;
          auVar15._8_4_ = auVar15._12_4_;
          auVar16._4_12_ = auVar15._4_12_;
          auVar16._0_4_ = auVar15._4_4_ + g_02390d00;
          (**(code **)(*this_ptr + 0x920))(auVar16._0_8_);
          iVar6 = (**(code **)(*plVar13 + 0x3a8))();
          if ((*(int *)((int64_t)this_ptr + 0x284) != 1) &&
             (*(int *)((int64_t)this_ptr + 0x284) != 0)) {
            local_78 = (uint8_t  [8])FUN_01e3f820();
            uStack_70 = extraout_XMM0_Qb;
            if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
              auVar15 = auVar17;
              FUN_01e3f820();
              auVar18 = blendps(auVar15,g_0241c700,0xd);
            }
            else {
              auVar18._8_8_ = 0;
              auVar18._0_8_ = g_023dccf4;
            }
            auVar19._0_4_ = auVar18._0_4_ + SUB84(local_78,0);
            auVar19._4_4_ = auVar18._4_4_ + (float)((uint64_t)local_78 >> 0x20);
            auVar19._8_4_ = auVar18._8_4_ + (float)extraout_XMM0_Qb;
            auVar19._12_4_ = auVar18._12_4_ + (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
            blendps(auVar19,_local_78,2);
            blendps(auVar17,g_0241c710,0xd);
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
          if (local_48 != (int64_t *)0x0) {
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
  (**(code **)(*this_ptr + 0x620))();
  if (bVar14) {
    return;
  }
LAB_01b17abe:
  FUN_00d50b20();
  return;
}

