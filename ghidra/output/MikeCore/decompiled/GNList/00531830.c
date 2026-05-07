// Function: FUN_00531830
// Address: 00531830
// Size: 1638 bytes
// Class: GNList


void FUN_00531830(void)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  longlong *unaff_RDI;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (unaff_RDI[0x61] != 0) {
    return;
  }
  FUN_00d50b00();
  local_f8 = DAT_0270b8e0;
  if (DAT_0270b8e0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_0270b8e8;
  local_f0 = '\x01';
  if (DAT_0270b8e8 != 0) {
    FUN_00d50b00();
  }
  local_e8 = lVar2;
  local_e0 = '\x01';
  FUN_00b34cb0();
  (**(code **)(*local_68 + 0x88))();
  local_88 = local_50;
  local_80 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_80 = '\x01';
  plVar7 = &local_e8;
  FUN_000bf690(plVar7,&local_f8,&local_88);
  pVar6 = (pthread_key_t)plVar7;
  lVar2 = unaff_RDI[0x75];
  lVar4 = lVar2;
  if (lVar2 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar4 = 0;
        goto LAB_0053193d;
      }
      FUN_00d50b00();
      lVar2 = unaff_RDI[0x75];
      unaff_RDI[0x75] = local_40;
      lVar4 = local_40;
    }
    else {
      local_38 = '\0';
      lVar4 = local_40;
LAB_0053193d:
      unaff_RDI[0x75] = lVar4;
    }
    pVar6 = (pthread_key_t)lVar2;
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar4 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    (**(code **)(*local_68 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*unaff_RDI + 0x390))();
  if (cVar3 != '\0') {
    return;
  }
  if ((longlong *)unaff_RDI[0x21] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x21] + 0x498))();
    if (local_40 == 0) {
      cVar3 = '\0';
    }
    else {
      (**(code **)(*(longlong *)unaff_RDI[0x21] + 0x498))();
      cVar3 = FUN_00cb9880();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      return;
    }
  }
  if (unaff_RDI[0x22] == 0) {
    return;
  }
  FUN_00d50b00();
  (**(code **)(*unaff_RDI + 0x4d0))();
  local_58 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_0051a2b0();
  FUN_01f27fe0();
  FUN_00b34cb0();
  (**(code **)(*local_108 + 0x88))();
  local_78 = local_68;
  local_70 = 0;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_70 = '\x01';
  FUN_000c28c0();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00518030();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
    (**(code **)(*local_108 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_d8 = local_58;
  local_d0 = '\0';
  (**(code **)(*unaff_RDI + 0x4d8))();
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00527070();
  lVar2 = local_40;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_007932a0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0015d630();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00531d64;
    }
    if (unaff_RDI[0x21] == 0) goto LAB_00531e5c;
LAB_00531d74:
    FUN_00d50b00();
    iVar1 = *(int *)(lVar2 + 0xc);
    FUN_00d50b20();
    if (iVar1 != 0) {
      lVar4 = unaff_RDI[0x21];
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      local_c8 = lVar2;
      local_c0 = '\0';
      local_b8 = 0;
      local_b0 = '\0';
      FUN_00761a80();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
LAB_00531d64:
    if (unaff_RDI[0x21] != 0) goto LAB_00531d74;
    if (lVar2 == 0) goto LAB_00531e5c;
  }
  FUN_00d50b20();
LAB_00531e5c:
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


