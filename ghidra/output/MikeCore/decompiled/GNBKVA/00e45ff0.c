// Function: FUN_00e45ff0
// Address: 00e45ff0
// Size: 598 bytes
// Class: GNBKVA


/* WARNING: Removing unreachable block (ram,0x00e46177) */
/* WARNING: Removing unreachable block (ram,0x00e46180) */

undefined8 FUN_00e45ff0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong unaff_RDI;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_80;
  char local_78;
  longlong local_70;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  FUN_00daab70();
  lVar2 = *(longlong *)(unaff_RDI + 0x90);
  if ((lVar2 != 0) && (lVar5 = *(longlong *)(lVar2 + 0x10), 0 < *(int *)(lVar5 + 0xc))) {
    lVar4 = 0;
    local_70 = lVar5;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar4 * 8);
      FUN_00c7e7b0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00dab040();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00c811b0();
      FUN_00daab70();
      local_78 = '\0';
      local_80 = lVar2;
      FUN_00e47ad0(param_1,&local_80);
      lVar5 = local_70;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_00d795b0();
      }
      FUN_00daab70();
      if (0 < iVar1) {
        iVar3 = 0;
        do {
          FUN_00d79670(param_1,iVar3);
          local_60 = 0;
          lVar2 = *(longlong *)(unaff_RDI + 0x30);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_60 = '\x01';
          local_68 = lVar2;
          FUN_00e5d8e0();
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          lVar5 = local_70;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          iVar3 = iVar3 + 1;
        } while (iVar1 != iVar3);
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      lVar4 = lVar4 + 1;
      lVar2 = (longlong)*(int *)(lVar5 + 0xc);
    } while (lVar4 < lVar2);
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}


