// Function: FUN_002323f0
// Address: 002323f0
// Size: 4263 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002323f0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong **pplVar8;
  longlong *plVar9;
  longlong unaff_RDI;
  undefined4 uVar10;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  
  if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) {
    return;
  }
  pplVar8 = &local_48;
  (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x970))();
  plVar2 = local_48;
  if ((DAT_02709e70 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_026f8cd8 = FUN_00074a70();
    _DAT_026f8cc0 = "MDEditorScrollView";
    _DAT_026f8cc8 = 0x260;
    _DAT_026f8cd0 = FUN_000749b0;
    _DAT_026f8ce0 = 0;
    uRam00000000026f8ce8 = 0;
    _DAT_026f8cf0 = 0;
    _DAT_026f8d68 = 0;
    uRam00000000026f8d70 = 0;
    _DAT_026f8d78 = 0;
    DAT_026f8d7a = 1;
    _DAT_026f8cf8 = 0;
    uRam00000000026f8d00 = 0;
    _DAT_026f8d08 = 0;
    uRam00000000026f8d10 = 0;
    _DAT_026f8d18 = 0;
    uRam00000000026f8d20 = 0;
    _DAT_026f8d28 = 0;
    uRam00000000026f8d30 = 0;
    _DAT_026f8d38 = 0;
    uRam00000000026f8d40 = 0;
    _DAT_026f8d48 = 0;
    uRam00000000026f8d50 = 0;
    _DAT_026f8d58 = 0;
    uRam00000000026f8d60 = 0;
    DAT_026f8d83 = 0;
    _DAT_026f8d7b = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (longlong *)0x0) {
LAB_0023245e:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0023245e;
  }
  plVar2 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (longlong *)0x0) {
    (**(code **)(&UNK_00001678 + **(longlong **)(unaff_RDI + 0x90)))();
  }
  else {
    FUN_00d50b00();
    FUN_005067d0();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    FUN_0197c7a0();
    (**(code **)(*plVar2 + 0x948))();
    (**(code **)(&UNK_00001678 + **(longlong **)(unaff_RDI + 0x90)))();
    lVar4 = DAT_026f6df0;
    if (DAT_026f6df0 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7d6f0();
    uVar10 = FUN_0071a120();
    if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
        (uVar10 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    local_58 = lVar4;
    local_50 = '\0';
    FUN_000175c0(uVar10,&local_58);
    plVar1 = local_48;
    if (local_40[0] == '\0') {
      if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      local_40[0] = '\0';
      local_48 = plVar1;
      FUN_00c716c0();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    FUN_00504770();
  }
  FUN_00233e40();
  plVar1 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00233e40();
    (**(code **)(*local_48 + 0x918))();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar3 = *(longlong **)(unaff_RDI + 0x90);
  plVar1 = (longlong *)(*(longlong *)(unaff_RDI + 0xc0) + 0x10);
  if (*(longlong *)(unaff_RDI + 0xc0) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
  }
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *plVar3 + 0x18))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0xef0))();
  (**(code **)(&UNK_00001488 + **(longlong **)(unaff_RDI + 0x90)))(DAT_02390124);
  plVar1 = (longlong *)(unaff_RDI + 0x90);
  plVar3 = *(longlong **)(unaff_RDI + 0x90);
  if (plVar3 == (longlong *)0x0) {
LAB_002327f1:
    plVar9 = (longlong *)0x0;
    lVar4 = DAT_026f6df8;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (longlong *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)*plVar1;
      if (plVar9 == (longlong *)0x0) goto LAB_002327f1;
    }
    else {
      lVar4 = DAT_026f6df8;
      if ((char)local_58 != '\0') goto joined_r0x002327fe;
    }
    FUN_00d50b00();
    lVar4 = DAT_026f6df8;
  }
joined_r0x002327fe:
  DAT_026f6df8 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00233fe0();
  (**(code **)(&UNK_00001578 + *plVar9))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)*plVar1;
  if (plVar3 == (longlong *)0x0) {
LAB_002328c7:
    plVar9 = (longlong *)0x0;
    lVar4 = DAT_026f6e00;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (longlong *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)*plVar1;
      if (plVar9 == (longlong *)0x0) goto LAB_002328c7;
    }
    else {
      lVar4 = DAT_026f6e00;
      if ((char)local_58 != '\0') goto joined_r0x002328d4;
    }
    FUN_00d50b00();
    lVar4 = DAT_026f6e00;
  }
joined_r0x002328d4:
  DAT_026f6e00 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" + *plVar9))()
  ;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)*plVar1;
  if (plVar3 == (longlong *)0x0) {
LAB_0023299e:
    plVar9 = (longlong *)0x0;
    lVar4 = DAT_026f6e08;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (longlong *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)*plVar1;
      if (plVar9 == (longlong *)0x0) goto LAB_0023299e;
    }
    else {
      lVar4 = DAT_026f6e08;
      if ((char)local_58 != '\0') goto joined_r0x002329ab;
    }
    FUN_00d50b00();
    lVar4 = DAT_026f6e08;
  }
joined_r0x002329ab:
  DAT_026f6e08 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" + *plVar9 + 0x20)
  )();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)*plVar1;
  if (plVar3 == (longlong *)0x0) {
LAB_00232a75:
    plVar9 = (longlong *)0x0;
    lVar4 = DAT_026f6e10;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (longlong *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)*plVar1;
      if (plVar9 == (longlong *)0x0) goto LAB_00232a75;
    }
    else {
      lVar4 = DAT_026f6e10;
      if ((char)local_58 != '\0') goto joined_r0x00232a82;
    }
    FUN_00d50b00();
    lVar4 = DAT_026f6e10;
  }
joined_r0x00232a82:
  DAT_026f6e10 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  (**(code **)("/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices" +
              *plVar9 + 0x48))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)*plVar1;
  if (plVar3 == (longlong *)0x0) {
LAB_00232b4c:
    plVar9 = (longlong *)0x0;
    lVar4 = DAT_026f6e18;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (longlong *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)*plVar1;
      if (plVar9 == (longlong *)0x0) goto LAB_00232b4c;
    }
    else {
      lVar4 = DAT_026f6e18;
      if ((char)local_58 != '\0') goto joined_r0x00232b59;
    }
    FUN_00d50b00();
    lVar4 = DAT_026f6e18;
  }
joined_r0x00232b59:
  DAT_026f6e18 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  FUN_019f77f0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((plVar3 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)*plVar1;
  if (plVar3 == (longlong *)0x0) {
LAB_00232c24:
    plVar9 = (longlong *)0x0;
    lVar4 = DAT_026f6e20;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (longlong *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)*plVar1;
      if (plVar9 == (longlong *)0x0) goto LAB_00232c24;
    }
    else {
      lVar4 = DAT_026f6e20;
      if ((char)local_58 != '\0') goto joined_r0x00232c31;
    }
    FUN_00d50b00();
    lVar4 = DAT_026f6e20;
  }
joined_r0x00232c31:
  DAT_026f6e20 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  FUN_019f7820();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((plVar3 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)*plVar1;
  if (plVar3 == (longlong *)0x0) {
LAB_00232cf0:
    plVar9 = (longlong *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (longlong *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)*plVar1;
      if (plVar9 == (longlong *)0x0) goto LAB_00232cf0;
    }
    else if ((char)local_58 != '\0') goto LAB_00232cf2;
    FUN_00d50b00();
  }
LAB_00232cf2:
  FUN_019f7850();
  if ((plVar3 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)*plVar1;
  if (plVar3 == (longlong *)0x0) {
LAB_00232d87:
    plVar9 = (longlong *)0x0;
    lVar4 = DAT_026f6e28;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (longlong *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)*plVar1;
      if (plVar9 == (longlong *)0x0) goto LAB_00232d87;
    }
    else {
      lVar4 = DAT_026f6e28;
      if ((char)local_58 != '\0') goto joined_r0x00232d94;
    }
    FUN_00d50b00();
    lVar4 = DAT_026f6e28;
  }
joined_r0x00232d94:
  DAT_026f6e28 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  (**(code **)((longlong)&dylib_command_00001288.dylib.name.offset + *plVar9))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  uVar10 = FUN_00d6f370();
  lVar4 = DAT_026f6e30;
  if (DAT_026f6e30 != 0) {
    uVar10 = FUN_00d50b00();
  }
  FUN_00d70f90(uVar10,1);
  FUN_002342a0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)*plVar1;
  if (plVar3 == (longlong *)0x0) {
LAB_00232ecf:
    plVar9 = (longlong *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (longlong *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)*plVar1;
      if (plVar9 == (longlong *)0x0) goto LAB_00232ecf;
    }
    else if ((char)local_58 != '\0') goto LAB_00232ed2;
    FUN_00d50b00();
  }
LAB_00232ed2:
  uVar10 = FUN_00d6f370();
  lVar4 = DAT_026f6e38;
  if (DAT_026f6e38 != 0) {
    uVar10 = FUN_00d50b00();
  }
  FUN_00d70f90(uVar10,0);
  (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" + *plVar9 + 0x10)
  )();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)*plVar1;
  if (plVar3 == (longlong *)0x0) {
LAB_00232fc9:
    plVar9 = (longlong *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (longlong *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)*plVar1;
      if (plVar9 == (longlong *)0x0) goto LAB_00232fc9;
    }
    else if ((char)local_58 != '\0') goto LAB_00232fcc;
    FUN_00d50b00();
  }
LAB_00232fcc:
  uVar10 = FUN_00d6f370();
  lVar4 = DAT_026f6e40;
  if (DAT_026f6e40 != 0) {
    uVar10 = FUN_00d50b00();
  }
  FUN_00d70f90(uVar10,0);
  FUN_019f1a10();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar3 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)*plVar1;
  if (plVar3 == (longlong *)0x0) {
LAB_002330d7:
    plVar9 = (longlong *)0x0;
    lVar4 = DAT_02709e30;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (longlong *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)*plVar1;
      if (plVar9 == (longlong *)0x0) goto LAB_002330d7;
    }
    else {
      lVar4 = DAT_02709e30;
      if ((char)local_58 != '\0') goto joined_r0x002330eb;
    }
    FUN_00d50b00();
    lVar4 = DAT_02709e30;
  }
joined_r0x002330eb:
  DAT_02709e30 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar10 = FUN_0071a120();
  if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
      (uVar10 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  local_50 = '\0';
  local_58 = lVar4;
  FUN_000175c0(uVar10,&local_58);
  plVar7 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    local_40[0] = '\0';
    local_48 = plVar7;
    FUN_00c70bc0();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  (**(code **)(&DAT_000015c8 + *plVar9))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)*plVar1;
  if (plVar3 == (longlong *)0x0) {
LAB_002332c2:
    plVar9 = (longlong *)0x0;
    lVar4 = DAT_026f6e50;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = (longlong *)local_40;
    if (local_40[0] == '\0') {
      plVar7 = &local_58;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)*plVar1;
      if (plVar9 == (longlong *)0x0) goto LAB_002332c2;
    }
    else {
      lVar4 = DAT_026f6e50;
      if ((char)local_58 != '\0') goto joined_r0x002332cf;
    }
    FUN_00d50b00();
    lVar4 = DAT_026f6e50;
  }
joined_r0x002332cf:
  DAT_026f6e50 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  FUN_019ef470();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((plVar3 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar10 = FUN_00d6f370();
  lVar4 = DAT_026f6e58;
  if (DAT_026f6e58 != 0) {
    uVar10 = FUN_00d50b00();
  }
  FUN_00d70f90(uVar10,1);
  FUN_002342a0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0021e5f0();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


