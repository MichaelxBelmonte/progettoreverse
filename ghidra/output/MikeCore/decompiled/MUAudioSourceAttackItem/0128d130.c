// Function: FUN_0128d130
// Address: 0128d130
// Size: 1166 bytes
// Class: MUAudioSourceAttackItem


/* WARNING: Removing unreachable block (ram,0x0128d16f) */
/* WARNING: Removing unreachable block (ram,0x0128d178) */
/* WARNING: Removing unreachable block (ram,0x0128d38c) */
/* WARNING: Removing unreachable block (ram,0x0128d5ae) */
/* WARNING: Removing unreachable block (ram,0x0128d396) */

undefined4 FUN_0128d130(pthread_key_t param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  bool bVar10;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  
  FUN_0125e7c0();
  if (local_58 == 0) {
    return 0;
  }
  if (local_50 == '\0') {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    param_1 = (pthread_key_t)local_58;
  }
  FUN_013dfdd0();
  plVar8 = local_68;
  if (local_58 == 0) {
    bVar2 = false;
    bVar9 = false;
    bVar1 = false;
    plVar8 = (longlong *)0x0;
    lVar5 = 0;
  }
  else {
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_50 = '\0';
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    if (local_68 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
      bVar1 = false;
LAB_0128d276:
      bVar9 = plVar8 != (longlong *)0x0;
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_60 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        goto LAB_0128d276;
      }
      bVar9 = true;
      bVar1 = true;
    }
    bVar2 = true;
    lVar5 = local_58;
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (bVar9) {
    pvVar4 = _pthread_getspecific(param_1);
    plVar7 = plVar8;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    uVar3 = (**(code **)(*plVar7 + 0x440))();
    goto joined_r0x0128d540;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    param_1 = (pthread_key_t)local_58;
  }
  FUN_013dfcb0();
  if (local_58 == lVar5) {
joined_r0x0128d4d7:
    if (lVar5 != 0) goto LAB_0128d3e0;
LAB_0128d4dd:
    bVar10 = false;
  }
  else {
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      if (local_58 != 0 && lVar5 != 0) {
        FUN_00d50b20();
        bVar2 = true;
        lVar5 = local_58;
        goto joined_r0x0128d4d7;
      }
    }
    else {
      if (local_58 != 0 && lVar5 != 0) {
        FUN_00d50b20();
      }
      local_50 = '\0';
    }
    bVar2 = true;
    lVar5 = local_58;
    if (local_58 == 0) goto LAB_0128d4dd;
LAB_0128d3e0:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    if (local_68 == plVar8) {
      bVar9 = bVar1;
      if ((!bVar1) && (local_68 != (longlong *)0x0)) {
        bVar9 = true;
        plVar7 = plVar8;
        if (local_60 != '\0') goto LAB_0128d4b8;
        FUN_00d50b00();
        bVar9 = true;
      }
LAB_0128d4a4:
      plVar7 = plVar8;
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar7 = local_68;
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar9 = true;
        if ((bVar1) && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar8 = local_68;
          goto LAB_0128d4a4;
        }
      }
      else {
        bVar9 = true;
        if ((bVar1) && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
LAB_0128d4b8:
    bVar10 = plVar7 != (longlong *)0x0;
    plVar8 = plVar7;
    bVar1 = bVar9;
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (bVar10) {
    pvVar4 = _pthread_getspecific(param_1);
    plVar7 = plVar8;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    uVar3 = (**(code **)(*plVar7 + 0x440))();
  }
  else {
    uVar3 = 0;
  }
joined_r0x0128d540:
  if ((bVar1) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return uVar3;
}


