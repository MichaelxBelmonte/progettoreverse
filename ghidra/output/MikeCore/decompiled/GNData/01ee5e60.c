// Function: FUN_01ee5e60
// Address: 01ee5e60
// Size: 512 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x01ee5eb3) */
/* WARNING: Removing unreachable block (ram,0x01ee5ebc) */

void FUN_01ee5e60(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_70 = *param_2;
  local_68 = '\0';
  FUN_00d5adf0(param_1,&local_70);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027fecb0;
  if (DAT_027fecb0 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  cVar2 = FUN_00d90870();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    DAT_028ba600 = 0;
  }
  if (DAT_028ba601 == '\x01') {
    FUN_00d403d0();
    local_50 = DAT_0270d3d8;
    if (DAT_0270d3d8 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    if (unaff_RDI != 0) {
      FUN_00d50b00();
    }
    local_40 = 0;
    local_38 = '\0';
    FUN_00d40470(&local_40,&stack0xffffffffffffffd0,1,1);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x1c0);
    if (lVar1 != 0) {
      for (iVar3 = 0; iVar3 < *(int *)(lVar1 + 0xc); iVar3 = iVar3 + 1) {
        FUN_00ca1340();
      }
      FUN_01efcaf0();
    }
  }
  return;
}


