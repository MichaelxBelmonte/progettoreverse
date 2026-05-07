// Function: FUN_002323f0
// Address: 002323f0
// Size: 4263 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_002323f0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t **pplVar8;
  int64_t *plVar9;
  int64_t this_ptr;
  uint32_t uVar10;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
    return;
  }
  pplVar8 = &local_48;
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x970))();
  plVar2 = local_48;
  if ((g_02709e70 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_026f8cd8 = FUN_00074a70();
    g_026f8cc0 = "MDEditorScrollView";
    g_026f8cc8 = 0x260;
    g_026f8cd0 = FUN_000749b0;
    g_026f8ce0 = 0;
    ram_00000000026f8ce8 = 0;
    g_026f8cf0 = 0;
    g_026f8d68 = 0;
    ram_00000000026f8d70 = 0;
    g_026f8d78 = 0;
    g_026f8d7a = 1;
    g_026f8cf8 = 0;
    ram_00000000026f8d00 = 0;
    g_026f8d08 = 0;
    ram_00000000026f8d10 = 0;
    g_026f8d18 = 0;
    ram_00000000026f8d20 = 0;
    g_026f8d28 = 0;
    ram_00000000026f8d30 = 0;
    g_026f8d38 = 0;
    ram_00000000026f8d40 = 0;
    g_026f8d48 = 0;
    ram_00000000026f8d50 = 0;
    g_026f8d58 = 0;
    ram_00000000026f8d60 = 0;
    g_026f8d83 = 0;
    g_026f8d7b = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_0023245e:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0023245e;
  }
  plVar2 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (int64_t *)0x0) {
    (**(code **)(&UNK_00001678 + **(int64_t **)(this_ptr + 0x90)))();
  }
  else {
    FUN_00d50b00();
    FUN_005067d0();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    FUN_0197c7a0();
    (**(code **)(*plVar2 + 0x948))();
    (**(code **)(&UNK_00001678 + **(int64_t **)(this_ptr + 0x90)))();
    lVar4 = g_026f6df0;
    if (g_026f6df0 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7d6f0();
    uVar10 = FUN_0071a120();
    if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
        (uVar10 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    local_58 = lVar4;
    local_50 = '\0';
    FUN_000175c0(uVar10,&local_58);
    plVar1 = local_48;
    if (local_40[0] == '\0') {
      if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      local_40[0] = '\0';
      local_48 = plVar1;
      FUN_00c716c0();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
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
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00233e40();
    (**(code **)(*local_48 + 0x918))();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar3 = *(int64_t **)(this_ptr + 0x90);
  plVar1 = (int64_t *)(*(int64_t *)(this_ptr + 0xc0) + 0x10);
  if (*(int64_t *)(this_ptr + 0xc0) == 0) {
    plVar1 = (int64_t *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
  }
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *plVar3 + 0x18))();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0xef0))();
  (**(code **)(&UNK_00001488 + **(int64_t **)(this_ptr + 0x90)))(g_02390124);
  plVar1 = (int64_t *)(this_ptr + 0x90);
  plVar3 = *(int64_t **)(this_ptr + 0x90);
  if (plVar3 == (int64_t *)0x0) {
LAB_002327f1:
    plVar9 = (int64_t *)0x0;
    lVar4 = g_026f6df8;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_002327f1;
    }
    else {
      lVar4 = g_026f6df8;
      if ((char)local_58 != '\0') goto joined_r0x002327fe;
    }
    FUN_00d50b00();
    lVar4 = g_026f6df8;
  }
joined_r0x002327fe:
  g_026f6df8 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00233fe0();
  (**(code **)(&UNK_00001578 + *plVar9))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_002328c7:
    plVar9 = (int64_t *)0x0;
    lVar4 = g_026f6e00;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_002328c7;
    }
    else {
      lVar4 = g_026f6e00;
      if ((char)local_58 != '\0') goto joined_r0x002328d4;
    }
    FUN_00d50b00();
    lVar4 = g_026f6e00;
  }
joined_r0x002328d4:
  g_026f6e00 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" + *plVar9))()
  ;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_0023299e:
    plVar9 = (int64_t *)0x0;
    lVar4 = g_026f6e08;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_0023299e;
    }
    else {
      lVar4 = g_026f6e08;
      if ((char)local_58 != '\0') goto joined_r0x002329ab;
    }
    FUN_00d50b00();
    lVar4 = g_026f6e08;
  }
joined_r0x002329ab:
  g_026f6e08 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" + *plVar9 + 0x20)
  )();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_00232a75:
    plVar9 = (int64_t *)0x0;
    lVar4 = g_026f6e10;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_00232a75;
    }
    else {
      lVar4 = g_026f6e10;
      if ((char)local_58 != '\0') goto joined_r0x00232a82;
    }
    FUN_00d50b00();
    lVar4 = g_026f6e10;
  }
joined_r0x00232a82:
  g_026f6e10 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  (**(code **)("/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices" +
              *plVar9 + 0x48))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_00232b4c:
    plVar9 = (int64_t *)0x0;
    lVar4 = g_026f6e18;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_00232b4c;
    }
    else {
      lVar4 = g_026f6e18;
      if ((char)local_58 != '\0') goto joined_r0x00232b59;
    }
    FUN_00d50b00();
    lVar4 = g_026f6e18;
  }
joined_r0x00232b59:
  g_026f6e18 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  FUN_019f77f0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((plVar3 != (int64_t *)0x0) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_00232c24:
    plVar9 = (int64_t *)0x0;
    lVar4 = g_026f6e20;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_00232c24;
    }
    else {
      lVar4 = g_026f6e20;
      if ((char)local_58 != '\0') goto joined_r0x00232c31;
    }
    FUN_00d50b00();
    lVar4 = g_026f6e20;
  }
joined_r0x00232c31:
  g_026f6e20 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  FUN_019f7820();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((plVar3 != (int64_t *)0x0) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_00232cf0:
    plVar9 = (int64_t *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_00232cf0;
    }
    else if ((char)local_58 != '\0') goto LAB_00232cf2;
    FUN_00d50b00();
  }
LAB_00232cf2:
  FUN_019f7850();
  if ((plVar3 != (int64_t *)0x0) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_00232d87:
    plVar9 = (int64_t *)0x0;
    lVar4 = g_026f6e28;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_00232d87;
    }
    else {
      lVar4 = g_026f6e28;
      if ((char)local_58 != '\0') goto joined_r0x00232d94;
    }
    FUN_00d50b00();
    lVar4 = g_026f6e28;
  }
joined_r0x00232d94:
  g_026f6e28 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  (**(code **)((int64_t)&dylib_command_00001288.dylib.name.offset + *plVar9))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  uVar10 = FUN_00d6f370();
  lVar4 = g_026f6e30;
  if (g_026f6e30 != 0) {
    uVar10 = FUN_00d50b00();
  }
  FUN_00d70f90(uVar10,1);
  FUN_002342a0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_00232ecf:
    plVar9 = (int64_t *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_00232ecf;
    }
    else if ((char)local_58 != '\0') goto LAB_00232ed2;
    FUN_00d50b00();
  }
LAB_00232ed2:
  uVar10 = FUN_00d6f370();
  lVar4 = g_026f6e38;
  if (g_026f6e38 != 0) {
    uVar10 = FUN_00d50b00();
  }
  FUN_00d70f90(uVar10,0);
  (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" + *plVar9 + 0x10)
  )();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_00232fc9:
    plVar9 = (int64_t *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_00232fc9;
    }
    else if ((char)local_58 != '\0') goto LAB_00232fcc;
    FUN_00d50b00();
  }
LAB_00232fcc:
  uVar10 = FUN_00d6f370();
  lVar4 = g_026f6e40;
  if (g_026f6e40 != 0) {
    uVar10 = FUN_00d50b00();
  }
  FUN_00d70f90(uVar10,0);
  FUN_019f1a10();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar3 != (int64_t *)0x0) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_002330d7:
    plVar9 = (int64_t *)0x0;
    lVar4 = g_02709e30;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = &local_58;
    if (local_40[0] != '\0') {
      plVar7 = (int64_t *)local_40;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_002330d7;
    }
    else {
      lVar4 = g_02709e30;
      if ((char)local_58 != '\0') goto joined_r0x002330eb;
    }
    FUN_00d50b00();
    lVar4 = g_02709e30;
  }
joined_r0x002330eb:
  g_02709e30 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar10 = FUN_0071a120();
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (uVar10 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  local_50 = '\0';
  local_58 = lVar4;
  FUN_000175c0(uVar10,&local_58);
  plVar7 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    local_40[0] = '\0';
    local_48 = plVar7;
    FUN_00c70bc0();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  (**(code **)(&g_000015c8 + *plVar9))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)*plVar1;
  if (plVar3 == (int64_t *)0x0) {
LAB_002332c2:
    plVar9 = (int64_t *)0x0;
    lVar4 = g_026f6e50;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar3))();
    plVar9 = local_48;
    plVar7 = (int64_t *)local_40;
    if (local_40[0] == '\0') {
      plVar7 = &local_58;
    }
    local_58 = CONCAT71(local_58._1_7_,local_40[0]);
    *(char *)plVar7 = '\0';
    if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)*plVar1;
      if (plVar9 == (int64_t *)0x0) goto LAB_002332c2;
    }
    else {
      lVar4 = g_026f6e50;
      if ((char)local_58 != '\0') goto joined_r0x002332cf;
    }
    FUN_00d50b00();
    lVar4 = g_026f6e50;
  }
joined_r0x002332cf:
  g_026f6e50 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00234140();
  FUN_019ef470();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((plVar3 != (int64_t *)0x0) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar10 = FUN_00d6f370();
  lVar4 = g_026f6e58;
  if (g_026f6e58 != 0) {
    uVar10 = FUN_00d50b00();
  }
  FUN_00d70f90(uVar10,1);
  FUN_002342a0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0021e5f0();
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

