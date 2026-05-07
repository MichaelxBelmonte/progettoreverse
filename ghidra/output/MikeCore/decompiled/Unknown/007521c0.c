// Function: FUN_007521c0
// Address: 007521c0
// Size: 1242 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x007522a6) */
/* WARNING: Removing unreachable block (ram,0x007522b2) */
/* WARNING: Removing unreachable block (ram,0x007525b2) */
/* WARNING: Removing unreachable block (ram,0x007525be) */

void FUN_007521c0(pthread_key_t param_1)

{
  longlong lVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
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
  
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_000830c0();
  (**(code **)(*plVar2 + 0x18))();
  FUN_004a0bd0();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_0075223b;
    }
    if (plVar2[0xf] != 0) {
      plVar2[0xf] = 0;
      goto LAB_00752274;
    }
  }
  else {
    local_38 = '\0';
LAB_0075223b:
    lVar4 = plVar2[0xf];
    if (lVar4 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      plVar2[0xf] = lVar1;
      if (lVar4 != 0) {
LAB_00752274:
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0170f550();
  FUN_0167ab00();
  local_60 = local_40;
  local_58 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_58 = '\x01';
  (**(code **)(*plVar2 + 0x490))();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0170f550();
  FUN_0167ab30();
  lVar1 = plVar2[0x27];
  lVar4 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar4 = 0;
        goto LAB_007523e7;
      }
      FUN_00d50b00();
      lVar1 = plVar2[0x27];
      plVar2[0x27] = local_40;
      lVar4 = local_40;
    }
    else {
      local_38 = '\0';
      lVar4 = local_40;
LAB_007523e7:
      plVar2[0x27] = lVar4;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027294d8;
  if (DAT_027294d8 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_027294e0;
  local_c0 = lVar1;
  local_b8 = '\x01';
  if (DAT_027294e0 != 0) {
    FUN_00d50b00();
  }
  local_b0 = lVar4;
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_000bf690(&local_b0,&local_c0,&local_a0);
  lVar1 = plVar2[0x22];
  lVar4 = lVar1;
  if (lVar1 == local_40) goto LAB_0075254b;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar4 = 0;
      goto LAB_007524fd;
    }
    FUN_00d50b00();
    lVar1 = plVar2[0x22];
    plVar2[0x22] = local_40;
    lVar4 = local_40;
  }
  else {
    local_38 = '\0';
    lVar4 = local_40;
LAB_007524fd:
    plVar2[0x22] = lVar4;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar4 = local_40;
  }
LAB_0075254b:
  if ((local_38 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_80 = DAT_027294e8;
  local_88 = '\0';
  local_90 = plVar2;
  if (DAT_027294e8 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  local_70 = *unaff_RSI;
  local_68 = '\0';
  FUN_00d41430(&local_70,&local_80);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = plVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


