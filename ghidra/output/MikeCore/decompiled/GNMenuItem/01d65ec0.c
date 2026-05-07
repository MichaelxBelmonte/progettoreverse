// Function: FUN_01d65ec0
// Address: 01d65ec0
// Size: 516 bytes
// Class: GNMenuItem


/* WARNING: Removing unreachable block (ram,0x01d660ad) */
/* WARNING: Removing unreachable block (ram,0x01d660b6) */
/* WARNING: Removing unreachable block (ram,0x01d6601f) */
/* WARNING: Removing unreachable block (ram,0x01d6602c) */

void FUN_01d65ec0(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RSI + 0x20) == 0) {
LAB_01d66058:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar4 = *(longlong *)(unaff_RSI + 0x50);
    if (lVar4 == 0) {
      plVar2 = *(longlong **)(unaff_RSI + 0x58);
      if (plVar2 != (longlong *)0x0) {
        lVar4 = *(longlong *)(unaff_RSI + 0x20);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_01caeba0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        cVar3 = (**(code **)(*plVar2 + 0x3b8))(param_1,0);
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          lVar4 = *(longlong *)(unaff_RSI + 0x58);
          if (lVar4 != 0) goto LAB_01d65f02;
          goto LAB_01d65f0a;
        }
      }
      lVar4 = local_40;
      if ((*(longlong *)(unaff_RSI + 0x38) == 0) || (FUN_01d62b90(), local_40 == 0)) {
        FUN_01f27fe0();
        iVar1 = *(int *)(local_40 + 0xe0);
        if (local_38 != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 != 0) goto LAB_01d66058;
        FUN_01f27fe0();
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            *unaff_RDI = local_40;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            return;
          }
          lVar4 = 0;
        }
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_01d65f02:
      FUN_00d50b00();
    }
LAB_01d65f0a:
    *unaff_RDI = lVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}


