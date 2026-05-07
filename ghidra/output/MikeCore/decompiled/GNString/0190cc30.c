// Function: FUN_0190cc30
// Address: 0190cc30
// Size: 654 bytes
// Class: GNString


void FUN_0190cc30(undefined8 param_1)

{
  int iVar1;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar2;
  longlong lVar3;
  longlong local_80;
  undefined1 local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_31;
  
  lVar3 = *unaff_RSI;
  local_31 = (char)unaff_RSI[1];
  if ((local_31 != '\0') && (lVar3 != 0)) {
    FUN_00d50b00();
  }
  lVar2 = *(longlong *)(unaff_RDI + 0x60);
  local_40 = lVar3;
  if (lVar2 != 0) {
    FUN_00d50b00();
    lVar3 = lVar2;
    goto LAB_0190cdab;
  }
  FUN_00d9bb60();
  local_50 = local_70;
  local_48 = 0;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_48 = '\x01';
  FUN_00e43480();
  if (local_60 != 0) {
    lVar2 = local_60;
    if (local_58 == '\0') {
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x60) == lVar2) {
    lVar3 = lVar2;
    if (lVar2 != 0) goto LAB_0190cd6f;
LAB_0190cd8e:
    lVar3 = 0;
  }
  else {
    FUN_00d64850();
    lVar3 = *(longlong *)(unaff_RDI + 0x60);
    if (lVar3 != lVar2) {
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x60) = lVar2;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    lVar3 = *(longlong *)(unaff_RDI + 0x60);
    if (*(longlong *)(unaff_RDI + 0x60) == 0) goto LAB_0190cd8e;
LAB_0190cd6f:
    FUN_00d50b00();
    if (lVar3 == lVar2) {
      FUN_00d50b20();
      lVar3 = lVar2;
      goto LAB_0190cdab;
    }
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
LAB_0190cdab:
  if ((local_40 != 0) && (iVar1 = FUN_00d8c7a0(), iVar1 != 0)) {
    local_80 = local_40;
    local_78 = 0;
    FUN_0190d1d0(param_1,&local_80);
    if ((local_58 == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    if (*(longlong *)(unaff_RDI + 0x58) != local_60) {
      FUN_00d64850();
      lVar2 = *(longlong *)(unaff_RDI + 0x58);
      if (lVar2 != local_60) {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
        *(longlong *)(unaff_RDI + 0x58) = local_60;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    FUN_00d64850();
    if (*(longlong *)(unaff_RDI + 0x68) != 0) {
      *(longlong *)(unaff_RDI + 0x68) = 0;
      FUN_00d50b20();
    }
    FUN_00d64910();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_31 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}


