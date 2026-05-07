// Function: FUN_01bd69c0
// Address: 01bd69c0
// Size: 3034 bytes
// Class: MUSpectrumShaper
// String references:
//   "MUSpectrumShaperSpectrumCtrl"


/* WARNING: Removing unreachable block (ram,0x01bd6d50) */
/* WARNING: Removing unreachable block (ram,0x01bd6d5c) */
/* WARNING: Removing unreachable block (ram,0x01bd6bbf) */
/* WARNING: Removing unreachable block (ram,0x01bd6bcb) */
/* WARNING: Removing unreachable block (ram,0x01bd6b70) */
/* WARNING: Removing unreachable block (ram,0x01bd6b7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bd69c0(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined7 uVar10;
  void *pvVar8;
  undefined8 uVar9;
  int iVar11;
  pthread_key_t pVar12;
  longlong **pplVar13;
  longlong *plVar14;
  longlong unaff_RDI;
  longlong lVar15;
  longlong *plVar16;
  bool bVar17;
  char local_f8;
  undefined7 uStack_f7;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_5c;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38 [8];
  
  lVar15 = *(longlong *)(unaff_RDI + 0x90);
  if (lVar15 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar15;
  while( true ) {
    lVar15 = *(longlong *)(*(longlong *)(unaff_RDI + 0x88) + 0x38);
    if (lVar15 != 0) {
      FUN_00d50b00();
    }
    iVar4 = *(int *)(lVar15 + 0xc);
    iVar11 = *(int *)(local_78 + 0x18);
    FUN_00d50b20();
    iVar3 = iVar11 + 3;
    if (-1 < iVar11) {
      iVar3 = iVar11;
    }
    if (iVar4 <= iVar3 >> 2) break;
    lVar15 = *(longlong *)(*(longlong *)(unaff_RDI + 0x88) + 0x38);
    if (lVar15 != 0) {
      FUN_00d50b00();
    }
    FUN_00d23340();
    plVar6 = local_40;
    local_f8 = local_38[0];
    pcVar5 = local_38;
    if (local_38[0] == '\0') {
      pcVar5 = &local_f8;
    }
    *pcVar5 = '\0';
    if ((local_38[0] != '\0') && (plVar6 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f8 == '\0') && (plVar6 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if (lVar15 != 0) {
      FUN_00d50b20();
    }
    FUN_01ebbf20();
    plVar14 = local_40;
    if ((DAT_027e7428 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_027e7378 = FUN_00015ff0();
      _DAT_027e7360 = "MUSpectrumShaperSpectrumCtrl";
      _DAT_027e7368 = 0x98;
      _DAT_027e7370 = FUN_01be23f0;
      _DAT_027e7380 = 0;
      uRam00000000027e7388 = 0;
      _DAT_027e7390 = 0;
      uRam00000000027e7398 = 0;
      _DAT_027e73a0 = 0;
      uRam00000000027e73a8 = 0;
      _DAT_027e73b0 = 0;
      uRam00000000027e73b8 = 0;
      _DAT_027e73c0 = 0;
      uRam00000000027e73c8 = 0;
      _DAT_027e73d0 = 0;
      uRam00000000027e73d8 = 0;
      _DAT_027e73e0 = 0;
      uRam00000000027e73e8 = 0;
      _DAT_027e73f0 = 0;
      uRam00000000027e73f8 = 0;
      _DAT_027e7400 = 0;
      uRam00000000027e7408 = 0;
      _DAT_027e7410 = 0;
      uRam00000000027e7418 = 0;
      _DAT_027e7420 = 0;
      ___cxa_guard_release();
    }
    pplVar13 = (longlong **)&DAT_02802688;
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar13 = &local_40;
      if (cVar2 == '\0') {
        pplVar13 = (longlong **)&DAT_02802688;
      }
    }
    plVar14 = *pplVar13;
    if (*(char *)(pplVar13 + 1) == '\0') {
      if (plVar14 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar13 + 1) = 0;
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar14 == (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x940))();
    }
    else {
      FUN_01b5e5b0();
      FUN_00d50b20();
    }
    (**(code **)(*plVar6 + 0x478))();
    FUN_00d50130();
    FUN_00d50b20();
  }
  while( true ) {
    lVar15 = *(longlong *)(*(longlong *)(unaff_RDI + 0x88) + 0x38);
    if (lVar15 != 0) {
      FUN_00d50b00();
    }
    iVar4 = *(int *)(lVar15 + 0xc);
    iVar11 = *(int *)(local_78 + 0x18);
    FUN_00d50b20();
    iVar3 = iVar11 + 3;
    if (-1 < iVar11) {
      iVar3 = iVar11;
    }
    if (iVar3 >> 2 <= iVar4) break;
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_001911a0();
    (**(code **)(*plVar6 + 0x18))();
    FUN_01e3f820();
    (**(code **)(*plVar6 + 0x4d0))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x450))();
    (**(code **)(*plVar6 + 0x558))();
    FUN_00d50b20();
  }
  FUN_01bd0d90();
  if (3 < *(int *)(local_78 + 0x18)) {
    lVar15 = 0;
    do {
      uVar1 = *(uint *)(*(longlong *)(local_78 + 0x10) + lVar15 * 4);
      lVar7 = *(longlong *)(*(longlong *)(unaff_RDI + 0x88) + 0x38);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      plVar6 = *(longlong **)(*(longlong *)(lVar7 + 0x10) + lVar15 * 8);
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar16 = DAT_027e5c30;
      plVar14 = DAT_027e5c28;
      local_70 = plVar6;
      if (4 < uVar1) {
        local_58 = (longlong *)0x0;
        local_68 = 0;
        goto LAB_01bd6f50;
      }
      lVar7 = (longlong)&switchD_01bd6e1b::switchdataD_01bd7b70 +
              (longlong)(int)(&switchD_01bd6e1b::switchdataD_01bd7b70)[uVar1];
      uVar10 = (undefined7)((ulonglong)DAT_027e5c28 >> 8);
      switch(uVar1) {
      case 0:
        if (DAT_027e5c28 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_58 = plVar14;
        local_68 = CONCAT71(uVar10,plVar14 != (longlong *)0x0);
        local_5c = 1;
        break;
      case 1:
        if (DAT_027e5c28 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_58 = plVar14;
        local_68 = CONCAT71(uVar10,plVar14 != (longlong *)0x0);
        local_48 = (longlong *)0x0;
        local_50 = 0;
        local_5c = 0;
        goto LAB_01bd6f5c;
      case 2:
        if (DAT_027e5c28 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_58 = plVar14;
        local_68 = CONCAT71(uVar10,plVar14 != (longlong *)0x0);
        local_5c = 2;
        break;
      case 3:
        if (DAT_027e5c28 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_58 = plVar14;
        local_68 = CONCAT71(uVar10,plVar14 != (longlong *)0x0);
        local_5c = 3;
        break;
      case 4:
        if (DAT_027e5c30 != (longlong *)0x0) {
          lVar7 = FUN_00d50b00();
        }
        local_58 = plVar16;
        local_68 = CONCAT71((int7)((ulonglong)lVar7 >> 8),plVar16 != (longlong *)0x0);
        FUN_01bd8b20();
        local_48 = local_40;
        if (local_40 == (longlong *)0x0) {
          local_50 = 0;
          local_48 = (longlong *)0x0;
        }
        else {
          local_50 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        goto LAB_01bd6f5c;
      }
LAB_01bd6f50:
      local_48 = (longlong *)0x0;
      local_50 = 0;
LAB_01bd6f5c:
      FUN_01ebbf20();
      plVar14 = local_40;
      if ((DAT_027e7428 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_027e7378 = FUN_00015ff0();
        _DAT_027e7360 = "MUSpectrumShaperSpectrumCtrl";
        _DAT_027e7368 = 0x98;
        _DAT_027e7370 = FUN_01be23f0;
        _DAT_027e7380 = 0;
        uRam00000000027e7388 = 0;
        _DAT_027e7390 = 0;
        uRam00000000027e7398 = 0;
        _DAT_027e73a0 = 0;
        uRam00000000027e73a8 = 0;
        _DAT_027e73b0 = 0;
        uRam00000000027e73b8 = 0;
        _DAT_027e73c0 = 0;
        uRam00000000027e73c8 = 0;
        _DAT_027e73d0 = 0;
        uRam00000000027e73d8 = 0;
        _DAT_027e73e0 = 0;
        uRam00000000027e73e8 = 0;
        _DAT_027e73f0 = 0;
        uRam00000000027e73f8 = 0;
        _DAT_027e7400 = 0;
        uRam00000000027e7408 = 0;
        _DAT_027e7410 = 0;
        uRam00000000027e7418 = 0;
        _DAT_027e7420 = 0;
        ___cxa_guard_release();
        plVar6 = local_70;
      }
      pplVar13 = (longlong **)&DAT_02802688;
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar13 = &local_40;
        if (cVar2 == '\0') {
          pplVar13 = (longlong **)&DAT_02802688;
        }
      }
      plVar14 = *pplVar13;
      if (*(char *)(pplVar13 + 1) == '\0') {
        if (plVar14 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar13 + 1) = 0;
      }
      pVar12 = (pthread_key_t)pplVar13;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 == (longlong *)0x0) {
        FUN_01bd8b20();
        plVar16 = local_40;
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar16 == (longlong *)0x0) {
          local_48 = (longlong *)0x0;
        }
        else {
          FUN_01bd8b20();
          lVar7 = CONCAT71(uStack_f7,local_f8);
          pvVar8 = _pthread_getspecific(pVar12);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017eca70();
          local_48 = local_40;
          if (local_40 == (longlong *)0x0) {
            local_48 = (longlong *)0x0;
          }
          else if (local_38[0] == '\0') {
            uVar9 = FUN_00d50b00();
            local_50 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
            local_50 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
          }
          if ((local_f0 != '\0') && (lVar7 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      local_e0 = '\0';
      local_e8 = plVar6;
      cVar2 = (**(code **)(*local_58 + 0x50))();
      if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        if (plVar14 == (longlong *)0x0) {
          local_c0 = '\0';
          local_c8 = 0;
          (**(code **)(*plVar6 + 0x940))();
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_d0 = '\0';
          local_d8 = 0;
          FUN_01b5e5b0();
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      local_b8 = local_58;
      local_b0 = '\0';
      FUN_01eb6f70();
      if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01ebbf20();
      plVar6 = local_40;
      if ((DAT_027e7428 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_027e7378 = FUN_00015ff0();
        _DAT_027e7360 = "MUSpectrumShaperSpectrumCtrl";
        _DAT_027e7368 = 0x98;
        _DAT_027e7370 = FUN_01be23f0;
        _DAT_027e7380 = 0;
        uRam00000000027e7388 = 0;
        _DAT_027e7390 = 0;
        uRam00000000027e7398 = 0;
        _DAT_027e73a0 = 0;
        uRam00000000027e73a8 = 0;
        _DAT_027e73b0 = 0;
        uRam00000000027e73b8 = 0;
        _DAT_027e73c0 = 0;
        uRam00000000027e73c8 = 0;
        _DAT_027e73d0 = 0;
        uRam00000000027e73d8 = 0;
        _DAT_027e73e0 = 0;
        uRam00000000027e73e8 = 0;
        _DAT_027e73f0 = 0;
        uRam00000000027e73f8 = 0;
        _DAT_027e7400 = 0;
        uRam00000000027e7408 = 0;
        _DAT_027e7410 = 0;
        uRam00000000027e7418 = 0;
        _DAT_027e7420 = 0;
        ___cxa_guard_release();
      }
      pplVar13 = (longlong **)&DAT_02802688;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar13 = &local_40;
        if (cVar2 == '\0') {
          pplVar13 = (longlong **)&DAT_02802688;
        }
      }
      plVar6 = *pplVar13;
      plVar16 = local_70;
      if (plVar14 != plVar6) {
        if (*(char *)(pplVar13 + 1) == '\0') {
          if (plVar6 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          plVar16 = local_70;
          bVar17 = plVar14 != (longlong *)0x0;
          plVar14 = plVar6;
          if (bVar17) {
            FUN_00d50b20();
          }
        }
        else {
          if (plVar14 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          *(undefined1 *)(pplVar13 + 1) = 0;
          plVar14 = plVar6;
          plVar16 = local_70;
        }
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 == (longlong *)0x0) {
        local_98 = local_48;
        local_90 = '\0';
        FUN_002edd50();
        local_88 = local_40;
        local_80 = 0;
        if (local_38[0] == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38[0] = '\0';
        }
        local_80 = '\x01';
        (**(code **)(*plVar16 + 0x940))();
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_a8 = local_48;
        local_a0 = '\0';
        FUN_01b5e5b0();
        if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (((char)local_50 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)local_68 != '\0') {
        FUN_00d50b20();
      }
      if (plVar16 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      iVar4 = *(int *)(local_78 + 0x18);
      iVar11 = iVar4 + 3;
      if (-1 < iVar4) {
        iVar11 = iVar4;
      }
      lVar15 = lVar15 + 1;
    } while ((int)lVar15 < iVar11 >> 2);
  }
  FUN_01e53c20();
  (**(code **)(*local_40 + 0x8e0))();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


