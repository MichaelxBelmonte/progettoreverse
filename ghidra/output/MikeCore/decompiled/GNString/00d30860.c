// Function: FUN_00d30860
// Address: 00d30860
// Size: 1023 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00d30b67) */
/* WARNING: Removing unreachable block (ram,0x00d30b77) */

void FUN_00d30860(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  longlong *local_c0;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  lVar2 = DAT_0277d5a8;
  lVar4 = *unaff_RDI;
  if (lVar4 != 0) goto LAB_00d30959;
  if (DAT_0277d5a8 != 0) {
    FUN_00d50b00();
  }
  FUN_00d306a0();
  lVar3 = local_58;
  lVar4 = *unaff_RDI;
  if (lVar4 == local_58) {
    if (((char)unaff_RDI[1] == '\0') && (local_58 != 0)) {
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00d3093f;
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = unaff_RDI[1];
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar3;
      if (((char)lVar1 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      *unaff_RDI = local_58;
      if (((char)lVar1 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_00d3093f:
    local_c0 = unaff_RDI + 1;
    *(undefined1 *)local_c0 = 1;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar4 = *unaff_RDI;
LAB_00d30959:
  lVar2 = DAT_028a76e8;
  if (DAT_028a76e8 != lVar4) {
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    DAT_028a76e8 = lVar4;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((lVar4 != 0) && (DAT_028a76f0 == '\0')) {
    DAT_028a76f0 = '\x01';
    FUN_00e8cb90();
  }
  FUN_00d6f370();
  lVar4 = *(longlong *)(*unaff_RDI + 0x10);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_0277d618;
  if (DAT_0277d618 != 0) {
    FUN_00d50b00();
  }
  FUN_00d6f570();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  FUN_00d71400();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e41bf0();
  lVar4 = local_58;
  if (local_50 == '\0') {
    if (local_58 == 0) {
      return;
    }
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == 0) {
    return;
  }
  local_50 = '\0';
  local_58 = 0;
  local_48 = lVar4;
  local_40 = -1;
  iStack_3c = 0;
  local_38 = 0;
  while( true ) {
    if (iStack_3c != 0) {
      if (iStack_3c < 1) {
        iStack_3c = -iStack_3c;
      }
      else {
        local_40 = local_40 - iStack_3c;
        FUN_00d23690();
        local_38 = local_38 + iStack_3c;
        iStack_3c = 0;
      }
    }
    lVar4 = (longlong)local_40;
    local_40 = local_40 + 1;
    if (*(int *)(local_48 + 0xc) <= local_40) break;
    local_58 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar4 * 8);
    FUN_00e41520();
  }
  FUN_00d361f0();
  FUN_00d403d0();
  lVar4 = DAT_026fce70;
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_78 = *unaff_RDI;
  local_70 = '\0';
  local_68 = 0;
  local_60 = '\0';
  FUN_00d40470(&local_68,&local_78,1,3);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


