// Function: FUN_00511de0
// Address: 00511de0
// Size: 615 bytes
// Class: MDCopyDataToController


/* WARNING: Removing unreachable block (ram,0x00511f75) */
/* WARNING: Removing unreachable block (ram,0x00511f82) */
/* WARNING: Removing unreachable block (ram,0x00511e76) */
/* WARNING: Removing unreachable block (ram,0x00511e99) */
/* WARNING: Removing unreachable block (ram,0x00511e9e) */
/* WARNING: Removing unreachable block (ram,0x00511eaa) */
/* WARNING: Removing unreachable block (ram,0x00511eb3) */
/* WARNING: Removing unreachable block (ram,0x00511e7c) */
/* WARNING: Removing unreachable block (ram,0x00511e85) */
/* WARNING: Removing unreachable block (ram,0x00512005) */
/* WARNING: Removing unreachable block (ram,0x0051200e) */
/* WARNING: Removing unreachable block (ram,0x00511e2c) */
/* WARNING: Removing unreachable block (ram,0x00511e35) */

void FUN_00511de0(void)

{
  longlong lVar1;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  
  (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0xe20))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      goto LAB_00511e3a;
    }
  }
  else if (local_48 != 0) {
LAB_00511e3a:
    if (*(int *)(local_48 + 0xc) != 0) goto joined_r0x00511eda;
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x9b0))();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
joined_r0x00511eda:
  if (unaff_ESI == 0) {
    if (*(char *)(unaff_RDI + 0x80) == '\0') {
      lVar1 = *(longlong *)(unaff_RDI + 0x78);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_012fd540(*(undefined1 *)(unaff_RDI + 0x94),1,*(undefined1 *)(unaff_RDI + 0x95),
                   *(undefined1 *)(unaff_RDI + 0x96));
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar1 = *(longlong *)(unaff_RDI + 0x78);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01300180(*(undefined1 *)(unaff_RDI + 0x94),1,*(undefined1 *)(unaff_RDI + 0x95),
                   *(undefined1 *)(unaff_RDI + 0x96));
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if (*(longlong *)(unaff_RDI + 0x70) != 0) {
    *(undefined8 *)(unaff_RDI + 0x70) = 0;
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}


