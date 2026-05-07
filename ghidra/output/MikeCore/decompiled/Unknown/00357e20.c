// Function: FUN_00357e20
// Address: 00357e20
// Size: 576 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00357edd) */
/* WARNING: Removing unreachable block (ram,0x00357ee6) */
/* WARNING: Removing unreachable block (ram,0x00357f3f) */
/* WARNING: Removing unreachable block (ram,0x00357f4c) */
/* WARNING: Removing unreachable block (ram,0x0035800e) */
/* WARNING: Removing unreachable block (ram,0x0035801b) */

void FUN_00357e20(void)

{
  undefined8 *unaff_RDI;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_40;
  char local_38;
  
  FUN_003ba620();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_01c00e50();
    FUN_01bbfb40();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      FUN_002e4b80();
      if (local_40 != (longlong *)0x0) {
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        FUN_007646f0();
        FUN_003ba620();
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        FUN_012d2830();
        if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != (longlong *)0x0) {
          (**(code **)(*local_40 + 0x658))();
          FUN_00d50b20();
          FUN_00d50b20();
          FUN_00d50b20();
          return;
        }
      }
      FUN_00d50b20();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


