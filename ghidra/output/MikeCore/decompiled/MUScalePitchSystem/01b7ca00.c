// Function: FUN_01b7ca00
// Address: 01b7ca00
// Size: 1126 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01b7cb03) */
/* WARNING: Removing unreachable block (ram,0x01b7cb0c) */

ulonglong FUN_01b7ca00(pthread_key_t param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  pthread_key_t pVar9;
  undefined1 *puVar10;
  char *pcVar11;
  longlong *unaff_RDI;
  undefined8 extraout_XMM0_Qa;
  undefined1 local_78 [8];
  undefined8 local_70;
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar3 = (**(code **)(*unaff_RDI + 0x9a0))();
  if (cVar3 == '\0') {
    uVar8 = (**(code **)(*unaff_RDI + 0x370))();
    uVar4 = (**(code **)(*local_68 + 0x3b8))(uVar8,param_2);
    uVar6 = (ulonglong)uVar4;
    if (local_60[0] == '\0') {
      return uVar6;
    }
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b20();
      return uVar6;
    }
    return uVar6;
  }
  cVar3 = (**(code **)(*unaff_RDI + 0x9d0))();
  if (cVar3 == '\0') {
    return 0;
  }
  uVar6 = (**(code **)(*unaff_RDI + 0x9e0))();
  if (uVar6 >> 0x20 == 0) {
    return 0;
  }
  local_50 = '\0';
  local_58 = (longlong *)0x0;
  uVar6 = (**(code **)(*unaff_RDI + 0x9e0))();
  if (uVar6 >> 0x20 != 0) {
    lVar1 = unaff_RDI[0x2b];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = (**(code **)(*unaff_RDI + 0x9e0))();
    FUN_012521f0(uVar8,0,local_78,&local_70);
    pVar9 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar8 >> 8),local_60[0]);
    pcVar11 = local_40;
    if (local_60[0] != '\0') {
      pcVar11 = local_60;
    }
    local_40[0] = local_60[0];
    *pcVar11 = '\0';
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x2b];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar10 = local_78;
    FUN_012535e0(puVar10,&local_58,&local_70,0);
    pVar9 = (pthread_key_t)puVar10;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x2b];
    goto joined_r0x01b7cd68;
  }
  lVar1 = unaff_RDI[0x2b];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar1;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar10 = local_78;
  FUN_012527b0(puVar10,0,&local_70,0);
  pVar9 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar10 >> 8),local_60[0]);
  pcVar11 = local_38;
  if (local_60[0] != '\0') {
    pcVar11 = local_60;
  }
  local_38[0] = local_60[0];
  *pcVar11 = '\0';
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = local_50;
  plVar2 = local_58;
  if (local_58 == local_68) {
    if ((local_50 == '\0') && (local_68 != (longlong *)0x0)) {
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
      goto LAB_01b7cd49;
    }
    if ((local_38[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38[0] == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_58 = local_68;
      if ((cVar3 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = local_68;
      if ((local_50 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01b7cd49:
    local_50 = '\x01';
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  lVar1 = unaff_RDI[0x2b];
joined_r0x01b7cd68:
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_01253c10(local_78,&local_58,&local_70,0);
  uVar8 = extraout_XMM0_Qa;
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b20();
  }
  if ((char)uVar5 == '\0') {
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    return 0;
  }
  if (param_2 != '\0') {
    uVar8 = (**(code **)(*unaff_RDI + 0x9f0))(uVar8,local_70);
    FUN_01b7bf20(uVar8,local_70);
    FUN_01b754b0(DAT_023908d0);
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
}


