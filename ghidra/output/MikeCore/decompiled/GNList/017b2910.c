// Function: FUN_017b2910
// Address: 017b2910
// Size: 1096 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x017b2d29) */
/* WARNING: Removing unreachable block (ram,0x017b2d35) */
/* WARNING: Removing unreachable block (ram,0x017b2968) */
/* WARNING: Removing unreachable block (ram,0x017b2971) */

void FUN_017b2910(pthread_key_t param_1,undefined1 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  longlong *local_48;
  char local_40;
  undefined8 *local_38;
  
  (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
  if (local_40 == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_017b2c43;
    FUN_00d50b00();
  }
  else if (local_48 == (longlong *)0x0) goto LAB_017b2c43;
  FUN_017aae40();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_48 + 0x50))();
  uVar7 = extraout_XMM0_Da;
  if (local_48 != (longlong *)0x0) {
    uVar7 = FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_017ab350(uVar7,param_2);
    FUN_00d50b20();
    return;
  }
  FUN_017a9f30();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_48 + 0x50))();
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_026034e8;
    puVar3[0xc] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x55) = 0;
    FUN_00d500e0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017b31f0();
    *unaff_RDI = puVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    return;
  }
  FUN_017aa1e0();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_48 + 0x50))();
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    FUN_00d50b20();
LAB_017b2c43:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025f02c0;
  pVar6 = 0x25f0658;
  puVar3[2] = &DAT_025f0658;
  puVar3[3] = 0;
  *(undefined2 *)(puVar3 + 4) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  (*DAT_025f02d8)();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_026034e8;
  puVar3[0xc] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x55) = 0;
  FUN_00d500e0();
  pvVar4 = _pthread_getspecific(pVar6);
  local_38 = puVar3;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    local_38 = (undefined8 *)puVar3[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  FUN_015abbd0();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_017b2caa;
    }
    if (local_38[7] == 0) goto LAB_017b2cfe;
    local_38[7] = 0;
LAB_017b2ce9:
    FUN_00d50b20();
  }
  else {
    local_40 = '\0';
LAB_017b2caa:
    plVar1 = (longlong *)local_38[7];
    if (plVar1 != local_48) {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_38[7] = local_48;
      if (plVar1 != (longlong *)0x0) goto LAB_017b2ce9;
    }
  }
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_017b2cfe:
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}


