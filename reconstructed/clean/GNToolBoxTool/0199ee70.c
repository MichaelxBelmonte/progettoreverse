// Function: FUN_0199ee70
// Address: 0199ee70
// Size: 1038 bytes
// Class: GNToolBoxTool
// String references:
//   "GNToolBoxTool"
//   "MUTool"
// === GNToolBoxTool properties ===
//                   _cellSize
//                   _sendsNotificationActionsOnOpenAndClose
//                   _showsSelectedTool
//                   _isHighlightingSubTools
//                   _allowedScreenFrame
//                   _toolBoxRect
//                   _subtoolsRect
//                   _contextMenusRect


uint64_t FUN_0199ee70(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t *this_ptr;
  int64_t **pplVar5;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar6 = FUN_01caec40();
  local_80 = g_027e1388;
  if (g_027e1388 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_78 = '\x01';
  pplVar5 = &local_40;
  FUN_000175c0(uVar6,&local_80);
  plVar1 = local_40;
  if ((g_026e6cf0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026e6c40 = FUN_00d4fe50();
    g_026e6c28 = "GNToolBoxTool";
    g_026e6c30 = 0x48;
    g_026e6c38 = FUN_001a1400;
    g_026e6c48 = 0;
    ram_00000000026e6c50 = 0;
    g_026e6c58 = 0;
    ram_00000000026e6c60 = 0;
    g_026e6c68 = 0;
    ram_00000000026e6c70 = 0;
    g_026e6c78 = 0;
    ram_00000000026e6c80 = 0;
    g_026e6c88 = 0;
    ram_00000000026e6c90 = 0;
    g_026e6c98 = 0;
    ram_00000000026e6ca0 = 0;
    g_026e6ca8 = 0;
    ram_00000000026e6cb0 = 0;
    g_026e6cb8 = 0;
    ram_00000000026e6cc0 = 0;
    g_026e6cc8 = 0;
    ram_00000000026e6cd0 = 0;
    g_026e6cd8 = 0;
    ram_00000000026e6ce0 = 0;
    g_026e6ce8 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_0199ef01:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0199ef01;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_0199f09e;
  uVar6 = FUN_01e26150();
  local_70 = g_026f6e60;
  if (g_026f6e60 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_68 = '\x01';
  pplVar5 = &local_40;
  uVar6 = FUN_000175c0(uVar6,&local_70);
  plVar2 = local_40;
  if ((g_0272ffd0 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar6 = extraout_XMM0_Da_00, iVar4 != 0)) {
    g_026f8f48 = FUN_00d4fe50();
    g_026f8f30 = "MUTool";
    g_026f8f38 = 0x38;
    g_026f8f40 = FUN_00274e70;
    g_026f8f50 = 0;
    ram_00000000026f8f58 = 0;
    g_026f8f60 = 0;
    g_026f8fd8 = 0;
    ram_00000000026f8fe0 = 0;
    g_026f8fe8 = 0;
    g_026f8fea = 1;
    g_026f8f68 = 0;
    ram_00000000026f8f70 = 0;
    g_026f8f78 = 0;
    ram_00000000026f8f80 = 0;
    g_026f8f88 = 0;
    ram_00000000026f8f90 = 0;
    g_026f8f98 = 0;
    ram_00000000026f8fa0 = 0;
    g_026f8fa8 = 0;
    ram_00000000026f8fb0 = 0;
    g_026f8fb8 = 0;
    ram_00000000026f8fc0 = 0;
    g_026f8fc8 = 0;
    ram_00000000026f8fd0 = 0;
    g_026f8ff3 = 0;
    g_026f8feb = 0;
    uVar6 = ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_0199efe4:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_0199efe4;
  }
  local_48 = 0;
  plVar2 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  local_48 = '\x01';
  local_50 = plVar2;
  (**(code **)(*this_ptr + 0xec8))(uVar6,1);
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d3a630();
  FUN_01e466c0();
  (**(code **)(*this_ptr + 0xd98))();
LAB_0199f09e:
  (**(code **)(*this_ptr + 0xed0))();
  iVar4 = (**(code **)(*local_40 + 0x3e0))();
  if ((bool)*(char *)((int64_t)this_ptr + 0x3c6) != (iVar4 != 0)) {
    *(bool *)((int64_t)this_ptr + 0x3c6) = iVar4 != 0;
    (**(code **)(*this_ptr + 0x620))();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}

