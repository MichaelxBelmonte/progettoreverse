// Function: FUN_0015b0f0
// Address: 0015b0f0
// Size: 6622 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"


/* WARNING: Removing unreachable block (ram,0x0015bb5d) */
/* WARNING: Removing unreachable block (ram,0x0015ba83) */
/* WARNING: Removing unreachable block (ram,0x0015b904) */
/* WARNING: Removing unreachable block (ram,0x0015b910) */
/* WARNING: Removing unreachable block (ram,0x0015ba8f) */
/* WARNING: Removing unreachable block (ram,0x0015bb69) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0015b0f0(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong lVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  pthread_key_t pVar12;
  longlong **pplVar13;
  undefined8 *unaff_RDI;
  uint uVar14;
  longlong *plVar15;
  bool bVar16;
  longlong local_130;
  char local_128;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70 [16];
  undefined4 local_60;
  undefined8 local_5c;
  longlong *local_50;
  char local_48;
  char local_40 [8];
  longlong *local_38;
  
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_0015e7e0();
  local_38 = plVar5;
  (**(code **)(*plVar5 + 0x18))();
  if (param_2 == 0) {
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    plVar5 = local_38;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_38, lVar7 != 0)) {
      param_1 = local_38;
      plVar5 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    plVar2 = local_78;
    if (local_70[0] == '\0') {
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_0015b3a6;
      }
      if (plVar5[0x11] != 0) {
        plVar5[0x11] = 0;
        goto LAB_0015b429;
      }
    }
    else {
      local_70[0] = '\0';
LAB_0015b3a6:
      plVar15 = (longlong *)plVar5[0x11];
      if (plVar15 != plVar2) {
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar5[0x11] = (longlong)plVar2;
        if (plVar15 != (longlong *)0x0) {
LAB_0015b429:
          FUN_00d50b20();
        }
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    plVar5 = local_38;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_38, lVar7 != 0)) {
      param_1 = local_38;
      plVar5 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    plVar2 = local_78;
    if (local_70[0] == '\0') {
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_0015b547;
      }
      if (plVar5[0x12] != 0) {
        plVar5[0x12] = 0;
        goto LAB_0015b7ac;
      }
    }
    else {
      local_70[0] = '\0';
LAB_0015b547:
      plVar15 = (longlong *)plVar5[0x12];
      if (plVar15 != plVar2) {
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar5[0x12] = (longlong)plVar2;
        if (plVar15 != (longlong *)0x0) {
LAB_0015b7ac:
          FUN_00d50b20();
        }
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    plVar5 = local_38;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_38, lVar7 != 0)) {
      param_1 = local_38;
      plVar5 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    plVar2 = local_78;
    local_40[0] = local_70[0];
    pcVar8 = local_70;
    if (local_70[0] == '\0') {
      pcVar8 = local_40;
    }
    *pcVar8 = '\0';
    if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40[0] == '\0') {
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
        plVar15 = (longlong *)plVar5[0x11];
        if (plVar15 != plVar2) goto LAB_0015b3f9;
        goto LAB_0015b59d;
      }
      if (plVar5[0x11] != 0) {
        plVar5[0x11] = 0;
        goto LAB_0015b590;
      }
    }
    else {
      local_40[0] = '\0';
      plVar15 = (longlong *)plVar5[0x11];
      if (plVar15 != plVar2) {
        if (plVar2 != (longlong *)0x0) {
LAB_0015b3f9:
          FUN_00d50b00();
        }
        plVar5[0x11] = (longlong)plVar2;
        if (plVar15 != (longlong *)0x0) {
LAB_0015b590:
          FUN_00d50b20();
        }
      }
      if (plVar2 != (longlong *)0x0) {
LAB_0015b59d:
        FUN_00d50b20();
      }
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    plVar5 = local_38;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_38, lVar7 != 0)) {
      param_1 = local_38;
      plVar5 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eff0();
    FUN_00d23310();
    plVar2 = local_78;
    pcVar8 = local_70;
    if (local_70[0] == '\0') {
      pcVar8 = local_40;
    }
    local_40[0] = local_70[0];
    *pcVar8 = '\0';
    if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40[0] == '\0') {
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
        plVar15 = (longlong *)plVar5[0x12];
        if (plVar15 != plVar2) goto LAB_0015b783;
        goto LAB_0015b80f;
      }
      if (plVar5[0x12] != 0) {
        plVar5[0x12] = 0;
        goto LAB_0015b802;
      }
    }
    else {
      local_40[0] = '\0';
      plVar15 = (longlong *)plVar5[0x12];
      if (plVar15 != plVar2) {
        if (plVar2 != (longlong *)0x0) {
LAB_0015b783:
          FUN_00d50b00();
        }
        plVar5[0x12] = (longlong)plVar2;
        if (plVar15 != (longlong *)0x0) {
LAB_0015b802:
          FUN_00d50b20();
        }
      }
      if (plVar2 != (longlong *)0x0) {
LAB_0015b80f:
        FUN_00d50b20();
      }
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012ca540();
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    lVar7 = local_38[0x11];
  }
  else {
    lVar7 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0x88);
    param_1 = local_38;
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar6 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
    *(undefined8 *)(lVar7 + 0x130) = 0;
  }
  else {
    *(undefined8 *)
     (*(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8) + 0x130) = 0;
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505730();
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    lVar7 = local_38[0x12];
  }
  else {
    lVar7 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0x90);
    param_1 = local_38;
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fed0();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    lVar7 = local_38[0x11];
  }
  else {
    lVar7 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0x88);
    param_1 = local_38;
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  FUN_004f7da0();
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    lVar7 = local_38[0x11];
  }
  else {
    lVar7 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0x88);
    param_1 = local_38;
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (local_78 == (longlong *)0x0) {
    bVar16 = false;
  }
  else {
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar6 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
      lVar9 = local_38[0x11];
    }
    else {
      lVar9 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0x88);
      param_1 = local_38;
    }
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    bVar16 = *(int *)((longlong)local_50 + 0xc) != 0;
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (bVar16) {
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
      lVar7 = local_38[0x11];
    }
    else {
      lVar7 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0x88);
      param_1 = local_38;
    }
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    uVar14 = *(uint *)((longlong)local_78 + 0xc);
    if (local_70[0] != '\0') {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (0 < (int)uVar14) {
      lVar7 = (ulonglong)uVar14 + 1;
      do {
        uVar14 = uVar14 - 1;
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        if ((pvVar6 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          lVar9 = local_38[0x11];
        }
        else {
          lVar9 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0x88);
          param_1 = local_38;
        }
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        if ((pvVar6 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
          lVar10 = local_38[0x11];
        }
        else {
          lVar10 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4] + 0x88);
          param_1 = local_38;
        }
        pVar12 = (pthread_key_t)param_1;
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar12);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        param_1 = (longlong *)(ulonglong)uVar14;
        lVar1 = *(longlong *)(local_78[2] + (longlong)param_1 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_012e68b0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + -1;
      } while (1 < lVar7);
    }
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    lVar7 = local_38[0x12];
  }
  else {
    lVar7 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0x90);
    param_1 = local_38;
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150eff0();
  if (local_78 == (longlong *)0x0) {
    bVar16 = false;
  }
  else {
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar6 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
      lVar9 = local_38[0x12];
    }
    else {
      lVar9 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0x90);
      param_1 = local_38;
    }
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eff0();
    bVar16 = *(int *)((longlong)local_50 + 0xc) != 0;
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (bVar16) {
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
      lVar7 = local_38[0x12];
    }
    else {
      lVar7 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0x90);
      param_1 = local_38;
    }
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eff0();
    uVar14 = *(uint *)((longlong)local_78 + 0xc);
    if (local_70[0] != '\0') {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (0 < (int)uVar14) {
      lVar7 = (ulonglong)uVar14 + 1;
      do {
        uVar14 = uVar14 - 1;
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        if ((pvVar6 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          lVar9 = local_38[0x12];
        }
        else {
          lVar9 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0x90);
          param_1 = local_38;
        }
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        if ((pvVar6 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
          lVar10 = local_38[0x12];
        }
        else {
          lVar10 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4] + 0x90);
          param_1 = local_38;
        }
        pVar12 = (pthread_key_t)param_1;
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar12);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150eff0();
        param_1 = (longlong *)(ulonglong)uVar14;
        lVar1 = *(longlong *)(local_78[2] + (longlong)param_1 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_0150f380();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + -1;
      } while (1 < lVar7);
    }
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  plVar5 = local_38;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar5 = local_38, lVar7 != 0)) {
    param_1 = local_38;
    plVar5 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  plVar2 = local_78;
  if (local_70[0] == '\0') {
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_0015c5c8;
    }
    if (plVar5[0x14] != 0) {
      plVar5[0x14] = 0;
      goto LAB_0015c609;
    }
  }
  else {
    local_70[0] = '\0';
LAB_0015c5c8:
    plVar15 = (longlong *)plVar5[0x14];
    if (plVar15 != plVar2) {
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      plVar5[0x14] = (longlong)plVar2;
      if (plVar15 != (longlong *)0x0) {
LAB_0015c609:
        FUN_00d50b20();
      }
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    param_1 = local_38;
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb480();
  if (local_80 == '\0') {
    if (local_88 == 0) goto LAB_0015c794;
    FUN_00d50b00();
  }
  else {
    local_80 = '\0';
    if (local_88 == 0) goto LAB_0015c794;
  }
  local_70[0] = '\0';
  local_78 = (longlong *)0x0;
  local_5c = 0;
  for (lVar7 = 0; local_60 = (undefined4)lVar7, lVar7 < *(int *)(local_88 + 0xc); lVar7 = lVar7 + 1)
  {
    local_78 = *(longlong **)(*(longlong *)(local_88 + 0x10) + lVar7 * 8);
    local_48 = '\0';
    local_50 = local_78;
    FUN_00155200();
  }
  FUN_00115e00();
  FUN_00d50b20();
LAB_0015c794:
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    lVar7 = local_38[0x11];
  }
  else {
    lVar7 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0x88);
    param_1 = local_38;
  }
  pVar12 = (pthread_key_t)param_1;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(pVar12);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar13 = &local_78;
  FUN_012e78c0();
  plVar5 = local_78;
  if ((DAT_0270c820 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027e77e8 = FUN_0015ef90();
    _DAT_027e77d0 = "MULSSGenerator";
    _DAT_027e77d8 = 0x70;
    pVar12 = 0x15ef30;
    _DAT_027e77e0 = FUN_0015ef30;
    _DAT_027e77f0 = 0;
    uRam00000000027e77f8 = 0;
    _DAT_027e7800 = 0;
    uRam00000000027e7808 = 0;
    _DAT_027e7810 = 0;
    uRam00000000027e7818 = 0;
    _DAT_027e7820 = 0;
    uRam00000000027e7828 = 0;
    _DAT_027e7830 = 0;
    uRam00000000027e7838 = 0;
    _DAT_027e7840 = 0;
    uRam00000000027e7848 = 0;
    _DAT_027e7850 = 0;
    uRam00000000027e7858 = 0;
    _DAT_027e7860 = 0;
    uRam00000000027e7868 = 0;
    _DAT_027e7870 = 0;
    uRam00000000027e7878 = 0;
    _DAT_027e7880 = 0;
    uRam00000000027e7888 = 0;
    _DAT_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (longlong *)0x0) {
    pplVar13 = &DAT_02802688;
    plVar5 = DAT_02802688;
    cVar3 = DAT_02802690;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
      pplVar13 = &DAT_02802688;
    }
    plVar5 = *pplVar13;
    cVar3 = *(char *)(pplVar13 + 1);
  }
  if (cVar3 == '\0') {
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar13 + 1) = 0;
  }
  if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
    *unaff_RDI = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    pvVar6 = _pthread_getspecific(pVar12);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6cb0();
    plVar5 = local_78;
    if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 == (longlong *)0x0) {
      pvVar6 = _pthread_getspecific(pVar12);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar11 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &DAT_02607248;
      puVar11[7] = 0;
      puVar11[8] = 0;
      puVar11[9] = 0;
      puVar11[10] = 0;
      puVar11[0xb] = 0;
      puVar11[0xc] = 0;
      puVar11[0xd] = 0;
      puVar11[0xe] = 0;
      *(undefined8 *)((longlong)puVar11 + 0x76) = 0;
      puVar11[0x10] = 0;
      puVar11[0x11] = 0;
      puVar11[0x12] = 0;
      puVar11[0x13] = 0;
      puVar11[0x14] = 0;
      puVar11[0x15] = 0;
      puVar11[0x16] = 0;
      puVar11[0x17] = 0;
      puVar11[0x18] = 0;
      puVar11[0x19] = 0;
      puVar11[0x1a] = 0;
      (*DAT_02607260)();
      FUN_012c64a0();
      if (puVar11 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    *unaff_RDI = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  return unaff_RDI;
}


