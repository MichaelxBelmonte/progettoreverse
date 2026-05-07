// Function: FUN_00257fd0
// Address: 00257fd0
// Size: 1469 bytes
// Class: MDEditorScrollView


/* WARNING: Removing unreachable block (ram,0x002583da) */
/* WARNING: Removing unreachable block (ram,0x002583e6) */

undefined8 FUN_00257fd0(pthread_key_t param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  char *pcVar7;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  longlong *local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong *local_40;
  char local_38 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_006f3f00();
  (**(code **)(*(longlong *)CONCAT71(uStack_67,local_68) + 0x628))();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  local_58 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar6))();
  plVar5 = local_40;
  pcVar7 = &local_50;
  if (local_38[0] != '\0') {
    pcVar7 = local_38;
  }
  local_50 = local_38[0];
  *pcVar7 = '\0';
  if ((local_38[0] != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
    plVar5 = *(longlong **)(unaff_RDI + 0x90);
LAB_00258118:
    FUN_00d50b00();
  }
  else if (local_50 == '\0') goto LAB_00258118;
  (**(code **)(*plVar5 + 0xda0))();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = (pthread_key_t)local_58;
  }
  FUN_01313ad0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  plVar6 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  FUN_002312f0();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar6))();
  plVar5 = local_40;
  pcVar7 = &local_50;
  if (local_38[0] != '\0') {
    pcVar7 = local_38;
  }
  local_50 = local_38[0];
  *pcVar7 = '\0';
  if ((local_38[0] != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
    plVar5 = *(longlong **)(unaff_RDI + 0x90);
LAB_002582e2:
    FUN_00d50b00();
  }
  else if (local_50 == '\0') goto LAB_002582e2;
  (**(code **)(*plVar5 + 0xda0))();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) {
    local_78 = (longlong *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    plVar6 = local_40;
    pcVar7 = local_38;
    if (local_38[0] == '\0') {
      pcVar7 = &local_68;
    }
    local_68 = local_38[0];
    *pcVar7 = '\0';
    if ((local_38[0] != '\0') && (plVar6 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (longlong *)0x0) {
      plVar6 = *(longlong **)(unaff_RDI + 0x90);
      if (plVar6 == (longlong *)0x0) {
        local_78 = (longlong *)0x0;
        goto LAB_00258393;
      }
    }
    else {
      local_78 = plVar6;
      if (local_68 != '\0') goto LAB_00258393;
    }
    FUN_00d50b00();
    local_78 = plVar6;
  }
LAB_00258393:
  local_70 = '\x01';
  FUN_01c91010();
  lVar4 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (((lVar4 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (CONCAT71(uStack_4f,local_50) != 0))
    {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0021a2c0();
  if (lVar4 != 0) {
    FUN_01f27fe0();
    lVar1 = DAT_026f6fc0;
    if (DAT_026f6fc0 != 0) {
      FUN_00d50b00();
    }
    lVar2 = DAT_026f6fc8;
    local_b0 = '\0';
    local_b8 = lVar4;
    if (DAT_026f6fc8 != 0) {
      FUN_00d50b00();
    }
    local_a8 = lVar2;
    local_a0 = '\x01';
    local_98 = 0;
    local_90 = '\0';
    local_88 = 0;
    local_80 = '\0';
    FUN_01f316e0(&local_a8,&local_b8,&local_98,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}


