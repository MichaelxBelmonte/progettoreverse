// Function: FUN_01ecbb20
// Address: 01ecbb20
// Size: 1218 bytes
// Class: GNTextAutoCompleterItem


/* WARNING: Removing unreachable block (ram,0x01ecbcfe) */
/* WARNING: Removing unreachable block (ram,0x01ecbd0a) */
/* WARNING: Removing unreachable block (ram,0x01ecbd46) */
/* WARNING: Removing unreachable block (ram,0x01ecbd4f) */
/* WARNING: Removing unreachable block (ram,0x01ecbe94) */
/* WARNING: Removing unreachable block (ram,0x01ecbec1) */
/* WARNING: Removing unreachable block (ram,0x01ecbec6) */
/* WARNING: Removing unreachable block (ram,0x01ecbf20) */
/* WARNING: Removing unreachable block (ram,0x01ecbef2) */
/* WARNING: Removing unreachable block (ram,0x01ecbe30) */
/* WARNING: Removing unreachable block (ram,0x01ecbefc) */
/* WARNING: Removing unreachable block (ram,0x01ecbe0a) */
/* WARNING: Removing unreachable block (ram,0x01ecbd18) */
/* WARNING: Removing unreachable block (ram,0x01ecbdd9) */
/* WARNING: Removing unreachable block (ram,0x01ecbd5e) */
/* WARNING: Removing unreachable block (ram,0x01ecbd67) */
/* WARNING: Removing unreachable block (ram,0x01ecbde1) */
/* WARNING: Removing unreachable block (ram,0x01ecbd88) */
/* WARNING: Removing unreachable block (ram,0x01ecbde6) */
/* WARNING: Removing unreachable block (ram,0x01ecbd8e) */
/* WARNING: Removing unreachable block (ram,0x01ecbda1) */
/* WARNING: Removing unreachable block (ram,0x01ecbdb3) */
/* WARNING: Removing unreachable block (ram,0x01ecbdc0) */
/* WARNING: Removing unreachable block (ram,0x01ecbdeb) */
/* WARNING: Removing unreachable block (ram,0x01ecbdf3) */
/* WARNING: Removing unreachable block (ram,0x01ecbdfb) */
/* WARNING: Removing unreachable block (ram,0x01ecbe01) */
/* WARNING: Removing unreachable block (ram,0x01ecbe0f) */
/* WARNING: Removing unreachable block (ram,0x01ecbe18) */
/* WARNING: Removing unreachable block (ram,0x01ecbf43) */
/* WARNING: Removing unreachable block (ram,0x01ecbf46) */
/* WARNING: Removing unreachable block (ram,0x01ecbe86) */
/* WARNING: Removing unreachable block (ram,0x01ecbf01) */
/* WARNING: Removing unreachable block (ram,0x01ecbf09) */
/* WARNING: Removing unreachable block (ram,0x01ecbf30) */
/* WARNING: Removing unreachable block (ram,0x01ecbf39) */
/* WARNING: Removing unreachable block (ram,0x01ecbf1b) */
/* WARNING: Removing unreachable block (ram,0x01ecbe38) */
/* WARNING: Removing unreachable block (ram,0x01ecbe49) */
/* WARNING: Removing unreachable block (ram,0x01ecbe81) */
/* WARNING: Removing unreachable block (ram,0x01ecbe8b) */
/* WARNING: Removing unreachable block (ram,0x01ecbf5c) */
/* WARNING: Removing unreachable block (ram,0x01ecbf51) */
/* WARNING: Removing unreachable block (ram,0x01ecbf74) */
/* WARNING: Removing unreachable block (ram,0x01ecbf86) */
/* WARNING: Removing unreachable block (ram,0x01ecbf88) */
/* WARNING: Removing unreachable block (ram,0x01ecbfab) */
/* WARNING: Removing unreachable block (ram,0x01ecbfb0) */
/* WARNING: Removing unreachable block (ram,0x01ecbfcf) */

longlong * FUN_01ecbb20(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  iVar2 = FUN_00d8c7a0();
  if ((iVar2 == 0) && (0 < param_3)) {
    FUN_00d23310();
    pcVar4 = local_38;
    if (local_40[0] != '\0') {
      pcVar4 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    iVar2 = FUN_00d8c7a0();
    if ((iVar2 != 0) || (-1 < param_3)) {
      lVar3 = *(longlong *)(unaff_RSI + 0x18);
      if (0 < *(int *)(lVar3 + 0xc)) {
        lVar5 = 0;
        do {
          plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + lVar5 * 8);
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar1 + 0x3a0))();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 == 0) && ((**(code **)(*plVar1 + 0x88))(), local_40[0] != '\0')) {
            local_40[0] = '\0';
          }
          FUN_00d50b20();
          lVar5 = lVar5 + 1;
          lVar3 = *(longlong *)(unaff_RSI + 0x18);
        } while (lVar5 < *(int *)(lVar3 + 0xc));
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return unaff_RDI;
    }
    FUN_00d23340();
    pcVar4 = local_38;
    if (local_40[0] != '\0') {
      pcVar4 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((local_38[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


