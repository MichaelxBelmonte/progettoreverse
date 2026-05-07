// Function: FUN_00bb7ca0
// Address: 00bb7ca0
// Size: 605 bytes
// Class: GNSoundFileChunk
// String references:
//   "CELE"


void FUN_00bb7ca0(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  longlong unaff_RDI;
  int iVar3;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  byte local_68 [16];
  undefined1 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  iVar3 = *(int *)(unaff_RDI + 0x38);
  iVar2 = FUN_00ae7ec0();
  iVar3 = iVar2 * iVar3 * *(int *)(unaff_RDI + 0x30);
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x3a0))(param_1,0x28);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccdf50(param_1,iVar3);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((*(longlong *)(unaff_RDI + 0x70) != 0) || (*(longlong *)(unaff_RDI + 0x58) != 0)) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x398))(param_1,local_68);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68[0] & 1) != 0) {
      FUN_00ccdee0(param_1,0);
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      iVar3 = iVar3 + 1;
    }
    lVar1 = DAT_02765240;
    if (*(longlong *)(unaff_RDI + 0x70) != 0) {
      if (DAT_02765240 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar1;
      local_48 = '\x01';
      FUN_000175c0(param_1,&local_50);
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_58 = 1;
      iVar2 = FUN_00bb72e0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      iVar3 = iVar3 + iVar2;
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x58);
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_90 = 1;
      local_98 = lVar1;
      iVar2 = FUN_00bb0460(param_1,&local_98);
      FUN_00d50b20();
      iVar3 = iVar3 + iVar2;
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x3a0))(param_1,4);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccdf50(param_1,iVar3 + 0x24);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  return;
}


