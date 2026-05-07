// Function: FUN_00c74170
// Address: 00c74170
// Size: 606 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x00c742cd) */
/* WARNING: Removing unreachable block (ram,0x00c74325) */
/* WARNING: Removing unreachable block (ram,0x00c7432a) */
/* WARNING: Removing unreachable block (ram,0x00c74332) */
/* WARNING: Removing unreachable block (ram,0x00c74337) */
/* WARNING: Removing unreachable block (ram,0x00c742d3) */
/* WARNING: Removing unreachable block (ram,0x00c742d8) */
/* WARNING: Removing unreachable block (ram,0x00c742e3) */
/* WARNING: Removing unreachable block (ram,0x00c7423d) */
/* WARNING: Removing unreachable block (ram,0x00c74246) */
/* WARNING: Removing unreachable block (ram,0x00c741fd) */
/* WARNING: Removing unreachable block (ram,0x00c74206) */
/* WARNING: Removing unreachable block (ram,0x00c74251) */
/* WARNING: Removing unreachable block (ram,0x00c7425a) */
/* WARNING: Removing unreachable block (ram,0x00c7435c) */
/* WARNING: Removing unreachable block (ram,0x00c74365) */
/* WARNING: Removing unreachable block (ram,0x00c741b5) */
/* WARNING: Removing unreachable block (ram,0x00c741be) */
/* WARNING: Removing unreachable block (ram,0x00c74304) */
/* WARNING: Removing unreachable block (ram,0x00c74311) */

void FUN_00c74170(void)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_90;
  char local_88;
  longlong local_40;
  char local_38;
  
  FUN_00c8e710();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00daa540();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar1 = (**(code **)(*unaff_RSI + 0x618))();
  *(undefined1 *)(unaff_RSI + 0xd) = uVar1;
  (**(code **)(*unaff_RSI + 0x608))();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    (**(code **)(*unaff_RSI + 0x608))();
    (**(code **)(*local_90 + 0x368))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = 0;
  if (((char)unaff_RSI[0xd] != '\0') && (local_40 != 0)) {
    FUN_00d50b00();
    lVar2 = local_40;
  }
  *unaff_RDI = lVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


