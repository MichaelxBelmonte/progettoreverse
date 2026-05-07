// Function: FUN_01ef79a0
// Address: 01ef79a0
// Size: 535 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01ef7b02) */
/* WARNING: Removing unreachable block (ram,0x01ef7b0f) */
/* WARNING: Removing unreachable block (ram,0x01ef7ba0) */
/* WARNING: Removing unreachable block (ram,0x01ef7bac) */

void FUN_01ef79a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  longlong local_b0;
  char local_a8;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar3 = DAT_027dbf08;
  lVar1 = *param_2;
  lVar2 = *param_1;
  if (lVar1 == 0) {
    if (lVar2 == 0) {
      FUN_00d43000();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_a8 == '\0') {
        if (local_b0 != 0) {
          FUN_00d50b00();
          *unaff_RDI = local_b0;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
        local_b0 = 0;
      }
      *unaff_RDI = local_b0;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if ((char)param_1[1] != '\0') {
        *unaff_RDI = lVar2;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        *(undefined1 *)(param_1 + 1) = 0;
        return;
      }
      FUN_00d50b00();
      *unaff_RDI = lVar2;
    }
  }
  else {
    if (lVar2 != 0) {
      if (DAT_027dbf08 != 0) {
        FUN_00d50b00();
      }
      lVar1 = DAT_027fecf0;
      local_38 = 0;
      if (DAT_027fecf0 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar1;
      local_38 = '\x01';
      FUN_01ef7d30(&local_40,param_2,param_1);
      FUN_01ef7c90();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_48 == '\0') {
        if (local_50 == 0) {
          *unaff_RDI = 0;
          *(undefined1 *)(unaff_RDI + 1) = 1;
        }
        else {
          FUN_00d50b00();
          *unaff_RDI = local_50;
          *(undefined1 *)(unaff_RDI + 1) = 1;
        }
      }
      else {
        *unaff_RDI = local_50;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      FUN_002d10d0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((char)param_2[1] != '\0') {
      *unaff_RDI = lVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_2 + 1) = 0;
      return;
    }
    FUN_00d50b00();
    *unaff_RDI = lVar1;
  }
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


