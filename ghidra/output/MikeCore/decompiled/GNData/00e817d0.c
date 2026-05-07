// Function: FUN_00e817d0
// Address: 00e817d0
// Size: 546 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x00e81921) */
/* WARNING: Removing unreachable block (ram,0x00e818b9) */
/* WARNING: Removing unreachable block (ram,0x00e819d8) */
/* WARNING: Removing unreachable block (ram,0x00e81901) */
/* WARNING: Removing unreachable block (ram,0x00e81931) */

void FUN_00e817d0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong *unaff_RDI;
  bool bVar4;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  local_78 = *param_2;
  local_70 = '\0';
  FUN_019a54a0(param_1,&local_78);
  local_38[0] = local_48[0];
  pcVar2 = local_48;
  if (local_48[0] == '\0') {
    pcVar2 = local_38;
  }
  *pcVar2 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 == 0) {
    FUN_00d23340();
    local_38[0] = local_48[0];
    pcVar2 = local_38;
    if (local_48[0] != '\0') {
      pcVar2 = local_48;
    }
    *pcVar2 = '\0';
    bVar4 = true;
    if (*param_1 == 0) {
      FUN_00d23340();
      pcVar2 = local_48;
      if (local_48[0] == '\0') {
        pcVar2 = local_40;
      }
      local_40[0] = local_48[0];
      *pcVar2 = '\0';
      bVar4 = *param_3 != 0;
    }
    if (bVar4) {
      local_68 = *param_1;
      local_60 = '\0';
      FUN_00d21140();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = *param_3;
      local_48[0] = '\0';
      FUN_00d21140();
      if ((local_48[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar1 = param_2[1];
    *unaff_RDI = *param_2;
    plVar3 = unaff_RDI + 1;
    if ((char)lVar1 != '\0') {
      plVar3 = param_2 + 1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    *(undefined1 *)plVar3 = 0;
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = local_50;
    if (local_38[0] == '\0') {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
  }
  return;
}


