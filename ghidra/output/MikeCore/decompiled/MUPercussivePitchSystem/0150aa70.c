// Function: FUN_0150aa70
// Address: 0150aa70
// Size: 3731 bytes
// Class: MUPercussivePitchSystem
// String references:
//   "%p::_pitchSystem"
//   "MU12TETPitchSystem"
//   "MUPercussivePitchSystem"
//   "MUScalePitchSystem"
//   "%p::_chordSequence"


/* WARNING: Removing unreachable block (ram,0x0150aab0) */
/* WARNING: Removing unreachable block (ram,0x0150aabc) */
/* WARNING: Removing unreachable block (ram,0x0150ac35) */
/* WARNING: Removing unreachable block (ram,0x0150ac41) */
/* WARNING: Removing unreachable block (ram,0x0150b0e0) */
/* WARNING: Removing unreachable block (ram,0x0150b0ba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0150aa70(code *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 uVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  code *pcVar10;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  code **ppcVar11;
  code **ppcVar12;
  byte bVar13;
  undefined4 uVar14;
  code *local_e8;
  code *local_b8;
  char local_b0;
  undefined4 local_a4;
  longlong local_a0;
  char local_98;
  code *local_90;
  code *local_88;
  code *local_78;
  uint local_70;
  int local_60;
  code *local_50;
  byte local_48;
  code *local_40;
  code *local_38;
  
  FUN_00d50f50();
  if (*(longlong *)(unaff_RDI + 0x58) == 0) {
    return;
  }
  local_70 = 1;
  local_78 = (code *)&DAT_024c5048;
  uVar14 = FUN_00d50b00();
  ppcVar12 = &local_50;
  FUN_00d8cb40(uVar14,&local_78);
  pcVar10 = local_50;
  if (local_48 == '\0') {
    if (((local_50 != (code *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
       (local_50 != (code *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = (code *)&DAT_024c5048;
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  local_90 = pcVar10;
  (**(code **)(*(longlong *)*unaff_RSI + 0x5e0))();
  ppcVar11 = &local_78;
  FUN_000175c0();
  pcVar10 = local_78;
  FUN_0015ea50();
  if (pcVar10 == (code *)0x0) {
LAB_0150abaa:
    ppcVar11 = &DAT_02802688;
  }
  else {
    (**(code **)(*(longlong *)pcVar10 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0150abaa;
  }
  pcVar10 = *ppcVar11;
  if (*(char *)(ppcVar11 + 1) == '\0') {
    if (pcVar10 != (code *)0x0) {
      FUN_00d50b00();
    }
    local_50 = pcVar10;
    local_48 = 1;
  }
  else {
    local_50 = pcVar10;
    local_48 = 1;
    *(undefined1 *)(ppcVar11 + 1) = 0;
  }
  if (((char)local_70 != '\0') && (local_78 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((DAT_0278c570 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_027c3448 = FUN_0015ea50();
    _DAT_027c3430 = "MU12TETPitchSystem";
    _DAT_027c3438 = 0x68;
    param_1 = FUN_0015ec50;
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
  if (pcVar10 == (code *)0x0) {
LAB_0150ac93:
    ppcVar12 = &DAT_02802688;
  }
  else {
    (**(code **)(*(longlong *)pcVar10 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0150ac93;
  }
  pcVar10 = local_50;
  pVar8 = (pthread_key_t)param_1;
  cVar1 = *(char *)(ppcVar12 + 1);
  if ((cVar1 == '\0') || (*ppcVar12 == (code *)0x0)) {
    if (*ppcVar12 != (code *)0x0) goto LAB_0150acbd;
    if ((DAT_027c0150 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_0270acc8 = FUN_0015ea50();
      _DAT_0270acb0 = "MUPercussivePitchSystem";
      _DAT_0270acb8 = 0x58;
      param_1 = FUN_0015eca0;
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
    if (pcVar10 == (code *)0x0) {
LAB_0150addd:
      pcVar10 = DAT_02802688;
      bVar13 = DAT_02802690;
      if (DAT_02802690 == 0) goto LAB_0150b4e8;
LAB_0150b4d9:
      if (pcVar10 == (code *)0x0) goto LAB_0150b4e8;
      FUN_00d50b00();
LAB_0150b4f1:
      uVar7 = FUN_0173c6e0();
      if (local_78 == (code *)0x0) {
        local_38 = (code *)0x0;
        local_40 = (code *)0x0;
      }
      else {
        local_38 = local_78;
        if ((char)local_70 == '\0') {
          uVar7 = FUN_00d50b00();
          if (((char)local_70 != '\0') && (local_78 != (code *)0x0)) {
            local_40 = (code *)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
            FUN_00d50b20();
            goto LAB_0150b545;
          }
        }
        local_40 = (code *)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      }
LAB_0150b545:
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      pcVar5 = local_38;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), pcVar5 = local_38, lVar4 != 0)) {
        param_1 = local_38;
        pcVar5 = *(code **)(local_38 + ((ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4) * 8);
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        pcVar10 = *(code **)(pcVar10 + ((ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4) * 8);
      }
      (**(code **)(*(longlong *)pcVar10 + 0x3f0))();
      param_1 = *(code **)pcVar5;
      (**(code **)(param_1 + 0x3f8))();
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = local_38;
      }
      FUN_0173b790();
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar2 = FUN_017702f0();
      if (((char)local_70 != '\0') && (local_78 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar13 == 0) {
        cVar1 = (char)local_40;
      }
      else {
        FUN_00d50b20();
        cVar1 = (char)local_40;
      }
      goto LAB_0150af82;
    }
    (**(code **)(*(longlong *)pcVar10 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0150addd;
    pcVar10 = local_50;
    bVar13 = local_48;
    if (local_48 != 0) goto LAB_0150b4d9;
LAB_0150b4e8:
    pcVar5 = local_50;
    if (pcVar10 != (code *)0x0) goto LAB_0150b4f1;
    if ((DAT_027c0160 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_0270ab28 = FUN_0015ea50();
      _DAT_0270ab10 = "MUScalePitchSystem";
      _DAT_0270ab18 = 0x78;
      param_1 = FUN_0015ecf0;
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
    if (pcVar5 == (code *)0x0) {
LAB_0150b6ca:
      ppcVar12 = &DAT_02802688;
    }
    else {
      local_40 = (code *)0x0;
      local_38 = (code *)0x0;
      (**(code **)(*(longlong *)pcVar5 + 0x360))();
      local_40 = (code *)0x0;
      param_1 = (code *)0x0;
      local_38 = (code *)0x0;
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') goto LAB_0150b6ca;
      ppcVar12 = &local_50;
    }
    if (*ppcVar12 != (code *)0x0) {
      pcVar10 = local_50;
      pcVar5 = (code *)CONCAT71((int7)((ulonglong)ppcVar12 >> 8),local_48);
      if (local_50 == (code *)0x0) goto LAB_0150b126;
      local_88 = pcVar5;
      if (local_48 != 0) {
        local_40 = (code *)0x0;
        local_38 = (code *)0x0;
        FUN_00d50b00();
      }
      iVar2 = 0;
      cVar1 = (char)local_88;
      local_38 = pcVar10;
      goto LAB_0150af82;
    }
  }
  else {
    FUN_00d50b00();
LAB_0150acbd:
    local_88 = (code *)CONCAT71(local_88._1_7_,cVar1);
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014fdd70();
    local_38 = local_78;
    param_1 = local_78;
    if (local_78 == (code *)0x0) {
      pvVar3 = _pthread_getspecific(0);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014fdd00();
      pcVar10 = local_78;
      if ((char)local_70 == '\0') {
        if (local_78 == (code *)0x0) goto LAB_0150ae7f;
        FUN_00d50b00();
        if (((char)local_70 != '\0') && (local_78 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_78 == (code *)0x0) {
LAB_0150ae7f:
        cVar1 = '\0';
        local_38 = (code *)0x0;
        iVar2 = 0;
        goto LAB_0150af32;
      }
      local_40 = pcVar10;
      FUN_0173c6e0();
      local_38 = local_78;
      param_1 = local_78;
      if (local_78 == (code *)0x0) {
        local_38 = (code *)0x0;
        cVar1 = '\0';
      }
      else {
        cVar1 = '\x01';
        if ((char)local_70 == '\0') {
          FUN_00d50b00();
          if (((char)local_70 != '\0') && (local_78 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = local_38;
      }
      FUN_0173b790();
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar2 = FUN_017702f0();
      if (((char)local_70 != '\0') && (local_78 != (code *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      if ((char)local_70 == '\0') {
        FUN_00d50b00();
        if (((char)local_70 != '\0') && (local_78 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = local_38;
      }
      iVar2 = 0;
      cVar1 = '\x01';
      FUN_0174bd90();
    }
LAB_0150af32:
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    pcVar10 = local_38;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), pcVar10 = local_38, lVar4 != 0)) {
      param_1 = local_38;
      pcVar10 = *(code **)(local_38 + ((ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4) * 8);
    }
    (**(code **)(*(longlong *)pcVar10 + 0x3f8))();
    if ((char)local_88 != '\0') {
      FUN_00d50b20();
    }
LAB_0150af82:
    if (local_38 != (code *)0x0) {
      FUN_0150bf50();
    }
    if (iVar2 != 0) {
      FUN_0150c530();
      pcVar10 = local_78;
      if ((char)local_70 == '\0') {
        if (local_78 != (code *)0x0) {
          FUN_00d50b00();
          goto LAB_0150afe4;
        }
      }
      else if (local_78 != (code *)0x0) {
LAB_0150afe4:
        local_70 = local_70 & 0xffffff00;
        local_78 = (code *)0x0;
        local_88 = pcVar10;
        local_60 = -1;
        while( true ) {
          lVar4 = (longlong)local_60;
          local_60 = local_60 + 1;
          if (*(int *)(pcVar10 + 0xc) <= local_60) break;
          lVar9 = *(longlong *)(pcVar10 + 0x10);
          local_78 = *(code **)(lVar9 + 8 + lVar4 * 8);
          pvVar3 = _pthread_getspecific((pthread_key_t)lVar9);
          pVar8 = (pthread_key_t)lVar9;
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar3 = _pthread_getspecific(pVar8);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01507f00();
          FUN_01508220();
        }
        FUN_0015ed50();
        FUN_00d50b20();
        param_1 = pcVar10;
      }
    }
    if ((cVar1 != '\0') && (local_38 != (code *)0x0)) {
      FUN_00d50b20();
    }
  }
  pcVar5 = (code *)(ulonglong)local_48;
LAB_0150b126:
  pcVar10 = local_90;
  if (((char)pcVar5 != '\0') && (local_50 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (pcVar10 != (code *)0x0) {
    FUN_00d50b20();
  }
  lVar4 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar4 != 0) {
    local_70 = 1;
    local_78 = (code *)&DAT_024c5048;
    uVar14 = FUN_00d50b00();
    FUN_00d8cb40(uVar14,&local_78);
    pcVar10 = local_50;
    if (local_48 == 0) {
      if (((local_50 != (code *)0x0) && (FUN_00d50b00(), local_48 != 0)) &&
         (local_50 != (code *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = 0;
    }
    local_78 = (code *)&DAT_024c5048;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    uVar14 = (**(code **)(*(longlong *)*unaff_RSI + 0x5e0))();
    local_b8 = pcVar10;
    local_b0 = '\0';
    FUN_000175c0(uVar14,&local_b8);
    pcVar5 = local_78;
    if ((char)local_70 == '\0') {
      if (local_78 != (code *)0x0) {
        FUN_00d50b00();
        if (((char)local_70 != '\0') && (local_78 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_70 = local_70 & 0xffffff00;
    }
    if ((local_b0 != '\0') && (local_b8 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != 0) && (local_50 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if (pcVar5 != (code *)0x0) {
      local_38 = pcVar10;
      FUN_00d50b00();
      plVar6 = (longlong *)FUN_00e8fc40();
      FUN_0111d0d0();
      (**(code **)(*plVar6 + 0x18))();
      FUN_0150c7f0();
      FUN_00d50b20();
      local_48 = 0;
      local_50 = (code *)0x0;
      local_a4 = 0xffffffff;
      while( true ) {
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar7 = FUN_00e7bdb0();
        param_1 = (code *)FUN_00e7bdb0();
        cVar1 = FUN_01252960(param_1,uVar7,&local_50,&local_a0);
        pcVar10 = local_38;
        if (cVar1 == '\0') break;
        if (local_50 != (code *)0x0) {
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_78 = local_50;
          local_70 = local_70 & 0xffffff00;
          param_1 = local_e8;
          FUN_012502a0(local_e8,local_a0,0);
          if (((char)local_70 != '\0') && (local_78 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018847e0();
      if ((local_48 != 0) && (local_50 != (code *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d50b20();
    }
    if (pcVar10 != (code *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


