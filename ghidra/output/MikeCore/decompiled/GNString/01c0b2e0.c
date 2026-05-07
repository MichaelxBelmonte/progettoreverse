// Function: FUN_01c0b2e0
// Address: 01c0b2e0
// Size: 761 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01c0b4ba) */
/* WARNING: Removing unreachable block (ram,0x01c0b4c6) */
/* WARNING: Removing unreachable block (ram,0x01c0b440) */
/* WARNING: Removing unreachable block (ram,0x01c0b44c) */
/* WARNING: Removing unreachable block (ram,0x01c0b4d4) */
/* WARNING: Removing unreachable block (ram,0x01c0b4e0) */

void FUN_01c0b2e0(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *unaff_RDI;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &DAT_02572358;
  (*DAT_02572370)();
  if (*param_2 != 0) {
    local_68 = '\0';
    local_70 = 0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = *param_2;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar3 = -local_58._4_4_;
        }
        else {
          iVar3 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar3);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar3 = 0;
        }
        local_58 = CONCAT44(iVar3,(int)local_58);
      }
      lVar2 = (longlong)(int)local_58;
      iVar3 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar3);
      if (*(int *)(local_60 + 0xc) <= iVar3) break;
      local_e8 = *(longlong *)(*(longlong *)(local_60 + 0x10) + 8 + lVar2 * 8);
      local_e0 = 0;
      local_70 = local_e8;
      FUN_01c0ec80(*(longlong *)(local_60 + 0x10),&local_e8);
      lVar2 = local_d8;
      if (local_d0 == '\0') {
        if (local_d8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_d0 = '\0';
      }
      FUN_00d21140();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00115910();
  }
  FUN_01c0d420();
  (**(code **)(*unaff_RDI + 0x378))();
  lVar2 = unaff_RDI[5];
  iVar3 = (int)lVar2 + -1;
  *(int *)(unaff_RDI + 5) = iVar3;
  if ((int)lVar2 < 1) {
    *(undefined4 *)(unaff_RDI + 5) = 0;
  }
  else if (iVar3 != 0) goto LAB_01c0b5d1;
  FUN_00d403d0();
  lVar2 = DAT_027e9280;
  if (DAT_027e9280 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_80 = 0;
  local_78 = '\0';
  FUN_00d40470(&local_80,&stack0xffffffffffffffb8,1,3);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
LAB_01c0b5d1:
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


