// Function: FUN_01324620
// Address: 01324620
// Size: 7178 bytes
// Class: MUPercussivePitchSystem
// String references:
//   "%p::_pitchSystem"
//   "MU12TETPitchSystem"
//   "MUPercussivePitchSystem"
//   "MUScalePitchSystem"
//   "MUAudioSourcePrincipalItem"
//   "%p::_microtonalPitchSystem"


/* WARNING: Removing unreachable block (ram,0x01324664) */
/* WARNING: Removing unreachable block (ram,0x01324670) */
/* WARNING: Removing unreachable block (ram,0x0132477d) */
/* WARNING: Removing unreachable block (ram,0x01324789) */
/* WARNING: Removing unreachable block (ram,0x01325b2f) */
/* WARNING: Removing unreachable block (ram,0x01325b50) */
/* WARNING: Removing unreachable block (ram,0x013258c7) */
/* WARNING: Removing unreachable block (ram,0x013258f0) */
/* WARNING: Removing unreachable block (ram,0x013258c9) */
/* WARNING: Removing unreachable block (ram,0x013258f2) */
/* WARNING: Removing unreachable block (ram,0x01325b31) */
/* WARNING: Removing unreachable block (ram,0x01325b52) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01324620(longlong *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar14;
  longlong **pplVar15;
  bool bVar16;
  undefined4 uVar17;
  float fVar18;
  longlong *local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a0;
  char local_98;
  ulonglong local_90;
  longlong *local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  uint local_58;
  int local_48;
  longlong *local_38;
  
  FUN_00d50f50();
  if (*(longlong *)(unaff_RDI + 0x50) != 0) {
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01525bc0();
    iVar3 = *(int *)((longlong)local_60 + 0xc);
    if ((char)local_58 != '\0') {
      FUN_00d50b20();
    }
    if ((iVar3 == 0) && (*(longlong *)(unaff_RDI + 0x50) != 0)) {
      *(undefined8 *)(unaff_RDI + 0x50) = 0;
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x58) == 0) {
LAB_01324709:
    plVar13 = *(longlong **)(unaff_RDI + 0x50);
  }
  else {
    plVar13 = (longlong *)0x0;
    if (*(longlong *)(unaff_RDI + 0x50) != 0) {
      *(undefined8 *)(unaff_RDI + 0x50) = 0;
      FUN_00d50b20();
      goto LAB_01324709;
    }
  }
  if (plVar13 != (longlong *)0x0) {
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      plVar13 = *(longlong **)(unaff_RDI + 0x50);
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar13 + 0x138))();
    local_b0 = 0;
    local_b8 = *(longlong *)(unaff_RDI + 0x50);
    if (local_b8 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    FUN_016cbc90();
    plVar13 = *(longlong **)(unaff_RDI + 0x58);
    plVar7 = plVar13;
    if (plVar13 != local_60) {
      if ((char)local_58 == '\0') {
        if (local_60 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
          goto LAB_013247db;
        }
        FUN_00d50b00();
        param_1 = *(longlong **)(unaff_RDI + 0x58);
        *(longlong **)(unaff_RDI + 0x58) = local_60;
        plVar7 = local_60;
      }
      else {
        local_58 = local_58 & 0xffffff00;
        plVar7 = local_60;
LAB_013247db:
        *(longlong **)(unaff_RDI + 0x58) = plVar7;
        param_1 = plVar13;
      }
      if (param_1 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar7 = local_60;
      }
    }
    if (((char)local_58 != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x50) != 0) {
      *(undefined8 *)(unaff_RDI + 0x50) = 0;
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x58) == 0) {
    FUN_016c0a70();
    plVar13 = *(longlong **)(unaff_RDI + 0x58);
    plVar7 = plVar13;
    if (plVar13 != local_60) {
      if ((char)local_58 == '\0') {
        if (local_60 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
          goto LAB_01324884;
        }
        FUN_00d50b00();
        param_1 = *(longlong **)(unaff_RDI + 0x58);
        *(longlong **)(unaff_RDI + 0x58) = local_60;
        plVar7 = local_60;
      }
      else {
        local_58 = local_58 & 0xffffff00;
        plVar7 = local_60;
LAB_01324884:
        *(longlong **)(unaff_RDI + 0x58) = plVar7;
        param_1 = plVar13;
      }
      if (param_1 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar7 = local_60;
      }
    }
    if (((char)local_58 != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x148) == 0) {
    plVar13 = (longlong *)*unaff_RSI;
    FUN_0002c940();
    if (plVar13 == (longlong *)0x0) {
LAB_01324973:
      param_1 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar2 = FUN_00e85ea0();
      param_1 = unaff_RSI;
      if (cVar2 == '\0') goto LAB_01324973;
    }
    plVar13 = (longlong *)*param_1;
    lVar5 = param_1[1];
    if (((char)lVar5 == '\0') || (plVar13 == (longlong *)0x0)) {
      if (plVar13 == (longlong *)0x0) goto LAB_01324e0a;
    }
    else {
      FUN_00d50b00();
    }
    lVar10 = DAT_027bf3e0;
    if (DAT_027bf3e0 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*plVar13 + 0x590))();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    lVar10 = DAT_027bf3e0;
    if (cVar2 != '\0') {
      if (DAT_027bf3e0 != 0) {
        FUN_00d50b00();
      }
      iVar3 = (**(code **)(*plVar13 + 0x520))();
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      if (iVar3 != 0) {
        FUN_0141ae70();
        plVar7 = *(longlong **)(unaff_RDI + 0x148);
        plVar8 = plVar7;
        if (plVar7 != local_60) {
          if ((char)local_58 == '\0') {
            if (local_60 == (longlong *)0x0) {
              plVar8 = (longlong *)0x0;
              goto LAB_01324c98;
            }
            FUN_00d50b00();
            param_1 = *(longlong **)(unaff_RDI + 0x148);
            *(longlong **)(unaff_RDI + 0x148) = local_60;
            plVar8 = local_60;
          }
          else {
            local_58 = local_58 & 0xffffff00;
            plVar8 = local_60;
LAB_01324c98:
            *(longlong **)(unaff_RDI + 0x148) = plVar8;
            param_1 = plVar7;
          }
          if (param_1 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar8 = local_60;
          }
        }
        if (((char)local_58 != '\0') && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar10 = DAT_027bf3e8;
        if (iVar3 == 3) {
          if (DAT_027bf3e8 != 0) {
            FUN_00d50b00();
          }
          cVar2 = (**(code **)(*plVar13 + 0x590))();
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar10 = DAT_027bf3e8;
            if (DAT_027bf3e8 != 0) {
              FUN_00d50b00();
            }
            (**(code **)(*plVar13 + 0x510))();
            FUN_0141abf0();
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
          }
        }
      }
    }
    if ((char)lVar5 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0141b660();
    plVar13 = local_60;
    if ((char)local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_013249c5;
      }
    }
    else if (local_60 != (longlong *)0x0) {
LAB_013249c5:
      lVar5 = DAT_027bf3f0;
      if (DAT_027bf3f0 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*plVar13 + 0x50))();
      lVar10 = DAT_027bf3f8;
      cVar1 = '\x01';
      if (cVar2 == '\0') {
        if (DAT_027bf3f8 != 0) {
          FUN_00d50b00();
        }
        cVar2 = (**(code **)(*plVar13 + 0x50))();
        lVar12 = DAT_027bf400;
        cVar1 = '\x01';
        if (cVar2 == '\0') {
          if (DAT_027bf400 != 0) {
            FUN_00d50b00();
          }
          cVar1 = (**(code **)(*plVar13 + 0x50))();
          if (lVar12 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if (cVar1 != '\0') {
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01538fb0();
        if (*(longlong *)(unaff_RDI + 0x158) == 0) {
          puVar6 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          param_1 = (longlong *)&DAT_025eec60;
          *puVar6 = &DAT_025eec60;
          puVar6[7] = 0;
          puVar6[8] = 0;
          *(undefined4 *)(puVar6 + 9) = 0;
          (*DAT_025eec78)();
          lVar5 = *(longlong *)(unaff_RDI + 0x158);
          *(undefined8 **)(unaff_RDI + 0x158) = puVar6;
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01538fb0();
      }
      FUN_00d50b20();
    }
  }
LAB_01324e0a:
  pVar11 = (pthread_key_t)param_1;
  local_58 = 1;
  local_60 = &DAT_024c5048;
  uVar17 = FUN_00d50b00();
  pplVar14 = &local_a0;
  FUN_00d8cb40(uVar17,&local_60);
  plVar13 = local_a0;
  if (local_98 == '\0') {
    if (((local_a0 != (longlong *)0x0) && (FUN_00d50b00(), local_98 != '\0')) &&
       (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_98 = '\0';
  }
  local_60 = &DAT_024c5048;
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  local_d0 = plVar13;
  uVar17 = (**(code **)(*(longlong *)*unaff_RSI + 0x5e0))();
  local_130 = plVar13;
  local_128 = '\0';
  pplVar15 = &local_60;
  FUN_000175c0(uVar17,&local_130);
  plVar13 = local_60;
  FUN_0015ea50();
  if (plVar13 == (longlong *)0x0) {
LAB_01324eef:
    pplVar15 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar13 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01324eef;
  }
  plVar13 = *pplVar15;
  if (*(char *)(pplVar15 + 1) == '\0') {
    if (plVar13 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_a0 = plVar13;
    local_98 = 1;
  }
  else {
    local_a0 = plVar13;
    local_98 = 1;
    *(undefined1 *)(pplVar15 + 1) = 0;
  }
  local_98 = '\x01';
  local_a0 = plVar13;
  if (((char)local_58 != '\0') && (local_98 = '\x01', local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((DAT_0278c570 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_027c3448 = FUN_0015ea50();
    _DAT_027c3430 = "MU12TETPitchSystem";
    _DAT_027c3438 = 0x68;
    pVar11 = 0x15ec50;
    _DAT_027c3440 = FUN_0015ec50;
    _DAT_027c3450 = 0;
    uRam00000000027c3458 = 0;
    _DAT_027c3460 = 0;
    uRam00000000027c3468 = 0;
    _DAT_027c3470 = 0;
    uRam00000000027c3478 = 0;
    _DAT_027c3480 = 0;
    uRam00000000027c3488 = 0;
    _DAT_027c3490 = 0;
    uRam00000000027c3498 = 0;
    _DAT_027c34a0 = 0;
    uRam00000000027c34a8 = 0;
    _DAT_027c34b0 = 0;
    uRam00000000027c34b8 = 0;
    _DAT_027c34c0 = 0;
    uRam00000000027c34c8 = 0;
    _DAT_027c34d0 = 0;
    uRam00000000027c34d8 = 0;
    _DAT_027c34e0 = 0;
    uRam00000000027c34e8 = 0;
    _DAT_027c34f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar13 == (longlong *)0x0) {
LAB_01324fe3:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar13 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01324fe3;
  }
  plVar13 = local_a0;
  cVar2 = *(char *)(pplVar14 + 1);
  if ((cVar2 == '\0') || (*pplVar14 == (longlong *)0x0)) {
    if (*pplVar14 != (longlong *)0x0) goto LAB_01325010;
    if ((DAT_027c0150 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_0270acc8 = FUN_0015ea50();
      _DAT_0270acb0 = "MUPercussivePitchSystem";
      _DAT_0270acb8 = 0x58;
      pVar11 = 0x15eca0;
      _DAT_0270acc0 = FUN_0015eca0;
      _DAT_0270acd0 = 0;
      uRam000000000270acd8 = 0;
      _DAT_0270ace0 = 0;
      uRam000000000270ace8 = 0;
      _DAT_0270acf0 = 0;
      uRam000000000270acf8 = 0;
      _DAT_0270ad00 = 0;
      uRam000000000270ad08 = 0;
      _DAT_0270ad10 = 0;
      uRam000000000270ad18 = 0;
      _DAT_0270ad20 = 0;
      uRam000000000270ad28 = 0;
      _DAT_0270ad30 = 0;
      uRam000000000270ad38 = 0;
      _DAT_0270ad40 = 0;
      uRam000000000270ad48 = 0;
      _DAT_0270ad50 = 0;
      uRam000000000270ad58 = 0;
      _DAT_0270ad60 = 0;
      uRam000000000270ad68 = 0;
      _DAT_0270ad70 = 0;
      ___cxa_guard_release();
    }
    if (plVar13 == (longlong *)0x0) {
LAB_01325133:
      pplVar14 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_01325133;
      pplVar14 = &local_a0;
    }
    plVar7 = local_a0;
    plVar13 = *pplVar14;
    local_88 = (longlong *)CONCAT71(local_88._1_7_,*(char *)(pplVar14 + 1));
    if ((*(char *)(pplVar14 + 1) != '\0') && (plVar13 != (longlong *)0x0)) {
      FUN_00d50b00();
LAB_013252ea:
      FUN_0173c6e0();
      local_38 = local_60;
      plVar7 = local_60;
      if (local_60 == (longlong *)0x0) {
        local_38 = (longlong *)0x0;
        local_90 = 0;
      }
      else {
        plVar8 = local_60;
        if ((char)local_58 == '\0') {
          plVar8 = (longlong *)FUN_00d50b00();
          if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            local_90 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
            FUN_00d50b20();
            goto LAB_0132534b;
          }
        }
        local_90 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
      }
LAB_0132534b:
      pvVar4 = _pthread_getspecific((pthread_key_t)plVar7);
      plVar8 = local_38;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar7 = local_38;
        plVar8 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      pvVar4 = _pthread_getspecific((pthread_key_t)plVar7);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar13 + 0x3f0))();
      lVar5 = *plVar8;
      (**(code **)(lVar5 + 0x3f8))();
      pVar11 = (pthread_key_t)lVar5;
      if ((char)local_88 == '\0') {
        local_80 = local_90;
      }
      else {
        FUN_00d50b20();
        local_80 = local_90;
      }
      goto LAB_01325232;
    }
    if (plVar13 != (longlong *)0x0) goto LAB_013252ea;
    if ((DAT_027c0160 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_0270ab28 = FUN_0015ea50();
      _DAT_0270ab10 = "MUScalePitchSystem";
      _DAT_0270ab18 = 0x78;
      pVar11 = 0x15ecf0;
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
    if (plVar7 == (longlong *)0x0) {
LAB_01325465:
      pplVar14 = (longlong **)&DAT_02802688;
      if (DAT_02802688 == 0) goto LAB_013254be;
LAB_01325481:
      local_38 = local_a0;
      if (local_a0 == (longlong *)0x0) goto LAB_013254be;
      local_80 = CONCAT71((int7)((ulonglong)pplVar14 >> 8),local_98);
      if (local_98 != '\0') {
        local_90 = 0;
        FUN_00d50b00();
      }
      goto LAB_01325232;
    }
    local_90 = 0;
    (**(code **)(*plVar7 + 0x360))();
    local_90 = 0;
    pVar11 = 0;
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01325465;
    pplVar14 = &local_a0;
    if (local_a0 != (longlong *)0x0) goto LAB_01325481;
LAB_013254be:
    local_80 = 0;
LAB_013254c4:
    pvVar4 = _pthread_getspecific(pVar11);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar9 = FUN_01510030();
    if (local_60 == (longlong *)0x0) {
      bVar16 = true;
    }
    else {
      pvVar4 = _pthread_getspecific(pVar11);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar9 = FUN_0150eb60();
      bVar16 = local_70 == (longlong *)0x0;
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
    }
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    local_90 = CONCAT44(local_90._4_4_,(int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1));
    if (bVar16) {
      pvVar4 = _pthread_getspecific(pVar11);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150cac0();
    }
  }
  else {
    FUN_00d50b00();
LAB_01325010:
    pvVar4 = _pthread_getspecific(pVar11);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014fdd70();
    plVar13 = local_60;
    local_38 = local_60;
    plVar7 = local_60;
    if (local_60 == (longlong *)0x0) {
      pvVar4 = _pthread_getspecific(0);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014fdd00();
      if ((char)local_58 == '\0') {
        if (local_60 == (longlong *)0x0) goto LAB_013251c1;
        FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_60 == (longlong *)0x0) {
LAB_013251c1:
        local_80 = 0;
        local_38 = (longlong *)0x0;
        goto LAB_013251e3;
      }
      FUN_0173c6e0();
      local_38 = local_60;
      plVar7 = local_60;
      if (local_60 == (longlong *)0x0) {
        local_38 = (longlong *)0x0;
        local_80 = 0;
      }
      else {
        local_80 = CONCAT71((int7)((ulonglong)local_60 >> 8),1);
        if ((char)local_58 == '\0') {
          FUN_00d50b00();
          if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00d50b20();
    }
    else {
      plVar8 = local_60;
      if ((char)local_58 == '\0') {
        plVar8 = (longlong *)FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          plVar8 = (longlong *)FUN_00d50b20();
        }
      }
      local_80 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
      pvVar4 = _pthread_getspecific((pthread_key_t)plVar7);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar7 = plVar13;
      }
      local_80 = 1;
      FUN_0174bd90();
    }
LAB_013251e3:
    pvVar4 = _pthread_getspecific((pthread_key_t)plVar7);
    plVar13 = local_38;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar7 = local_38;
      plVar13 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    pVar11 = (pthread_key_t)plVar7;
    (**(code **)(*plVar13 + 0x3f8))();
    if (cVar2 != '\0') {
      FUN_00d50b20();
    }
LAB_01325232:
    if (local_38 == (longlong *)0x0) goto LAB_013254c4;
    pvVar4 = _pthread_getspecific(pVar11);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_120 = local_38;
    local_118 = '\0';
    FUN_0150bf50();
    if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_90 = local_90 & 0xffffffff00000000;
  }
  local_58 = 1;
  local_60 = &DAT_024c5048;
  uVar17 = FUN_00d50b00();
  FUN_00d8cb40(uVar17,&local_60);
  plVar13 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
       (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  local_60 = &DAT_024c5048;
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x5e0))();
  local_110 = plVar13;
  local_108 = '\0';
  pplVar14 = &local_60;
  FUN_000175c0();
  plVar7 = local_60;
  if ((DAT_027c0160 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    local_78 = plVar13;
    _DAT_0270ab28 = FUN_0015ea50();
    _DAT_0270ab10 = "MUScalePitchSystem";
    _DAT_0270ab18 = 0x78;
    pVar11 = 0x15ecf0;
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
    plVar13 = local_78;
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_013256c4;
  }
  pplVar14 = (longlong **)&DAT_02802688;
LAB_013256c4:
  plVar7 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar14 + 1) = 0;
  }
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    pvVar4 = _pthread_getspecific(pVar11);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_f8 = '\0';
    local_100 = plVar7;
    FUN_0150bf50();
    if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar5 = DAT_026f6de8;
  plVar8 = (longlong *)*unaff_RSI;
  if (DAT_026f6de8 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar5;
  local_c0 = '\x01';
  iVar3 = (**(code **)(*plVar8 + 0x598))();
  if (iVar3 < 1) {
    iVar3 = 5;
    if ((*(longlong *)(unaff_RDI + 0x1f8) == 0) &&
       (iVar3 = 6, *(longlong *)(unaff_RDI + 0x200) == 0)) {
      if (*(longlong *)(unaff_RDI + 0x148) == 0) {
        iVar3 = 0;
      }
      else {
        pvVar4 = _pthread_getspecific(pVar11);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar3 = FUN_0141bab0();
      }
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (iVar3 == 3) {
      lVar5 = *(longlong *)(unaff_RDI + 200);
      if (lVar5 != 0) {
        local_58 = local_58 & 0xffffff00;
        local_60 = (longlong *)0x0;
        local_48 = -1;
        local_88 = plVar7;
        local_78 = plVar13;
        while( true ) {
          lVar10 = (longlong)local_48;
          local_48 = local_48 + 1;
          if (*(int *)(lVar5 + 0xc) <= local_48) break;
          lVar12 = *(longlong *)(lVar5 + 0x10);
          local_60 = *(longlong **)(lVar12 + 8 + lVar10 * 8);
          pvVar4 = _pthread_getspecific((pthread_key_t)lVar12);
          pVar11 = (pthread_key_t)lVar12;
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc000();
          plVar13 = local_70;
          if (local_68 == '\0') {
            if (local_70 != (longlong *)0x0) {
              FUN_00d50b00();
              if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_013259a0;
            }
LAB_01325a00:
            bVar16 = true;
          }
          else {
            if (local_70 == (longlong *)0x0) goto LAB_01325a00;
LAB_013259a0:
            pvVar4 = _pthread_getspecific(pVar11);
            if ((pvVar4 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
            bVar16 = false;
            (**(code **)(*plVar13 + 0x470))();
          }
          pvVar4 = _pthread_getspecific(pVar11);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bbde0();
          if (!bVar16) {
            FUN_00d50b20();
          }
        }
        FUN_0131c8b0();
        plVar13 = local_78;
        plVar7 = local_88;
      }
      *(undefined1 *)(unaff_RDI + 0x1a8) = 1;
    }
  }
  else if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = DAT_026f6de8;
  plVar8 = (longlong *)*unaff_RSI;
  if (DAT_026f6de8 != 0) {
    FUN_00d50b00();
  }
  local_f0 = lVar5;
  local_e8 = '\x01';
  iVar3 = (**(code **)(*plVar8 + 0x598))();
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((iVar3 < 2) && (lVar5 = *(longlong *)(unaff_RDI + 200), lVar5 != 0)) {
    local_88 = plVar7;
    local_78 = plVar13;
    local_58 = local_58 & 0xffffff00;
    local_60 = (longlong *)0x0;
    local_48 = -1;
LAB_01325b2b:
    while( true ) {
      lVar10 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar5 + 0xc) <= local_48) break;
      plVar13 = *(longlong **)(*(longlong *)(lVar5 + 0x10) + 8 + lVar10 * 8);
      local_60 = plVar13;
      if ((DAT_027c0170 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        _DAT_02790158 = FUN_007ef2d0();
        _DAT_02790140 = "MUAudioSourcePrincipalItem";
        _DAT_02790148 = 0x138;
        _DAT_02790150 = FUN_010fe5c0;
        _DAT_02790160 = 0;
        uRam0000000002790168 = 0;
        _DAT_02790170 = 0;
        uRam0000000002790178 = 0;
        _DAT_02790180 = 0;
        uRam0000000002790188 = 0;
        _DAT_02790190 = 0;
        uRam0000000002790198 = 0;
        _DAT_027901a0 = 0;
        uRam00000000027901a8 = 0;
        _DAT_027901b0 = 0;
        uRam00000000027901b8 = 0;
        _DAT_027901c0 = 0;
        uRam00000000027901c8 = 0;
        _DAT_027901d0 = 0;
        uRam00000000027901d8 = 0;
        _DAT_027901e0 = 0;
        uRam00000000027901e8 = 0;
        _DAT_027901f0 = 0;
        uRam00000000027901f8 = 0;
        _DAT_02790200 = 0;
        ___cxa_guard_release();
      }
      pplVar14 = (longlong **)&DAT_02802688;
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar14 = &local_60;
        if (cVar2 == '\0') {
          pplVar14 = (longlong **)&DAT_02802688;
        }
      }
      plVar13 = *pplVar14;
      if (*(char *)(pplVar14 + 1) == '\0') goto LAB_01325bd0;
      *(undefined1 *)(pplVar14 + 1) = 0;
      if (plVar13 != (longlong *)0x0) goto LAB_01325be1;
    }
    FUN_0131c8b0();
    plVar13 = local_78;
    plVar7 = local_88;
  }
  lVar5 = DAT_026f6de8;
  plVar8 = (longlong *)*unaff_RSI;
  if (DAT_026f6de8 != 0) {
    FUN_00d50b00();
  }
  local_e0 = lVar5;
  local_d8 = '\x01';
  iVar3 = (**(code **)(*plVar8 + 0x598))();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (iVar3 < 3) {
    FUN_01327070();
    *(undefined1 *)(unaff_RDI + 0x1a8) = 1;
  }
  plVar8 = local_d0;
  if (*(float *)(unaff_RDI + 0x78) < *(float *)(unaff_RDI + 0x8c)) {
    *(float *)(unaff_RDI + 0x8c) = *(float *)(unaff_RDI + 0x78);
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar13 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_80 != '\0' && (char)local_90 == '\0') {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
LAB_01325bd0:
  if (plVar13 != (longlong *)0x0) {
    FUN_00d50b00();
LAB_01325be1:
    pVar11 = (pthread_key_t)pplVar14;
    pvVar4 = _pthread_getspecific(pVar11);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014d1d00();
    if (local_70 == (longlong *)0x0) {
      bVar16 = false;
    }
    else {
      pvVar4 = _pthread_getspecific(pVar11);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_014bc070();
      bVar16 = true;
      if (((cVar2 == '\0') && (plVar13 != *(longlong **)(unaff_RDI + 0x118))) &&
         (plVar13 != *(longlong **)(unaff_RDI + 0x128))) {
        bVar16 = plVar13 == *(longlong **)(unaff_RDI + 0x120);
      }
      bVar16 = (bool)(bVar16 ^ 1);
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar16) {
      pvVar4 = _pthread_getspecific(pVar11);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar18 = (float)FUN_014bc1c0();
      if (fVar18 < *(float *)(unaff_RDI + 0x78)) {
        pvVar4 = _pthread_getspecific(pVar11);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d1d00();
        plVar13 = local_70;
        if (local_68 == '\0') {
          if (local_70 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        FUN_01326e80();
        if (plVar13 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
  }
  goto LAB_01325b2b;
}


