// Function: FUN_01ce4390
// Address: 01ce4390
// Size: 549 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01ce4548) */
/* WARNING: Removing unreachable block (ram,0x01ce4555) */
/* WARNING: Removing unreachable block (ram,0x01ce4512) */
/* WARNING: Removing unreachable block (ram,0x01ce451f) */
/* WARNING: Removing unreachable block (ram,0x01ce457e) */
/* WARNING: Removing unreachable block (ram,0x01ce458b) */

void FUN_01ce4390(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_58;
  char local_50;
  longlong local_38;
  char local_30;
  
  lVar3 = DAT_02704060;
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    if (*(longlong **)(unaff_RSI + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RSI + 0x18) + 1000))();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
          *unaff_RDI = local_38;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        local_38 = 0;
      }
      *unaff_RDI = local_38;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
    if (DAT_02704060 != 0) {
      FUN_00d50b00();
    }
    FUN_00cddf30();
    (**(code **)(*local_58 + 1000))();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *unaff_RDI = 0;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *unaff_RDI = local_38;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
    }
    else {
      *unaff_RDI = local_38;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  cVar1 = (char)param_1[1];
  if (cVar1 != '\0') {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar2 + 0x3a0))();
  if (cVar4 == '\0') {
    if (cVar1 != '\0') {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  (**(code **)(*plVar2 + 1000))();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      *unaff_RDI = local_38;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      goto LAB_01ce43f6;
    }
    local_38 = 0;
  }
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_01ce43f6:
  if (cVar1 != '\0') {
    FUN_00d50b20();
  }
  return;
}


