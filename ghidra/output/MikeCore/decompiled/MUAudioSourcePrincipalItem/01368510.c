// Function: FUN_01368510
// Address: 01368510
// Size: 3566 bytes
// Class: MUAudioSourcePrincipalItem


/* WARNING: Removing unreachable block (ram,0x01368c8a) */
/* WARNING: Removing unreachable block (ram,0x01368c96) */
/* WARNING: Removing unreachable block (ram,0x01368918) */
/* WARNING: Removing unreachable block (ram,0x013690b5) */
/* WARNING: Removing unreachable block (ram,0x013690c1) */
/* WARNING: Removing unreachable block (ram,0x013689a9) */
/* WARNING: Removing unreachable block (ram,0x013689b2) */
/* WARNING: Removing unreachable block (ram,0x013689b7) */
/* WARNING: Removing unreachable block (ram,0x01369310) */
/* WARNING: Removing unreachable block (ram,0x01369320) */
/* WARNING: Removing unreachable block (ram,0x01369285) */
/* WARNING: Removing unreachable block (ram,0x01369291) */
/* WARNING: Removing unreachable block (ram,0x01368f44) */
/* WARNING: Removing unreachable block (ram,0x01368f50) */
/* WARNING: Removing unreachable block (ram,0x01368fbf) */
/* WARNING: Removing unreachable block (ram,0x01368fcc) */
/* WARNING: Removing unreachable block (ram,0x013691fe) */
/* WARNING: Removing unreachable block (ram,0x01369170) */
/* WARNING: Removing unreachable block (ram,0x01369132) */
/* WARNING: Removing unreachable block (ram,0x01369142) */
/* WARNING: Removing unreachable block (ram,0x01368a3d) */
/* WARNING: Removing unreachable block (ram,0x01368a46) */
/* WARNING: Removing unreachable block (ram,0x01368604) */
/* WARNING: Removing unreachable block (ram,0x0136860d) */
/* WARNING: Removing unreachable block (ram,0x0136903a) */
/* WARNING: Removing unreachable block (ram,0x01369043) */
/* WARNING: Removing unreachable block (ram,0x01368b68) */
/* WARNING: Removing unreachable block (ram,0x01369156) */
/* WARNING: Removing unreachable block (ram,0x01368b72) */
/* WARNING: Removing unreachable block (ram,0x013691e9) */
/* WARNING: Removing unreachable block (ram,0x013691ef) */
/* WARNING: Removing unreachable block (ram,0x01369207) */
/* WARNING: Removing unreachable block (ram,0x0136920c) */
/* WARNING: Removing unreachable block (ram,0x0136922e) */
/* WARNING: Removing unreachable block (ram,0x0136925a) */
/* WARNING: Removing unreachable block (ram,0x01369246) */
/* WARNING: Removing unreachable block (ram,0x0136925e) */
/* WARNING: Removing unreachable block (ram,0x013692b4) */
/* WARNING: Removing unreachable block (ram,0x013692df) */
/* WARNING: Removing unreachable block (ram,0x013692cb) */
/* WARNING: Removing unreachable block (ram,0x013692e3) */
/* WARNING: Removing unreachable block (ram,0x01368e05) */
/* WARNING: Removing unreachable block (ram,0x01368e0e) */
/* WARNING: Removing unreachable block (ram,0x0136917c) */
/* WARNING: Removing unreachable block (ram,0x01369184) */

void FUN_01368510(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar7;
  bool bVar8;
  longlong local_150;
  undefined1 local_148;
  longlong local_140;
  undefined1 local_138;
  longlong local_130;
  char local_128;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  
  lVar2 = local_68;
  if (*(longlong *)(unaff_RDI + 0x1f8) != 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x200) != 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x148) == 0) {
    return;
  }
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar4 = FUN_0141bab0();
  if (iVar4 != 1) {
    return;
  }
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  FUN_0133aef0();
  FUN_013699d0();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  if (0 < *(int *)(local_68 + 0xc)) {
    lVar7 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(local_68 + 0x10) + lVar7 * 8);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      FUN_013295b0();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(local_68 + 0xc));
  }
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    param_1 = local_68;
  }
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    param_1 = local_68;
  }
  FUN_014bc070();
  FUN_014bc030();
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    param_1 = local_68;
  }
  cVar3 = FUN_014bc070();
  if (cVar3 == '\0') {
    local_150 = *unaff_RSI;
    local_148 = 0;
    param_1 = 0;
    FUN_0135d2e0(0,&local_150);
    if (local_128 == '\0') {
      if (local_130 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_128 = '\0';
    }
    local_78 = *unaff_RSI;
    local_68 = local_130;
    local_70 = '\0';
    FUN_01346520();
    if (local_130 != 0) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      param_1 = lVar2;
    }
    if (unaff_RDI != 0) {
      FUN_00d50b00();
    }
    FUN_014e8b20();
    bVar8 = local_130 == 0;
    if (bVar8) {
      lVar7 = 0;
    }
    else {
      FUN_00d50b00();
      lVar7 = local_130;
    }
    local_60 = '\0';
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if (!bVar8) {
      local_138 = 0;
      local_140 = lVar7;
      FUN_013293f0();
    }
    if (!bVar8 && lVar7 != 0) {
      FUN_00d50b20();
    }
    goto LAB_01368bb7;
  }
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    param_1 = local_68;
  }
  FUN_014bc340();
  lVar7 = local_68;
  if (local_68 == 0) {
    bVar8 = false;
    lVar7 = 0;
LAB_0136893e:
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_60 == '\0') {
      FUN_00d50b00();
      bVar8 = true;
      goto LAB_0136893e;
    }
    bVar8 = true;
  }
  if (lVar7 == 0) {
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      param_1 = local_68;
    }
    FUN_014d19a0();
    if (local_68 == 0) {
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc420();
      pvVar5 = _pthread_getspecific(0);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014d1b50();
      param_1 = local_68;
      goto LAB_01368bb7;
    }
    if (local_60 == '\0') {
      FUN_00d50b00();
    }
    bVar8 = true;
    lVar7 = local_68;
  }
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    param_1 = local_68;
  }
  FUN_014bc340();
  if (local_68 == lVar7) {
    bVar1 = bVar8;
    if ((bVar8) || (local_68 == 0)) {
LAB_01368b8d:
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01368ba1;
    }
    if (local_60 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      goto LAB_01368b8d;
    }
    bVar1 = true;
  }
  else {
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      bVar1 = true;
      lVar7 = local_68;
      if (bVar8) {
        FUN_00d50b20();
      }
      goto LAB_01368b8d;
    }
    bVar1 = true;
    lVar7 = local_68;
    if (bVar8) {
      FUN_00d50b20();
    }
LAB_01368ba1:
    if (lVar7 == 0) {
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = local_68;
      }
      FUN_014d19a0();
      if (local_68 == 0) goto LAB_01368bb7;
      if (local_60 == '\0') {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = local_68;
      }
      FUN_014bc2e0();
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc360();
      bVar1 = true;
    }
  }
  if (bVar1) {
    FUN_00d50b20();
  }
LAB_01368bb7:
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013e0cc0();
  FUN_013359c0();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  FUN_013357a0();
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    if (0 < *(int *)(local_68 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef8d0();
        if ((local_70 == '\0') && (local_78 != 0)) {
          FUN_00d50b00();
        }
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126f610();
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a5f0();
        FUN_0039e8b0();
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        FUN_00e7bdb0();
        FUN_01287c80();
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(local_68 + 0xc));
    }
    FUN_0015edf0();
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


