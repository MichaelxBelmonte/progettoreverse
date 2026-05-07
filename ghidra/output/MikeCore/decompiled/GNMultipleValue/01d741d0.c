// Function: FUN_01d741d0
// Address: 01d741d0
// Size: 603 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01d7430f) */
/* WARNING: Removing unreachable block (ram,0x01d7431b) */
/* WARNING: Removing unreachable block (ram,0x01d743dc) */
/* WARNING: Removing unreachable block (ram,0x01d743e5) */
/* WARNING: Removing unreachable block (ram,0x01d74360) */
/* WARNING: Removing unreachable block (ram,0x01d74369) */

void FUN_01d741d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = DAT_027f0ae8;
  local_60 = 0;
  if (*param_2 != 0) {
    if (DAT_027f0ae8 != 0) {
      FUN_00d50b00();
    }
    cVar3 = FUN_00d90870();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027f0ae8;
    if (cVar3 != '\0') {
      if (DAT_027f0ae8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8c7a0();
      FUN_00d8f140();
      lVar2 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 == 0) {
        return;
      }
      iVar4 = FUN_00d8d560();
      if ((0 < iVar4) && (iVar5 = FUN_01d6fde0(), iVar4 <= iVar5)) {
        FUN_01d701d0();
        FUN_01d64eb0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (iVar4 + -1 == (int)unaff_RDI[0x45]) {
          (**(code **)(*unaff_RDI + 0x958))();
        }
      }
      FUN_00d50b20();
      return;
    }
    local_60 = *param_2;
  }
  local_58 = '\0';
  local_50 = *param_1;
  local_48 = '\0';
  FUN_01d12540(&local_50,&local_60);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}


