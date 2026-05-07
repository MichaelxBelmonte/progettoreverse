// Function: FUN_006ee080
// Address: 006ee080
// Size: 4490 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x006ee358) */
/* WARNING: Removing unreachable block (ram,0x006ee364) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006ee080(pthread_key_t param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *unaff_RDI;
  longlong **pplVar8;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 local_138;
  undefined4 local_128;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  ulonglong local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar7 = *unaff_RDI;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar7 = *unaff_RDI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  FUN_002dcf70(*(undefined4 *)(lVar7 + 0x54));
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar7 = *unaff_RDI;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar7 = *unaff_RDI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  FUN_002dcf80(*(undefined4 *)(lVar7 + 0x50));
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar7 = *unaff_RDI;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar7 = *unaff_RDI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  FUN_002dcf90(*(undefined4 *)(lVar7 + 0x60));
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar7 = *unaff_RDI;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar7 = *unaff_RDI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  FUN_002dcfa0(*(undefined4 *)(lVar7 + 0x58));
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar7 = *unaff_RDI;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar7 = *unaff_RDI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  FUN_002dcfb0(*(undefined4 *)(lVar7 + 0x5c));
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_007dd2b0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_007dd280();
  plVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_007dd280();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    local_48 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != (longlong *)0x0) {
      pvVar5 = _pthread_getspecific(param_1);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = (pthread_key_t)local_48;
      }
      uVar9 = FUN_012c9740();
      local_100 = DAT_02727928;
      if (DAT_02727928 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_f8 = '\x01';
      pplVar8 = &local_40;
      FUN_000175c0(uVar9,&local_100);
      plVar1 = local_40;
      FUN_00053ac0();
      if (plVar1 == (longlong *)0x0) {
LAB_006ee52e:
        pplVar8 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_006ee52e;
      }
      plVar1 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar8 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_60 = plVar1;
      pvVar5 = _pthread_getspecific(param_1);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = (pthread_key_t)local_48;
      }
      uVar9 = FUN_012c9740();
      local_f0 = DAT_02727930;
      if (DAT_02727930 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_e8 = '\x01';
      pplVar8 = &local_40;
      FUN_000175c0(uVar9,&local_f0);
      plVar1 = local_40;
      FUN_00053ac0();
      if (plVar1 == (longlong *)0x0) {
LAB_006ee678:
        pplVar8 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_006ee678;
      }
      plVar1 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar8 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_68 = plVar1;
      pvVar5 = _pthread_getspecific(param_1);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = (pthread_key_t)local_48;
      }
      uVar9 = FUN_012c9740();
      local_e0 = DAT_02727938;
      if (DAT_02727938 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_d8 = '\x01';
      pplVar8 = &local_40;
      FUN_000175c0(uVar9,&local_e0);
      plVar1 = local_40;
      FUN_00053ac0();
      if (plVar1 == (longlong *)0x0) {
LAB_006ee78f:
        pplVar8 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_006ee78f;
      }
      plVar2 = local_60;
      plVar1 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar8 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (((plVar2 != (longlong *)0x0) && (local_68 != (longlong *)0x0)) &&
         (plVar1 != (longlong *)0x0)) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_70 = FUN_00d45bc0();
        param_2 = FUN_00d45bc0();
        FUN_002dcab0((int)local_70);
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d45ad0();
        FUN_002dcf40();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      plVar1 = local_60;
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  plVar1 = DAT_02727940;
  if (DAT_02727940 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar1;
  local_38 = '\0';
  cVar3 = FUN_00ca18c0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = DAT_02727940;
  uVar9 = (undefined4)DAT_023b19a0;
  local_48 = (longlong *)DAT_023b19a0;
  if (cVar3 != '\0') {
    if (DAT_02727940 != (longlong *)0x0) {
      uVar9 = FUN_00d50b00();
    }
    local_d0 = plVar1;
    local_c8 = '\x01';
    pplVar8 = &local_40;
    FUN_000175c0(uVar9,&local_d0);
    plVar1 = local_40;
    FUN_00053ac0();
    if (plVar1 == (longlong *)0x0) {
LAB_006ee9c5:
      pplVar8 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_006ee9c5;
    }
    plVar1 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar8 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      local_48 = (longlong *)FUN_00d45bc0();
      FUN_00d50b20();
    }
  }
  plVar1 = DAT_02727948;
  if (DAT_02727948 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar1;
  local_38 = '\0';
  cVar3 = FUN_00ca18c0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = DAT_02727948;
  uVar9 = 0;
  local_60 = (longlong *)0x0;
  if (cVar3 != '\0') {
    if (DAT_02727948 != (longlong *)0x0) {
      uVar9 = FUN_00d50b00();
    }
    local_c0 = plVar1;
    local_b8 = '\x01';
    pplVar8 = &local_40;
    FUN_000175c0(uVar9,&local_c0);
    plVar1 = local_40;
    FUN_00053ac0();
    if (plVar1 == (longlong *)0x0) {
LAB_006eeafa:
      pplVar8 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_006eeafa;
    }
    plVar1 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar8 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      local_60 = (longlong *)FUN_00d45bc0();
      FUN_00d50b20();
    }
  }
  plVar1 = DAT_02727950;
  if (DAT_02727950 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar1;
  local_38 = '\0';
  cVar3 = FUN_00ca18c0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = DAT_02727950;
  local_68 = (longlong *)CONCAT44(local_68._4_4_,DAT_02390d00);
  if (cVar3 != '\0') {
    uVar9 = DAT_02390d00;
    if (DAT_02727950 != (longlong *)0x0) {
      uVar9 = FUN_00d50b00();
    }
    local_b0 = plVar1;
    local_a8 = '\x01';
    pplVar8 = &local_40;
    FUN_000175c0(uVar9,&local_b0);
    plVar1 = local_40;
    FUN_00053ac0();
    if (plVar1 == (longlong *)0x0) {
LAB_006eec34:
      pplVar8 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_006eec34;
    }
    plVar1 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar8 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      uVar9 = FUN_00d459e0();
      local_68 = (longlong *)CONCAT44(local_68._4_4_,uVar9);
      FUN_00d50b20();
    }
  }
  plVar1 = DAT_02727958;
  if (DAT_02727958 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar1;
  local_38 = '\0';
  cVar3 = FUN_00ca18c0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = DAT_02727958;
  uVar9 = 0;
  local_70 = local_70 & 0xffffffff00000000;
  if (cVar3 != '\0') {
    if (DAT_02727958 != (longlong *)0x0) {
      uVar9 = FUN_00d50b00();
    }
    local_a0 = plVar1;
    local_98 = '\x01';
    pplVar8 = &local_40;
    FUN_000175c0(uVar9,&local_a0);
    plVar1 = local_40;
    FUN_00053ac0();
    if (plVar1 == (longlong *)0x0) {
LAB_006eed69:
      pplVar8 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_006eed69;
    }
    plVar1 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar8 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      uVar9 = FUN_00d459e0();
      local_70 = CONCAT44(local_70._4_4_,uVar9);
      FUN_00d50b20();
    }
  }
  plVar1 = DAT_02727960;
  local_138 = (undefined4)DAT_023dccec;
  local_128 = (undefined4)DAT_023dccf4;
  if (DAT_02727960 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar1;
  local_38 = '\0';
  cVar3 = FUN_00ca18c0();
  uVar9 = extraout_XMM0_Da;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    uVar9 = FUN_00d50b20();
  }
  plVar1 = DAT_02727960;
  if (cVar3 == '\0') goto LAB_006eef4c;
  if (DAT_02727960 != (longlong *)0x0) {
    uVar9 = FUN_00d50b00();
  }
  local_90 = plVar1;
  local_88 = '\x01';
  pplVar8 = &local_40;
  FUN_000175c0(uVar9,&local_90);
  plVar1 = local_40;
  if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    param_1 = 0x5d920;
    _DAT_026d5e50 = FUN_0005d920;
    _DAT_026d5e60 = 0;
    uRam00000000026d5e68 = 0;
    _DAT_026d5e70 = 0;
    uRam00000000026d5e78 = 0;
    _DAT_026d5e80 = 0;
    uRam00000000026d5e88 = 0;
    _DAT_026d5e90 = 0;
    uRam00000000026d5e98 = 0;
    _DAT_026d5ea0 = 0;
    uRam00000000026d5ea8 = 0;
    _DAT_026d5eb0 = 0;
    uRam00000000026d5eb8 = 0;
    _DAT_026d5ec0 = 0;
    uRam00000000026d5ec8 = 0;
    _DAT_026d5ed0 = 0;
    uRam00000000026d5ed8 = 0;
    _DAT_026d5ee0 = 0;
    uRam00000000026d5ee8 = 0;
    _DAT_026d5ef0 = 0;
    uRam00000000026d5ef8 = 0;
    _DAT_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_006eeebb:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_006eeebb;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    local_78 = '\0';
    local_80 = plVar1;
    local_138 = FUN_00d96410();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    local_128 = param_2;
  }
LAB_006eef4c:
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_002dca50();
  FUN_004406d0((int)local_48);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_002dca50();
  FUN_004406e0((int)local_60);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_002dca50();
  FUN_004406f0(local_68._0_4_);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_002dca50();
  FUN_00440700((undefined4)local_70);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_002dca50();
  FUN_00440710(local_138,local_128);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


