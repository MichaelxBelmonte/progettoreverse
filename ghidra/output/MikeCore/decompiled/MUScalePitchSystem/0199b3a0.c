// Function: FUN_0199b3a0
// Address: 0199b3a0
// Size: 1793 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x0199ba1a) */
/* WARNING: Removing unreachable block (ram,0x0199ba26) */

void FUN_0199b3a0(pthread_key_t param_1)

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
  undefined8 uVar9;
  longlong local_c8;
  char local_c0;
  longlong local_98;
  char local_90;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
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
  FUN_0142c150(DAT_0238fee8);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c160(0);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01265ae0();
  lVar1 = unaff_RDI[0x70];
  lVar4 = lVar1;
  if (lVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar4 = 0;
        goto LAB_0199b4d7;
      }
      FUN_00d50b00();
      lVar1 = unaff_RDI[0x70];
      unaff_RDI[0x70] = local_38;
      lVar4 = local_38;
    }
    else {
      local_30 = '\0';
      lVar4 = local_38;
LAB_0199b4d7:
      unaff_RDI[0x70] = lVar4;
    }
    param_1 = (pthread_key_t)lVar1;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264970();
  lVar1 = unaff_RDI[0x6f];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01539260();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264970();
  FUN_015392e0(unaff_RDI[0x74]);
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  local_40 = 0;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  local_40 = '\x01';
  local_48 = local_98;
  pVar7 = 0;
  (**(code **)((longlong)&linkedit_data_command_000013f8.dataoff + *unaff_RDI))(0,&local_48);
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar9 = FUN_01264970();
  lVar1 = *(longlong *)(local_c8 + 0x28);
  if (lVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(undefined8 *)(local_c8 + 0x28) = 0;
      }
      else {
        uVar9 = FUN_00d50b00();
        lVar1 = *(longlong *)(local_c8 + 0x28);
        *(longlong *)(local_c8 + 0x28) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(longlong *)(local_c8 + 0x28) = local_38;
    }
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar1 = unaff_RDI[0x70];
  if (lVar1 != 0) {
    uVar9 = FUN_00d50b00();
  }
  (**(code **)("/usr/lib/libobjc.A.dylib" + *unaff_RDI))(uVar9,0);
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
  if (lVar4 == local_38) goto LAB_0199b8a6;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar6 = 0;
      goto LAB_0199b85b;
    }
    FUN_00d50b00();
    lVar4 = unaff_RDI[0x71];
    unaff_RDI[0x71] = local_38;
    lVar6 = local_38;
  }
  else {
    local_30 = '\0';
    lVar6 = local_38;
LAB_0199b85b:
    unaff_RDI[0x71] = lVar6;
  }
  pVar7 = (pthread_key_t)lVar4;
  if (lVar4 != 0) {
    FUN_00d50b20();
    lVar6 = local_38;
  }
LAB_0199b8a6:
  if ((local_30 != '\0') && (lVar6 != 0)) {
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


