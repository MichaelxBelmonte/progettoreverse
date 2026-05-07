// Function: FUN_01a55ef0
// Address: 01a55ef0
// Size: 1497 bytes
// Class: Unknown


ulonglong FUN_01a55ef0(undefined8 param_1,byte param_2)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  char *pcVar5;
  longlong **pplVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *unaff_RDI;
  longlong *plVar9;
  bool bVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38 [8];
  char local_30 [8];
  
  FUN_01a58e40();
  if (local_40 == (longlong *)0x0) {
    bVar10 = true;
  }
  else {
    FUN_01a58e40();
    bVar10 = *(int *)((longlong)local_50 + 0xc) == 0;
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar10) {
    uVar8 = 0;
    goto LAB_01a564b7;
  }
  FUN_01a58e40();
  local_70 = local_40;
  local_68 = 0;
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_68 = '\x01';
  uVar2 = (**(code **)(*unaff_RDI + 0x488))();
  uVar8 = (ulonglong)uVar2;
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((byte)uVar2 & param_2) == 0) goto LAB_01a564b7;
  local_60 = (longlong *)0x0;
  uVar11 = FUN_01caec40();
  local_a0 = DAT_027e1e88;
  if (DAT_027e1e88 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_98 = '\x01';
  FUN_000175c0(uVar11,&local_a0);
  plVar9 = local_40;
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 == (longlong *)0x0) {
    FUN_01a58dc0();
    (**(code **)(*local_50 + 0xd30))();
    plVar9 = local_40;
    if (local_40 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
      bVar10 = false;
    }
    else if (local_38[0] == '\0') {
      FUN_00d50b00();
      local_60 = plVar9;
      bVar10 = true;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = local_40;
      local_38[0] = '\0';
      bVar10 = true;
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01a58dc0();
    (**(code **)(*local_50 + 0xd38))();
    plVar9 = local_40;
    if (local_40 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
      bVar10 = false;
    }
    else if (local_38[0] == '\0') {
      FUN_00d50b00();
      local_60 = plVar9;
      bVar10 = true;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = local_40;
      local_38[0] = '\0';
      bVar10 = true;
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00083c20();
  if (plVar9 == (longlong *)0x0) {
LAB_01a5619e:
    if (DAT_02802688 != 0) goto LAB_01a561af;
LAB_01a562c9:
    FUN_01a58e40();
    FUN_00d23310();
    plVar7 = local_40;
    pVar4 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_38[0]);
    pplVar6 = &local_58;
    if (local_38[0] != '\0') {
      pplVar6 = (longlong **)local_38;
    }
    local_58 = (longlong *)CONCAT71(local_58._1_7_,local_38[0]);
    *(char *)pplVar6 = '\0';
    if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01259650();
    dVar12 = (double)(**(code **)(*plVar9 + 0x370))();
    if (((char)local_58 != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    dVar13 = (double)(**(code **)(*plVar9 + 0x378))(dVar12);
    FUN_01a58e40();
    plVar7 = local_40;
    local_78 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_78 = '\x01';
    local_80 = plVar7;
    FUN_01a527e0();
    FUN_0127f970(dVar13 - dVar12);
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_01a5619e;
    if (local_60 == (longlong *)0x0) goto LAB_01a562c9;
LAB_01a561af:
    FUN_01a58e40();
    FUN_00d23310();
    pVar4 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_38[0]);
    pcVar5 = local_30;
    if (local_38[0] != '\0') {
      pcVar5 = local_38;
    }
    local_30[0] = local_38[0];
    *pcVar5 = '\0';
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01259650();
    local_58 = (longlong *)FUN_01a8fc90();
    if ((local_30[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_40 = (longlong *)FUN_01a8f210();
    FUN_00e7b970();
    local_58 = local_40;
    FUN_01a58e40();
    local_90 = local_40;
    local_88 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    plVar7 = local_58;
    local_88 = '\x01';
    uVar11 = FUN_01a527e0();
    FUN_01278f90(0,uVar11);
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((bVar10) && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar8 = CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
LAB_01a564b7:
  return uVar8 & 0xffffffff;
}


