// Function: FUN_0199ab50
// Address: 0199ab50
// Size: 1384 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x0199b02d) */
/* WARNING: Removing unreachable block (ram,0x0199b039) */

void FUN_0199ab50(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong *unaff_RDI;
  undefined4 uVar8;
  longlong local_c0;
  char local_b8;
  longlong local_90;
  char local_88;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)("/usr/lib/libobjc.A.dylib" + *unaff_RDI + 0x18))();
  if ((longlong *)unaff_RDI[0x69] == (longlong *)0x0) {
    return;
  }
  cVar2 = (**(code **)(*(longlong *)unaff_RDI[0x69] + 0x50))();
  if (cVar2 != '\0') {
    return;
  }
  if (*(char *)((longlong)unaff_RDI + 0x4dd) == '\0') {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01265ae0();
  lVar1 = unaff_RDI[0x70];
  lVar4 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar4 = 0;
        goto LAB_0199abfe;
      }
      FUN_00d50b00();
      lVar1 = unaff_RDI[0x70];
      unaff_RDI[0x70] = local_40;
      lVar4 = local_40;
    }
    else {
      local_38 = '\0';
      lVar4 = local_40;
LAB_0199abfe:
      unaff_RDI[0x70] = lVar4;
    }
    param_1 = (pthread_key_t)lVar1;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  local_48 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_48 = '\x01';
  local_50 = local_90;
  pVar7 = 0;
  (**(code **)((longlong)&linkedit_data_command_000013f8.dataoff + *unaff_RDI))(0,&local_50);
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_01264970();
  lVar1 = *(longlong *)(local_c0 + 0x28);
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        *(undefined8 *)(local_c0 + 0x28) = 0;
      }
      else {
        uVar8 = FUN_00d50b00();
        lVar1 = *(longlong *)(local_c0 + 0x28);
        *(longlong *)(local_c0 + 0x28) = local_40;
      }
    }
    else {
      local_38 = '\0';
      *(longlong *)(local_c0 + 0x28) = local_40;
    }
    if (lVar1 != 0) {
      uVar8 = FUN_00d50b20();
    }
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar1 = unaff_RDI[0x70];
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b00();
  }
  (**(code **)("/usr/lib/libobjc.A.dylib" + *unaff_RDI))(uVar8,0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = unaff_RDI[0x70];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_016779b0();
  lVar4 = unaff_RDI[0x71];
  lVar6 = lVar4;
  if (lVar4 == local_40) goto LAB_0199aec5;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar6 = 0;
      goto LAB_0199ae77;
    }
    FUN_00d50b00();
    lVar4 = unaff_RDI[0x71];
    unaff_RDI[0x71] = local_40;
    lVar6 = local_40;
  }
  else {
    local_38 = '\0';
    lVar6 = local_40;
LAB_0199ae77:
    unaff_RDI[0x71] = lVar6;
  }
  pVar7 = (pthread_key_t)lVar4;
  if (lVar4 != 0) {
    FUN_00d50b20();
    lVar6 = local_40;
  }
LAB_0199aec5:
  if ((local_38 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_01264170();
  FUN_01677b30(0,uVar8,DAT_0238fee8);
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar5 = (longlong *)FUN_00e8b990();
  lVar1 = unaff_RDI[0x70];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar5 + 0x3a0))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  FUN_00cb1fa0();
  plVar5 = (longlong *)unaff_RDI[0x69];
  lVar1 = unaff_RDI[0x70];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar5 + 0xf0))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


