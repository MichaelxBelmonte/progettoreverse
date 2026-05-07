// Function: FUN_01ab6ab0
// Address: 01ab6ab0
// Size: 2487 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01ab700c) */
/* WARNING: Removing unreachable block (ram,0x01ab7018) */
/* WARNING: Removing unreachable block (ram,0x01ab6e3e) */
/* WARNING: Removing unreachable block (ram,0x01ab6e4a) */
/* WARNING: Removing unreachable block (ram,0x01ab6b50) */
/* WARNING: Removing unreachable block (ram,0x01ab6b5c) */
/* WARNING: Removing unreachable block (ram,0x01ab6d70) */
/* WARNING: Removing unreachable block (ram,0x01ab6d7c) */
/* WARNING: Removing unreachable block (ram,0x01ab6ea6) */
/* WARNING: Removing unreachable block (ram,0x01ab6eb2) */
/* WARNING: Removing unreachable block (ram,0x01ab7082) */
/* WARNING: Removing unreachable block (ram,0x01ab708e) */

void FUN_01ab6ab0(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar11;
  undefined8 unaff_R14;
  undefined7 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong *local_1a8;
  char local_1a0;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  float local_ac;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  undefined4 local_4c;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  uVar15 = param_2;
  (**(code **)(*unaff_RDI + 0x640))();
  plVar1 = local_40;
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x3f0))(8,0x27,0,unaff_RDI[0x29] != 0);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x640))();
  plVar1 = local_40;
  FUN_01e3f820();
  uVar13 = (**(code **)(*plVar1 + 0x3d0))();
  uVar16 = uVar15;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pplVar11 = &local_40;
  (**(code **)(*unaff_RDI + 0x640))();
  plVar1 = local_40;
  uVar5 = FUN_00209700();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    unaff_R14 = uVar5;
    if (cVar3 != '\0') goto LAB_01ab6c0a;
  }
  pplVar11 = (longlong **)&DAT_02802688;
LAB_01ab6c0a:
  plVar1 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar11 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar12 = (undefined7)((ulonglong)unaff_R14 >> 8);
  if (plVar1 == (longlong *)0x0) {
    FUN_01d39800(uVar13,uVar15,0);
    local_48 = local_40;
    plVar9 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
      local_4c = 0;
      plVar10 = (longlong *)0x0;
      bVar2 = false;
    }
    else {
      plVar6 = local_40;
      if (((local_38 == '\0') && (plVar6 = (longlong *)FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        plVar6 = (longlong *)FUN_00d50b20();
      }
      plVar10 = local_48;
      local_4c = (undefined4)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
      local_68 = (longlong *)0x0;
      FUN_00d50b00();
      bVar2 = true;
    }
  }
  else {
    local_68 = (longlong *)FUN_01e3f820();
    (**(code **)(*plVar1 + 0x6a0))((int)plVar1[0x36],(int)local_68,uVar16);
    local_48 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_4c = 0;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      local_4c = (undefined4)CONCAT71(uVar12,1);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      local_4c = (undefined4)CONCAT71(uVar12,1);
    }
    local_ac = *(float *)(plVar1 + 0x36);
    uVar14 = FUN_00d05530(local_68._0_4_,uVar16,DAT_02390118);
    plVar9 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x6a0))(local_ac + DAT_02390118,uVar14,uVar16);
    plVar10 = local_40;
    if (local_40 == (longlong *)0x0) {
      bVar2 = false;
      plVar10 = (longlong *)0x0;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar2 = true;
    }
  }
  pVar8 = (pthread_key_t)plVar9;
  local_68 = plVar10;
  FUN_01d48370();
  (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
  if (unaff_RDI[0x29] == 0) {
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_1a8 + 0x470))();
    local_78 = local_40;
    local_70 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = '\x01';
    FUN_01d488d0();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01ab5170();
    local_a8 = local_40;
    local_a0 = 0;
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    FUN_01d488d0();
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
  }
  if (plVar1 != (longlong *)0x0) {
    local_120 = local_48;
    local_118 = '\0';
    FUN_01ee9430(0,&local_120);
    if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_110 = local_68;
  local_108 = '\0';
  (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
  if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x29] != 0) {
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_015b7ba0();
    if (iVar4 == 3) {
      local_100 = *unaff_RSI;
      local_f8 = '\0';
      FUN_01ab7b20(param_1,param_2,uVar13,uVar15);
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01abaae0(param_1,param_2,uVar13,uVar15);
    }
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015b7b80();
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar3 = FUN_017f2980();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_01ab6010();
      local_98 = local_40;
      local_90 = 0;
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_90 = '\x01';
      FUN_01d488d0();
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_f0 = local_68;
      local_e8 = '\0';
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
      if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01ab61b0();
      local_80 = 0;
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_88 = local_40;
      local_80 = '\x01';
      FUN_01d488d0();
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_e0 = local_68;
      local_d8 = '\0';
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
      if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    cVar3 = FUN_01e420b0();
    if ((cVar3 != '\0') && (plVar1 != (longlong *)0x0)) {
      local_d0 = *unaff_RSI;
      local_c8 = '\0';
      local_c0 = local_48;
      local_b8 = '\0';
      (**(code **)(*plVar1 + 0x6a8))(extraout_XMM0_Da,&local_c0);
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01d48390();
  if ((bVar2) && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_4c != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


