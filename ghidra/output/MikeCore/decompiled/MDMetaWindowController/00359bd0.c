// Function: FUN_00359bd0
// Address: 00359bd0
// Size: 777 bytes
// Class: MDMetaWindowController


void FUN_00359bd0(undefined4 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  longlong unaff_RDI;
  undefined4 uVar8;
  longlong local_90;
  char local_88;
  undefined4 local_7c;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_003ba620();
  local_78 = local_58;
  local_70 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_70 = '\x01';
  FUN_004f9670();
  lVar3 = local_48;
  pVar6 = CONCAT31((int3)((uint)param_1 >> 8),local_40[0]);
  pcVar7 = local_38;
  if (local_40[0] != '\0') {
    pcVar7 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar7 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar8 = FUN_00d3ecf0();
  lVar4 = local_48;
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_026d83d0;
  if (lVar4 == lVar3) {
    if (DAT_026d83d0 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_90 = lVar2;
    local_88 = '\x01';
    FUN_01e57490(uVar8,&local_90);
    lVar4 = local_48;
    if (local_40[0] == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d243a0();
    FUN_003ba620();
    local_68 = local_58;
    local_60 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_60 = '\x01';
    FUN_004f9670();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_7c = FUN_004f7a80();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x928))(local_7c);
    plVar1 = *(longlong **)(unaff_RDI + 200);
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004f78f0();
    (**(code **)(*plVar1 + 0x918))();
    plVar1 = *(longlong **)(unaff_RDI + 0xd0);
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004f7980();
    (**(code **)(*plVar1 + 0x918))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38[0] != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  return;
}


