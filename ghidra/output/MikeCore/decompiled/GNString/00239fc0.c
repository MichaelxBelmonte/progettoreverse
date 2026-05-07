// Function: FUN_00239fc0
// Address: 00239fc0
// Size: 2134 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0023a012) */
/* WARNING: Removing unreachable block (ram,0x0023a01e) */

void FUN_00239fc0(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  void *pvVar6;
  char *pcVar7;
  longlong *plVar8;
  longlong unaff_RDI;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_d8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_58;
  char local_50;
  char local_48 [8];
  longlong *local_40;
  char local_38 [8];
  
  FUN_00710820();
  FUN_00441f10();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
    local_38[0] = '\0';
    local_40 = (longlong *)0x0;
  }
  else {
    FUN_006f3f00();
  }
  cVar5 = FUN_00751ba0();
  uVar9 = extraout_XMM0_Qa;
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    FUN_0023af30(uVar9,0);
    FUN_0023c090();
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_40 + 0x450))();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_80 = 0;
  local_78 = 0;
  local_d8 = 0;
  if (cVar5 != '\0') {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *local_58 + 0x20))();
    uVar9 = (**(code **)(*local_40 + 0x68))();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *local_58 + 0x20))();
    uVar10 = (**(code **)(*local_40 + 0xc0))();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *local_58 + 0x20))();
    uVar11 = (**(code **)(*local_40 + 0xd0))();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    local_d8 = FUN_0193c6b0(uVar9);
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    local_80 = FUN_0193c6b0(uVar10);
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    local_78 = FUN_0193c6b0(uVar11);
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
  (**(code **)(&UNK_00001668 + *local_58))();
  plVar4 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_98 = 0;
  (**(code **)(*(longlong *)(unaff_RDI + 0x70) + 0x10))();
  FUN_00d50b00();
  local_98 = '\x01';
  local_a0 = (longlong *)(unaff_RDI + 0x70);
  FUN_00cbb340();
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    (**(code **)(*local_a0 + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)("/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices" +
              **(longlong **)(unaff_RDI + 0x90) + 0x38))();
  (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
  (**(code **)(&UNK_00001548 + *local_40))();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0xb50))();
  FUN_01f27fe0();
  (**(code **)(*local_40 + 0x400))();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  lVar1 = DAT_026fe410;
  if (DAT_026fe410 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_b0 = 0;
  local_a8 = '\0';
  FUN_00d40470(&local_b0,&stack0xffffffffffffff70,1,3);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_40 + 0x450))();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    lVar1 = *(longlong *)(unaff_RDI + 0xb8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_004405c0();
    lVar2 = *(longlong *)(unaff_RDI + 0xb8);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_004405f0();
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_004b5760();
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00239d50();
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_40 + 0x450))();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') goto LAB_0023a7f6;
  plVar3 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar3))();
  plVar8 = local_40;
  local_48[0] = local_38[0];
  pcVar7 = local_38;
  if (local_38[0] == '\0') {
    pcVar7 = local_48;
  }
  *pcVar7 = '\0';
  if ((local_38[0] != '\0') && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) {
    plVar8 = *(longlong **)(unaff_RDI + 0x90);
LAB_0023a6f7:
    FUN_00d50b00();
  }
  else if (local_48[0] == '\0') goto LAB_0023a6f7;
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *plVar8 + 0x20))();
  (**(code **)(*local_58 + 0x60))(local_d8);
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    (**(code **)(*local_58 + 0x10))();
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar3))();
  plVar8 = local_40;
  pcVar7 = local_38;
  if (local_38[0] == '\0') {
    pcVar7 = local_48;
  }
  local_48[0] = local_38[0];
  *pcVar7 = '\0';
  if ((local_38[0] != '\0') && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) {
    plVar8 = *(longlong **)(unaff_RDI + 0x90);
LAB_0023a79d:
    FUN_00d50b00();
  }
  else if (local_48[0] == '\0') goto LAB_0023a79d;
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *plVar8 + 0x20))();
  (**(code **)(*local_58 + 0xe0))(local_80,local_78);
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    (**(code **)(*local_58 + 0x10))();
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0023a7f6:
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


