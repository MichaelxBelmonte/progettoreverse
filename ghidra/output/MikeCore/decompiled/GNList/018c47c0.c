// Function: FUN_018c47c0
// Address: 018c47c0
// Size: 1232 bytes
// Class: GNList


void FUN_018c47c0(void)

{
  longlong lVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_f0;
  char local_e8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar7 = *(longlong *)(unaff_RSI + 0xd8);
  if (lVar7 != 0) goto LAB_018c4c57;
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00024e60();
  *plVar2 = (longlong)&DAT_025769c8;
  (*DAT_025769e0)();
  lVar7 = DAT_027dcf70;
  if (DAT_027dcf70 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_0277cbb0;
  if (DAT_0277cbb0 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar1;
  local_c8 = '\x01';
  FUN_00d46300();
  local_80 = local_50;
  local_78 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = '\x01';
  FUN_00d14780(&local_80,&local_d0);
  local_90 = local_40;
  local_88 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_88 = '\x01';
  (**(code **)(*plVar2 + 1000))();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  lVar7 = DAT_027dcf80;
  if (DAT_027dcf80 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_0277cbb0;
  local_c0 = lVar7;
  local_b8 = '\x01';
  if (DAT_0277cbb0 != 0) {
    FUN_00d50b00();
  }
  local_b0 = lVar1;
  local_a8 = '\x01';
  FUN_00d46300();
  local_60 = local_50;
  local_58 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_58 = '\x01';
  plVar6 = &local_60;
  FUN_00d14780(plVar6,&local_b0);
  local_70 = local_40;
  pVar5 = (pthread_key_t)plVar6;
  local_68 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_68 = '\x01';
  (**(code **)(*plVar2 + 1000))();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018c2810();
  local_98 = '\0';
  local_a0 = plVar2;
  FUN_018c5050();
  lVar7 = DAT_027d3980;
  if (DAT_027d3980 != 0) {
    FUN_00d50b00();
  }
  FUN_018c50f0(lVar7,FUN_00e8b320);
  lVar1 = *(longlong *)(unaff_RSI + 0xd8);
  lVar4 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar4 = 0;
        goto LAB_018c4b98;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RSI + 0xd8);
      *(longlong *)(unaff_RSI + 0xd8) = local_40;
      lVar4 = local_40;
    }
    else {
      local_38 = '\0';
      lVar4 = local_40;
LAB_018c4b98:
      *(longlong *)(unaff_RSI + 0xd8) = lVar4;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  lVar7 = *(longlong *)(unaff_RSI + 0xd8);
LAB_018c4c57:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


