// Function: FUN_0159aa90
// Address: 0159aa90
// Size: 3710 bytes
// Class: GNData
// String references:
//   "GNData"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0159aa90(undefined4 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  void *pvVar13;
  pthread_key_t pVar14;
  code *in_RCX;
  undefined8 *unaff_RDI;
  byte bVar15;
  byte bVar16;
  longlong lVar17;
  longlong **pplVar18;
  longlong lVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  char local_31;
  
  lVar3 = DAT_027c7930;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  if (DAT_027c7930 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_118 = lVar3;
  local_110 = '\x01';
  pplVar18 = &local_48;
  (**(code **)(*plVar1 + 0x88))(param_1,&local_118);
  plVar1 = local_48;
  FUN_00053ac0();
  if (plVar1 == (longlong *)0x0) {
LAB_0159ab20:
    pplVar18 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar8 = FUN_00e85ea0();
    if (cVar8 == '\0') goto LAB_0159ab20;
  }
  local_50 = *pplVar18;
  if (local_50 == (longlong *)0x0) {
    bVar15 = 1;
    bVar16 = 1;
    bVar4 = false;
    bVar5 = false;
    cVar8 = false;
    local_50 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar18 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar18 + 1) = 0;
    }
    bVar4 = true;
    bVar15 = 0;
    bVar16 = 0;
    bVar5 = true;
    cVar8 = true;
  }
  if ((local_40 != '\0') && (bVar16 = bVar15, cVar8 = bVar5, local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 == (longlong *)0x0) goto LAB_0159b063;
  iVar10 = FUN_00d45870();
  lVar3 = DAT_027c7940;
  if (iVar10 == 0xc) {
    plVar1 = (longlong *)*param_2;
    uVar20 = extraout_XMM0_Da;
    if (DAT_027c7940 != 0) {
      uVar20 = FUN_00d50b00();
    }
    local_108 = lVar3;
    local_100 = '\x01';
    pplVar18 = &local_48;
    (**(code **)(*plVar1 + 0x88))(uVar20,&local_108);
    plVar1 = local_48;
    FUN_00053ac0();
    if (plVar1 == (longlong *)0x0) {
LAB_0159ac38:
      pplVar18 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar9 = FUN_00e85ea0();
      if (cVar9 == '\0') goto LAB_0159ac38;
    }
    plVar1 = *pplVar18;
    if (plVar1 == local_50) {
      if ((bool)(bVar16 & plVar1 != (longlong *)0x0)) {
        if (*(char *)(pplVar18 + 1) != '\0') goto LAB_0159aca9;
        cVar8 = true;
        FUN_00d50b00();
      }
    }
    else {
      local_50 = plVar1;
      if (*(char *)(pplVar18 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (bVar4) {
          FUN_00d50b20();
          cVar8 = true;
        }
        else {
          cVar8 = true;
        }
      }
      else {
        if (bVar4) {
          FUN_00d50b20();
        }
LAB_0159aca9:
        *(undefined1 *)(pplVar18 + 1) = 0;
        cVar8 = true;
      }
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 == (longlong *)0x0) goto LAB_0159b063;
    uVar11 = FUN_00d45870();
    local_f8 = DAT_027c7948;
    plVar1 = (longlong *)*param_2;
    uVar20 = extraout_XMM0_Da_00;
    if (DAT_027c7948 != 0) {
      uVar20 = FUN_00d50b00();
    }
    local_f0 = '\x01';
    pplVar18 = &local_48;
    (**(code **)(*plVar1 + 0x88))(uVar20,&local_f8);
    plVar1 = local_48;
    FUN_00053ac0();
    if (plVar1 == (longlong *)0x0) {
LAB_0159adae:
      pplVar18 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar9 = FUN_00e85ea0();
      if (cVar9 == '\0') goto LAB_0159adae;
    }
    plVar1 = *pplVar18;
    if (plVar1 == local_50) {
      plVar6 = local_50;
      bVar4 = (bool)cVar8;
      if ((!(bool)cVar8) && (plVar1 != (longlong *)0x0)) {
        if (*(char *)(pplVar18 + 1) != '\0') goto LAB_0159ae2f;
        FUN_00d50b00();
        bVar4 = true;
      }
    }
    else if (*(char *)(pplVar18 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar4 = true;
      plVar6 = plVar1;
      if ((bool)cVar8) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = plVar1;
      if ((bool)cVar8) {
        FUN_00d50b20();
      }
LAB_0159ae2f:
      *(undefined1 *)(pplVar18 + 1) = 0;
      plVar6 = local_50;
      bVar4 = true;
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (longlong *)0x0) goto LAB_0159b063;
    uVar20 = FUN_00d459e0();
    local_e8 = DAT_027c7938;
    plVar1 = (longlong *)*param_2;
    local_a4 = uVar20;
    if (DAT_027c7938 != 0) {
      uVar20 = FUN_00d50b00();
    }
    local_e0 = '\x01';
    pplVar18 = &local_48;
    (**(code **)(*plVar1 + 0x88))(uVar20,&local_e8);
    plVar1 = local_48;
    FUN_00053ac0();
    if (plVar1 == (longlong *)0x0) {
LAB_0159aef4:
      pplVar18 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar8 = FUN_00e85ea0();
      if (cVar8 == '\0') goto LAB_0159aef4;
    }
    local_50 = *pplVar18;
    if (local_50 == plVar6) {
      if ((bVar4 == false) && (local_50 != (longlong *)0x0)) {
        local_50 = plVar6;
        if (*(char *)(pplVar18 + 1) != '\0') goto LAB_0159af7c;
        FUN_00d50b00();
        goto joined_r0x0159b7c4;
      }
    }
    else {
      if (*(char *)(pplVar18 + 1) == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar6 = local_50;
        if (bVar4 != false) {
          FUN_00d50b20();
        }
      }
      else {
        if (bVar4 != false) {
          FUN_00d50b20();
        }
LAB_0159af7c:
        *(undefined1 *)(pplVar18 + 1) = 0;
        plVar6 = local_50;
      }
joined_r0x0159b7c4:
      bVar4 = true;
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (longlong *)0x0) {
LAB_0159b063:
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return;
    }
    local_31 = bVar4;
    uVar12 = FUN_00d45870();
    local_d8 = DAT_027c7918;
    plVar1 = (longlong *)*param_2;
    uVar20 = extraout_XMM0_Da_01;
    if (DAT_027c7918 != 0) {
      uVar20 = FUN_00d50b00();
    }
    local_d0 = '\x01';
    pplVar18 = &local_48;
    uVar20 = (**(code **)(*plVar1 + 0x88))(uVar20,&local_d8);
    plVar1 = local_48;
    if ((DAT_026d0220 == '\0') &&
       (iVar10 = ___cxa_guard_acquire(), uVar20 = extraout_XMM0_Da_03, iVar10 != 0)) {
      _DAT_02789148 = FUN_00d4fe50();
      DAT_02789130 = "GNData";
      _DAT_02789138 = 0x28;
      in_RCX = FUN_000378a0;
      _DAT_02789140 = FUN_000378a0;
      _DAT_02789150 = 0;
      uRam0000000002789158 = 0;
      _DAT_02789160 = 0;
      uRam0000000002789168 = 0;
      _DAT_02789170 = 0;
      uRam0000000002789178 = 0;
      _DAT_02789180 = 0;
      uRam0000000002789188 = 0;
      _DAT_02789190 = 0;
      uRam0000000002789198 = 0;
      _DAT_027891a0 = 0;
      uRam00000000027891a8 = 0;
      _DAT_027891b0 = 0;
      uRam00000000027891b8 = 0;
      _DAT_027891c0 = 0;
      uRam00000000027891c8 = 0;
      _DAT_027891d0 = 0;
      uRam00000000027891d8 = 0;
      _DAT_027891e0 = 0;
      uRam00000000027891e8 = 0;
      _DAT_027891f0 = 0;
      uVar20 = ___cxa_guard_release();
    }
    if (plVar1 == (longlong *)0x0) {
LAB_0159b047:
      pplVar18 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar8 = FUN_00e85ea0();
      uVar20 = extraout_XMM0_Da_02;
      if (cVar8 == '\0') goto LAB_0159b047;
    }
    plVar1 = *pplVar18;
    if (*(char *)(pplVar18 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        uVar20 = FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar18 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      uVar20 = FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      uVar20 = FUN_00d50b20();
    }
    lVar3 = DAT_027c7908;
    cVar8 = local_31;
    if (plVar1 != (longlong *)0x0) {
      lVar2 = plVar1[2];
      param_2 = (longlong *)*param_2;
      local_a0 = uVar11;
      local_90 = plVar1;
      if (DAT_027c7908 != 0) {
        uVar20 = FUN_00d50b00();
      }
      local_c8 = lVar3;
      local_c0 = '\x01';
      pplVar18 = &local_48;
      (**(code **)(*param_2 + 0x88))(uVar20,&local_c8);
      cVar8 = local_31;
      plVar1 = local_48;
      if ((DAT_026d0220 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
        _DAT_02789148 = FUN_00d4fe50();
        DAT_02789130 = "GNData";
        _DAT_02789138 = 0x28;
        in_RCX = FUN_000378a0;
        _DAT_02789140 = FUN_000378a0;
        _DAT_02789150 = 0;
        uRam0000000002789158 = 0;
        _DAT_02789160 = 0;
        uRam0000000002789168 = 0;
        _DAT_02789170 = 0;
        uRam0000000002789178 = 0;
        _DAT_02789180 = 0;
        uRam0000000002789188 = 0;
        _DAT_02789190 = 0;
        uRam0000000002789198 = 0;
        _DAT_027891a0 = 0;
        uRam00000000027891a8 = 0;
        _DAT_027891b0 = 0;
        uRam00000000027891b8 = 0;
        _DAT_027891c0 = 0;
        uRam00000000027891c8 = 0;
        _DAT_027891d0 = 0;
        uRam00000000027891d8 = 0;
        _DAT_027891e0 = 0;
        uRam00000000027891e8 = 0;
        _DAT_027891f0 = 0;
        ___cxa_guard_release();
        cVar8 = local_31;
      }
      if (plVar1 == (longlong *)0x0) {
        pplVar18 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar9 = FUN_00e85ea0();
        if (cVar9 == '\0') {
          pplVar18 = (longlong **)&DAT_02802688;
        }
      }
      local_98 = *pplVar18;
      if (*(char *)(pplVar18 + 1) == '\0') {
        if (local_98 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar18 + 1) = 0;
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if (local_98 == (longlong *)0x0) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
      }
      else {
        lVar3 = local_98[2];
        FUN_0173ba80();
        local_80 = 0;
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_80 = '\x01';
        local_88 = local_68;
        FUN_0173b120();
        plVar1 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
             (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        local_9c = uVar12;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        lVar17 = 0;
        do {
          pvVar13 = _pthread_getspecific((pthread_key_t)in_RCX);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b790();
          pvVar13 = _pthread_getspecific((pthread_key_t)in_RCX);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01770f00();
          pvVar13 = _pthread_getspecific((pthread_key_t)in_RCX);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01779ed0(*(undefined4 *)(lVar3 + lVar17 * 4));
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          pvVar13 = _pthread_getspecific((pthread_key_t)in_RCX);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b6f0();
          pvVar13 = _pthread_getspecific((pthread_key_t)in_RCX);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01736e70();
          pvVar13 = _pthread_getspecific((pthread_key_t)in_RCX);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar19 = DAT_027cd580;
          lVar7 = DAT_027cd560;
          if (*(char *)(lVar2 + lVar17) == '\0') {
            if (DAT_027cd580 == 0) goto LAB_0159b4a0;
            FUN_00d50b00();
          }
          else if (DAT_027cd560 == 0) {
LAB_0159b4a0:
            lVar19 = 0;
          }
          else {
            FUN_00d50b00();
            lVar19 = lVar7;
          }
          local_b0 = '\x01';
          local_b8 = lVar19;
          FUN_017395b0();
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          pVar14 = (pthread_key_t)in_RCX;
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0xc);
        pvVar13 = _pthread_getspecific(pVar14);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar13 = _pthread_getspecific(pVar14);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01770230(local_a4);
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar13 = _pthread_getspecific(pVar14);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b6f0();
        pvVar13 = _pthread_getspecific(pVar14);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01736c60();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar13 = _pthread_getspecific(pVar14);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar20 = FUN_0173e440();
        pvVar13 = _pthread_getspecific(pVar14);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0174db40();
        pvVar13 = _pthread_getspecific(pVar14);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar13 = _pthread_getspecific(pVar14);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01774240(uVar20);
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar13 = _pthread_getspecific(pVar14);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017548e0();
        *unaff_RDI = plVar1;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        FUN_00d50b20();
        cVar8 = local_31;
      }
      FUN_00d50b20();
      goto LAB_0159ac79;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_0159ac79:
  if (cVar8 != '\0') {
    FUN_00d50b20();
  }
  return;
}


