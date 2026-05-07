// Function: FUN_00b7be00
// Address: 00b7be00
// Size: 548 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x00b7bfe1) */
/* WARNING: Removing unreachable block (ram,0x00b7bfea) */
/* WARNING: Removing unreachable block (ram,0x00b7bf95) */
/* WARNING: Removing unreachable block (ram,0x00b7bf9e) */
/* WARNING: Removing unreachable block (ram,0x00b7bf3b) */
/* WARNING: Removing unreachable block (ram,0x00b7bf44) */

void FUN_00b7be00(undefined8 param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong local_38;
  char local_30;
  
  if ((DAT_028a5590 == 0) || (DAT_028a5599 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5590 == 0) {
      FUN_00da4d00();
      FUN_00b7c170();
      lVar2 = DAT_028a5590;
      if (DAT_028a5590 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_38;
          }
        }
        else {
          local_30 = '\0';
          lVar2 = local_38;
        }
        bVar1 = DAT_028a5590 != 0;
        DAT_028a5590 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_38;
        }
      }
      if ((lVar2 != 0) && (DAT_028a5598 == '\0')) {
        DAT_028a5598 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_38;
      }
      if ((local_30 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      DAT_028a5599 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5599 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00b7c210();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      goto LAB_00b7bf49;
    }
LAB_00b7bf67:
    if (param_2 == '\0') {
      FUN_00c8e690();
      if ((local_30 == '\0') && (local_38 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      goto LAB_00b7c003;
    }
    FUN_00c8e690();
    if ((local_30 == '\0') && (local_38 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
  }
  else {
    if (local_38 == 0) goto LAB_00b7bf67;
LAB_00b7bf49:
    if (*(int *)(local_38 + 0x18) < unaff_ESI) {
      FUN_00c8e340();
    }
    if (param_2 == '\0') goto LAB_00b7c003;
  }
  ___bzero();
LAB_00b7c003:
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


