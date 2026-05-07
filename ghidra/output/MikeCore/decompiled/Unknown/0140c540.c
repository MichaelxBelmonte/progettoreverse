// Function: FUN_0140c540
// Address: 0140c540
// Size: 1252 bytes
// Class: Unknown


void FUN_0140c540(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  longlong unaff_RDI;
  longlong lVar6;
  longlong local_f0;
  undefined1 local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38 [8];
  
  lVar2 = DAT_02704060;
  if (*(longlong *)(unaff_RDI + 0x20) == 0) {
    return;
  }
  if (DAT_02704060 != 0) {
    FUN_00d50b00();
  }
  local_e0 = lVar2;
  local_d8 = '\x01';
  iVar3 = FUN_00d90650();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02704060;
  if (iVar3 == -1) {
    return;
  }
  if (DAT_02704060 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar2;
  local_c8 = '\x01';
  FUN_00d91000(1,&local_d0);
  lVar2 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23340();
  lVar1 = local_40;
  pcVar5 = &local_70;
  if (local_38[0] != '\0') {
    pcVar5 = local_38;
  }
  local_70 = local_38[0];
  *pcVar5 = '\0';
  if ((local_38[0] != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 == '\0') {
    if (lVar1 == 0) goto LAB_0140c6c1;
    FUN_00d50b00();
  }
  else if (lVar1 == 0) {
LAB_0140c6c1:
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    return;
  }
  FUN_00d95590();
  local_58 = 0;
  local_60 = CONCAT71(uStack_6f,local_70);
  if (local_68 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_58 = '\x01';
  FUN_00d8ede0();
  local_50 = local_80;
  local_48 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_48 = '\x01';
  FUN_00d996e0(&local_50,&local_60);
  lVar6 = local_40;
  lVar4 = lVar1;
  if (lVar1 == local_40) {
joined_r0x0140c761:
    lVar6 = lVar4;
    if ((local_38[0] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38[0] == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      lVar4 = lVar6;
      lVar1 = local_40;
      goto joined_r0x0140c761;
    }
    FUN_00d50b20();
    local_38[0] = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
    FUN_00d50b20();
  }
  local_b8 = '\0';
  lVar1 = *(longlong *)(unaff_RDI + 0x10);
  local_c0 = lVar6;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_e8 = 1;
  local_f0 = lVar1;
  FUN_0140ae70(0,&local_f0);
  lVar4 = local_40;
  if ((local_38[0] == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = lVar6;
  if (((lVar4 != 0) && (lVar4 != lVar6)) && (FUN_00d50b00(), lVar1 = lVar4, lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  local_a8 = '\0';
  local_b0 = lVar1;
  iVar3 = FUN_01780950();
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (iVar3 == -0x80000000) goto LAB_0140c9f1;
  FUN_01716a00();
  FUN_00d23620();
  local_90 = DAT_02704060;
  local_a0 = lVar2;
  local_98 = '\0';
  if (DAT_02704060 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  FUN_00d95130();
  lVar6 = *(longlong *)(unaff_RDI + 0x20);
  lVar4 = lVar6;
  if (lVar6 != local_40) {
    if (local_38[0] == '\0') {
      if (local_40 == 0) {
        lVar4 = 0;
        goto LAB_0140c95a;
      }
      FUN_00d50b00();
      lVar6 = *(longlong *)(unaff_RDI + 0x20);
      *(longlong *)(unaff_RDI + 0x20) = local_40;
      lVar4 = local_40;
    }
    else {
      local_38[0] = '\0';
      lVar4 = local_40;
LAB_0140c95a:
      *(longlong *)(unaff_RDI + 0x20) = lVar4;
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
      lVar4 = local_40;
    }
  }
  if ((local_38[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
LAB_0140c9f1:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 == 0) {
    return;
  }
  FUN_00d50b20();
  return;
}


