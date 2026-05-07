// Function: FUN_01b5a960
// Address: 01b5a960
// Size: 2165 bytes
// Class: MUColorCorrectionCtrl


/* WARNING: Removing unreachable block (ram,0x01b5b0c6) */
/* WARNING: Removing unreachable block (ram,0x01b5b0d2) */
/* WARNING: Removing unreachable block (ram,0x01b5b048) */
/* WARNING: Removing unreachable block (ram,0x01b5b051) */
/* WARNING: Removing unreachable block (ram,0x01b5af5a) */
/* WARNING: Removing unreachable block (ram,0x01b5af63) */
/* WARNING: Removing unreachable block (ram,0x01b5ae71) */
/* WARNING: Removing unreachable block (ram,0x01b5ae7a) */
/* WARNING: Removing unreachable block (ram,0x01b5ad83) */
/* WARNING: Removing unreachable block (ram,0x01b5ad8c) */
/* WARNING: Removing unreachable block (ram,0x01b5ac9a) */
/* WARNING: Removing unreachable block (ram,0x01b5aca3) */
/* WARNING: Removing unreachable block (ram,0x01b5abac) */
/* WARNING: Removing unreachable block (ram,0x01b5abb5) */
/* WARNING: Removing unreachable block (ram,0x01b5aa89) */
/* WARNING: Removing unreachable block (ram,0x01b5aa35) */
/* WARNING: Removing unreachable block (ram,0x01b5aa41) */
/* WARNING: Removing unreachable block (ram,0x01b5aa7d) */
/* WARNING: Removing unreachable block (ram,0x01b5ab35) */
/* WARNING: Removing unreachable block (ram,0x01b5ab3e) */
/* WARNING: Removing unreachable block (ram,0x01b5ac23) */
/* WARNING: Removing unreachable block (ram,0x01b5ac2c) */
/* WARNING: Removing unreachable block (ram,0x01b5ad0c) */
/* WARNING: Removing unreachable block (ram,0x01b5ad15) */
/* WARNING: Removing unreachable block (ram,0x01b5adfa) */
/* WARNING: Removing unreachable block (ram,0x01b5ae03) */
/* WARNING: Removing unreachable block (ram,0x01b5aee3) */
/* WARNING: Removing unreachable block (ram,0x01b5aeec) */
/* WARNING: Removing unreachable block (ram,0x01b5afd1) */
/* WARNING: Removing unreachable block (ram,0x01b5afda) */
/* WARNING: Removing unreachable block (ram,0x01b5b189) */
/* WARNING: Removing unreachable block (ram,0x01b5b192) */
/* WARNING: Removing unreachable block (ram,0x01b5a9a5) */
/* WARNING: Removing unreachable block (ram,0x01b5a9ae) */
/* WARNING: Removing unreachable block (ram,0x01b5a9ef) */
/* WARNING: Removing unreachable block (ram,0x01b5a9f8) */

undefined8 FUN_01b5a960(undefined8 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *unaff_RDI;
  undefined4 uVar4;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_01b57f70();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(*(longlong *)unaff_RDI[0xf] + 0x970))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01b5a9fd;
    }
  }
  else if (local_40 != 0) {
LAB_01b5a9fd:
    iVar2 = FUN_00d8c7a0();
    if (iVar2 < 1) {
      FUN_00d50b20();
      if (local_40 == 0) {
        return 1;
      }
      FUN_00d50b20();
      return 1;
    }
    cVar1 = FUN_01b58db0();
    if (cVar1 == '\0') {
      (**(code **)(*(longlong *)unaff_RDI[0xf] + 0x968))();
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      FUN_00d46dc0(0);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_0239011c);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_0239011c);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_02390124);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(0);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_0239011c);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_0239011c);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_02390124);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(0);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_0239011c);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_0239011c);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(DAT_02390124);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      uVar4 = FUN_00d21140();
      if (local_50 != 0) {
        uVar4 = FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        uVar4 = FUN_00d50b20();
      }
      local_90 = local_40;
      local_88 = '\0';
      FUN_01b58cf0(uVar4,&local_90);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      local_80 = DAT_027e4900;
      if (DAT_027e4900 != 0) {
        FUN_00d50b00();
      }
      local_78 = '\x01';
      FUN_00d50b00();
      local_70 = 0;
      local_68 = '\0';
      FUN_00d40470(&local_70,&stack0xffffffffffffffa0,1,3);
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x600))();
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_40 == 0) {
      return 1;
    }
    FUN_00d50b20();
    return 1;
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return 1;
}


