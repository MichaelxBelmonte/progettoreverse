// Function: FUN_017d3860
// Address: 017d3860
// Size: 724 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x017d3a37) */
/* WARNING: Removing unreachable block (ram,0x017d3a40) */
/* WARNING: Removing unreachable block (ram,0x017d3b32) */
/* WARNING: Removing unreachable block (ram,0x017d3b3f) */
/* WARNING: Removing unreachable block (ram,0x017d3a7b) */
/* WARNING: Removing unreachable block (ram,0x017d3a88) */

undefined8 FUN_017d3860(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 unaff_RDI;
  longlong lVar4;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_48;
  char local_40;
  
  lVar1 = local_80;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02578b00;
  (*DAT_02578b18)();
  lVar4 = DAT_0276cc80;
  if (*param_2 != 0) {
    if (DAT_0276cc80 != 0) {
      FUN_00d50b00();
    }
    FUN_00d91bc0();
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      local_78 = '\0';
      local_80 = 0;
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar4 = 0;
        do {
          local_80 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar4 * 8);
          FUN_00d95590();
          if (local_88 == '\0') {
            if (local_90 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          FUN_00d97f20();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          if (local_90 != 0) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          iVar2 = FUN_00d8c7a0();
          if (iVar2 != 0) {
            local_40 = '\0';
            FUN_00d7a410();
          }
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
      }
      FUN_00018280();
      FUN_00d50b20();
    }
    iVar2 = FUN_00c8d620();
    if (iVar2 != 0) {
      FUN_017d3d40();
      FUN_00e01ce0(0,FUN_00d92680);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_017d3afd;
    }
  }
  FUN_017d3d40();
LAB_017d3afd:
  FUN_00d50b20();
  return unaff_RDI;
}


