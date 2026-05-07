// Function: FUN_00153530
// Address: 00153530
// Size: 3837 bytes
// Class: MUPercussivePitchSystem
// String references:
//   "%p::_pitchSystem"
//   "MU12TETPitchSystem"
//   "MUPercussivePitchSystem"
//   "MUScalePitchSystem"


/* WARNING: Removing unreachable block (ram,0x00153638) */
/* WARNING: Removing unreachable block (ram,0x00153644) */
/* WARNING: Removing unreachable block (ram,0x001536fc) */
/* WARNING: Removing unreachable block (ram,0x00153708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00153530(code *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  pthread_key_t pVar7;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  code *pcVar8;
  code *pcVar9;
  code **ppcVar10;
  code **ppcVar11;
  undefined4 uVar12;
  longlong local_148;
  char local_140;
  code *local_108;
  char local_100;
  code *local_f8;
  char local_f0;
  code *local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  code *local_c8;
  char local_c0;
  code *local_b8;
  char local_b0;
  code *local_a8;
  char local_a0;
  code *local_98;
  code *local_90;
  code *local_88;
  code *local_80;
  byte local_78;
  undefined1 *local_70;
  code *local_68;
  ulonglong local_60;
  code *local_58;
  uint local_50;
  
  lVar5 = *(longlong *)(unaff_RDI + 0x88);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  FUN_004f9670();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004fae50();
  pcVar8 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (code *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
  }
  if ((local_78 != '\0') && (local_80 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  local_98 = pcVar8;
  FUN_01f27fe0();
  cVar1 = FUN_000c7760();
  if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    FUN_00d9bb60();
    pcVar9 = local_58;
    if (((char)local_50 == '\0') && (local_58 != (code *)0x0)) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar12 = FUN_004405c0();
    local_108 = pcVar9;
    local_100 = '\0';
    FUN_004b8670(uVar12,&local_108);
    if ((local_100 != '\0') && (local_108 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
      FUN_00d50b20();
    }
    uVar12 = FUN_004405f0();
    local_f8 = pcVar8;
    local_f0 = '\0';
    local_e8 = pcVar9;
    local_e0 = '\0';
    FUN_004b8670(uVar12,&local_e8);
    if ((local_e0 != '\0') && (local_e8 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(unaff_RDI + 0x88);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    local_d8 = lVar5;
    FUN_004f9670();
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_c8 = pcVar9;
    local_c0 = '\0';
    FUN_004fae00();
    if ((local_c0 != '\0') && (local_c8 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if (pcVar9 != (code *)0x0) {
      FUN_00d50b20();
    }
  }
  local_50 = 1;
  local_58 = (code *)&DAT_024c5048;
  uVar12 = FUN_00d50b00();
  ppcVar11 = &local_80;
  FUN_00d8cb40(uVar12,&local_58);
  local_88 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (code *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (code *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  local_58 = (code *)&DAT_024c5048;
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  uVar12 = (**(code **)(*(longlong *)*unaff_RSI + 0x5e0))();
  local_b8 = local_88;
  local_b0 = '\0';
  ppcVar10 = &local_58;
  FUN_000175c0(uVar12,&local_b8);
  pcVar8 = local_58;
  FUN_0015ea50();
  if (pcVar8 == (code *)0x0) {
LAB_0015395b:
    ppcVar10 = (code **)&DAT_02802688;
  }
  else {
    (**(code **)(*(longlong *)pcVar8 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0015395b;
  }
  pcVar8 = *ppcVar10;
  if (*(char *)(ppcVar10 + 1) == '\0') {
    if (pcVar8 != (code *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(ppcVar10 + 1) = 0;
  }
  local_78 = 1;
  local_80 = pcVar8;
  if (((char)local_50 != '\0') && (local_78 = 1, local_58 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((pcVar8 != (code *)0x0) && (*(longlong *)(unaff_RDI + 0x90) != 0)) {
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
    (**(code **)(*(longlong *)pcVar8 + 0x360))();
    cVar1 = FUN_00e85ea0();
    pcVar8 = local_80;
    pVar7 = (pthread_key_t)param_1;
    if (cVar1 == '\0') {
      ppcVar11 = (code **)&DAT_02802688;
    }
    cVar1 = *(char *)(ppcVar11 + 1);
    if ((cVar1 == '\0') || (*ppcVar11 == (code *)0x0)) {
      if (*ppcVar11 != (code *)0x0) goto LAB_00153abe;
      if ((DAT_027c0150 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        _DAT_0270acc8 = FUN_0015ea50();
        _DAT_0270acb0 = "MUPercussivePitchSystem";
        _DAT_0270acb8 = 0x58;
        pVar7 = 0x15eca0;
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
      if (pcVar8 == (code *)0x0) {
LAB_00153be1:
        ppcVar11 = (code **)&DAT_02802688;
      }
      else {
        (**(code **)(*(longlong *)pcVar8 + 0x360))();
        cVar1 = FUN_00e85ea0();
        if (cVar1 == '\0') goto LAB_00153be1;
        ppcVar11 = &local_80;
      }
      pcVar9 = local_80;
      pcVar8 = *ppcVar11;
      local_90 = (code *)CONCAT71(local_90._1_7_,*(char *)(ppcVar11 + 1));
      if ((*(char *)(ppcVar11 + 1) == '\0') || (pcVar8 == (code *)0x0)) {
        if (pcVar8 != (code *)0x0) goto LAB_00154001;
        if ((DAT_027c0160 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
        if (pcVar9 == (code *)0x0) {
LAB_001541e1:
          ppcVar11 = (code **)&DAT_02802688;
        }
        else {
          local_60 = 0;
          (**(code **)(*(longlong *)pcVar9 + 0x360))();
          local_60 = 0;
          cVar1 = FUN_00e85ea0();
          if (cVar1 == '\0') goto LAB_001541e1;
          ppcVar11 = &local_80;
        }
        param_1 = local_80;
        if (*ppcVar11 == (code *)0x0) goto LAB_00153f89;
        uVar6 = CONCAT71((int7)((ulonglong)ppcVar11 >> 8),local_78);
        if (local_80 == (code *)0x0) goto LAB_00153f8c;
        local_70 = (undefined1 *)uVar6;
        if (local_78 != 0) {
          local_60 = 0;
          FUN_00d50b00();
        }
        iVar2 = 0;
        pcVar9 = param_1;
      }
      else {
        FUN_00d50b00();
LAB_00154001:
        uVar4 = FUN_0173c6e0();
        pcVar9 = local_58;
        if (local_58 == (code *)0x0) {
          local_60 = 0;
          pcVar9 = (code *)0x0;
        }
        else {
          if ((char)local_50 == '\0') {
            uVar4 = FUN_00d50b00();
            if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
              local_60 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
              FUN_00d50b20();
              goto LAB_0015404e;
            }
          }
          local_60 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
        }
LAB_0015404e:
        pvVar3 = _pthread_getspecific(pVar7);
        param_1 = pcVar9;
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          param_1 = *(code **)(pcVar9 + ((ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4) * 8);
        }
        pvVar3 = _pthread_getspecific(pVar7);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          pcVar8 = *(code **)(pcVar8 + ((ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4) * 8);
        }
        (**(code **)(*(longlong *)pcVar8 + 0x3f0))();
        param_1 = *(code **)param_1;
        (**(code **)(param_1 + 0x3f8))();
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar2 = FUN_017702f0();
        if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)local_90 == '\0') {
          local_70 = (undefined1 *)local_60;
        }
        else {
          FUN_00d50b20();
          local_70 = (undefined1 *)local_60;
        }
      }
    }
    else {
      FUN_00d50b00();
LAB_00153abe:
      local_60 = CONCAT71(local_60._1_7_,cVar1);
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014fdd70();
      pcVar9 = local_58;
      if (local_58 == (code *)0x0) {
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014fdd00();
        pcVar8 = local_58;
        if ((char)local_50 == '\0') {
          if (local_58 == (code *)0x0) goto LAB_00153c6e;
          FUN_00d50b00();
          if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_58 == (code *)0x0) {
LAB_00153c6e:
          pcVar9 = (code *)0x0;
          local_70 = (undefined1 *)0x0;
          iVar2 = 0;
          goto LAB_00153d27;
        }
        local_90 = pcVar8;
        uVar4 = FUN_0173c6e0();
        pcVar9 = local_58;
        if (local_58 == (code *)0x0) {
          local_70 = (undefined1 *)0x0;
          pcVar9 = (code *)0x0;
        }
        else {
          local_70 = (undefined1 *)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
          if ((char)local_50 == '\0') {
            FUN_00d50b00();
            if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar2 = FUN_017702f0();
        if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      else {
        if ((char)local_50 == '\0') {
          FUN_00d50b00();
          if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_70 = &DAT_02802501;
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar2 = 0;
        local_70 = (undefined1 *)0x1;
        FUN_0174bd90();
      }
LAB_00153d27:
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      pcVar8 = pcVar9;
      if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pcVar8 = *(code **)(pcVar9 + ((ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4) * 8);
      }
      (**(code **)(*(longlong *)pcVar8 + 0x3f8))();
      if ((char)local_60 != '\0') {
        FUN_00d50b20();
      }
    }
    if (pcVar9 == (code *)0x0) {
      uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      local_60 = CONCAT44(local_60._4_4_,(int)uVar4);
    }
    else {
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a0 = '\0';
      local_a8 = pcVar9;
      FUN_0150bf50();
      if ((local_a0 != '\0') && (local_a8 != (code *)0x0)) {
        FUN_00d50b20();
      }
      uVar4 = 0;
      local_60 = local_60 & 0xffffffff00000000;
    }
    if (iVar2 != 0) {
      pvVar3 = _pthread_getspecific((pthread_key_t)uVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150c530();
      pcVar8 = local_58;
      if ((char)local_50 == '\0') {
        if (local_58 != (code *)0x0) {
          FUN_00d50b00();
          if (((char)local_50 != '\0') && (local_58 != (code *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00153e95;
        }
      }
      else if (local_58 != (code *)0x0) {
LAB_00153e95:
        local_50 = local_50 & 0xffffff00;
        local_58 = (code *)0x0;
        local_68 = pcVar9;
        for (lVar5 = 0; (int)lVar5 < *(int *)(pcVar8 + 0xc); lVar5 = lVar5 + 1) {
          local_58 = *(code **)(*(longlong *)(pcVar8 + 0x10) + lVar5 * 8);
          pvVar3 = _pthread_getspecific((pthread_key_t)uVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar3 = _pthread_getspecific((pthread_key_t)uVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01507f00();
          FUN_01508220();
        }
        FUN_0015ed50();
        FUN_00d50b20();
      }
    }
    if ((char)local_70 != '\0' && (char)local_60 == '\0') {
      FUN_00d50b20();
    }
  }
LAB_00153f89:
  uVar6 = (ulonglong)local_78;
LAB_00153f8c:
  pcVar9 = local_88;
  pcVar8 = local_98;
  if (((char)uVar6 != '\0') && (local_80 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (pcVar9 != (code *)0x0) {
    FUN_00d50b20();
  }
  if (pcVar8 != (code *)0x0) {
    FUN_00d50b20();
  }
  return;
}


